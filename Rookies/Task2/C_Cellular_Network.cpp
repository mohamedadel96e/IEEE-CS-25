//Hey Problem Solver..... < I Love You :) >
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
typedef pair<int,int> pi;
typedef long long ll;
typedef vector <ll> vll;


void solve()
{
  int n,m; cin >> n >> m;
  vi cities(n);
  set<int> towers;
  for(int i = 0; i < n; i++) cin >> cities[i];
  for(int i = 0; i < m; i++) {
    int x; cin >> x;
    towers.insert(x);
  }
  int ans = INT_MIN;
  for(int i = 0; i < n; i++) {
    int dist = INT_MAX;
    auto it = towers.lower_bound(cities[i]);
    if(it != towers.end()) {
      dist = *it - cities[i];
    }
    if(it != towers.begin()) {
      it--;
      dist = min(dist, cities[i] - *it);
    }
    ans = max(ans, dist);
  }
  cout << ans << endl;
}
int32_t main() {
  flash
  ll test=1;
  //cin>>test;
  while(test--)
  {
    solve();
  }
  return 0;
}