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

int n, m;
vector<bool> vis;
vector<pair<bool,vector<int>>> adj;

int dfs(int u, int parent, int consecutive_cats) {
  vis[u] = true;
  if(adj[u].first) {
    consecutive_cats++;
  }else
    consecutive_cats = 0;
  if(consecutive_cats > m) {
    return 0;
  }
  bool isLeaf = true;
  int valid = 0;
  for(auto v: adj[u].second) {
    if(v != parent && !vis[v]) {
      isLeaf = false;
      valid += dfs(v,u, consecutive_cats);
    }
  }
  return isLeaf? 1: valid;
}

void solve() {
  cin >> n >> m;
  vis.assign(n + 1, false);
  adj.assign(n + 1, pair<bool,vector<int>>());
  for(int i = 1; i <= n; i++) {
    int x; cin >> x;
    adj[i].first = x;
  }
  for(int i = 1; i <= n - 1; i++) {
    int u, v; cin >> u >> v;
    adj[u].second.pb(v);
    adj[v].second.pb(u);
  }
  int num_of_res = dfs(1, -1, 0) ;
  cout << num_of_res << endl;
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
