//Hey Problem Solver..... < I Love You :) >
//We OWN it.....
#include <bits/stdc++.h>
using namespace std;
// #include "debug.hpp"
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

int find_difference(vi &a, int n, int sum1, int sum2)
{
  if(n==0) return abs(sum1-sum2);
  return min(find_difference(a,n-1,sum1+a[n-1],sum2),find_difference(a,n-1,sum1,sum2+a[n-1]));
}
void solve()
{
  int n; cin >> n;
  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  cout << find_difference(a,n,0,0) << endl;
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