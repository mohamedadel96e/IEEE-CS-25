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
  int n; cin >> n;
  vi v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(all(v));
  int q; cin >> q;
  while(q--){
    int x; cin >> x;
    int lo = 0, hi = n-1;
    cout << upper_bound(all(v),x) - v.begin() << endl;
  }
  
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