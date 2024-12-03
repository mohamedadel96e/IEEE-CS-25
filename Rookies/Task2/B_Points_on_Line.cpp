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
  int n, d; cin >> n >> d;
  vi v(n);
  if(n < 3) {
    cout << 0 << endl;
    return;
  }
  for(int i = 0; i < n; i++) cin >> v[i];
  int ans = INT_MIN;
  int lo = 0, hi = n - 1;
  int sum = 0; 
  for (int i = 0; i < n; i++)
  {
    lo = i; hi = n - 1;
    while(lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if(v[mid] - v[i] <= d) {
        ans = mid - i;
        lo = mid + 1;
      }
      else hi = mid - 1;
    }
    sum += ans * (ans - 1) / 2;
  }
  cout << sum << endl;
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