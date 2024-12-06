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
  int n,l,r; cin >> n >> l >> r;
  vi v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(all(v));
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int lower = l - v[i];
    int upper = r - v[i];
    ans += (upper_bound(all(v),upper) - lower_bound(all(v),lower));
    ans -= (v[i] * 2 >= l && v[i] * 2 <= r);
  }
  cout << ans / 2 << endl;
}
int32_t main() {
  flash
  ll test=1;
  cin>>test;
  while(test--)
  {
    solve();
  }
  return 0;
}