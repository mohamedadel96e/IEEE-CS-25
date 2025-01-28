//Hey Problem Solver..... < I Love You :) >
//We_OWN_it.....
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define flash                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define Mod 1000000007
#define p5 100007
#define pb(x) push_back(x)
#define all(v) v.begin(), v.end()
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef priority_queue<int, vi, greater<int> > pq_min;
typedef priority_queue<int> pq_max;

vector<vector<pair<int,int>>> cost;
vector<int> vis;
vector<int> inDeg;
int dfs(int u) {
  vis[u] = true;
  int max_cost = 0;
  for(auto [v,c] : cost[u]) {
    if(!vis[v]) {
      max_cost = max(max_cost, c + dfs(v));
    }
  }
  return max_cost;
}

void solve() {
  int n; cin >> n;
  cost.assign(n, vector<pair<int,int>>());
  vis.assign(n, false);
  inDeg.assign(n,0);
  for(int i = 0; i < n; i++) {
    int u, v, c;
    cin >> u >> v >> c;
    cost[u].push_back({v, c});
    cost[v].push_back({u, c});
    inDeg[u]++;
    inDeg[v]++;

  }
  int max_cost = dfs(0);
  cout << max_cost << endl;
}

void fread() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
  flash
  fread();
  ll test = 1;
  //cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}
