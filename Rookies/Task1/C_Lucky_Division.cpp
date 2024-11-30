//Hey Problem Solver..... < I Love You :) >
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define flash ios_base::sync_with_stdio(false);	cin.tie(NULL);	cout.tie(NULL);
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
  auto lucky = [](int n) -> bool {
    while(n)
    {
      if(n%10 != 4 && n%10 != 7)
        return false;
      n /= 10;
    }
    return true;
  };
  if(lucky(n)) {
    cout << "YES" << endl;
    return;
  }else {
    for(int i=1; i<=n; i++)
    {
      if(n%i == 0 && lucky(i))
      {
        cout << "YES" << endl;
        return;
      }
    }
    cout << "NO" << endl;
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