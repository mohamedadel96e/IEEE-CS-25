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

bool can(int mid, int n, int k) {
  int sum = 0;
  int p = 1;
  sum += mid;
  while((mid = mid / k) > 0) {
    sum += mid;
    p++;
  }
  return sum >= n;
}
void solve()
{
  int n, k; cin >> n >> k;
  int lo = 1, hi = 1e9;
  int v = INT_MAX;
  while(lo <= hi) {
    int mid = lo + (hi - lo) / 2;
    if(can(mid, n, k)) {
      hi = mid - 1;
      v = mid;
    }
    else lo = mid + 1;
  }
  cout << v << endl;
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