//Hey Problem Solver..... < I Love You :) >
//We OWN it.....
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

int fibonacci(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  return fibonacci(n-1)+fibonacci(n-2);
}

void solve()
{
  int n; cin >> n;
  cout << fibonacci(n) << endl;
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