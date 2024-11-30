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
  string s; cin >> s;
  vi arr(n);
  int Min = INT_MAX;
  cin >> arr[0];
  for (int i = 1; i < n; i++)
  {
    cin >> arr[i];
    if(s[i] == 'L' && s[i-1] == 'R')
    {
      Min = min(Min, (arr[i] - arr[i-1])/2);
    }
  }
  cout << (Min == INT_MAX ? -1 : Min) << endl;
  
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