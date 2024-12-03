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
  int n,t; cin >> n >> t;
  vi v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i < n; i++)
  {
    v[i] += v[i - 1];
  }
  int ans = 0;
  int lo = 0, hi = 0;
  for (int i = 0; i < n; i++)
  {
    lo = i; hi = n - 1;
    while(lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      int sum = v[mid] - (i > 0 ? v[i - 1] : 0);
      if(sum <= t){
        ans = max(ans, mid - i + 1);
        lo = mid +1;
      }
      else hi = mid - 1;
    }
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