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
  char shift;
  cin >> shift;
  vector<string> s = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
  string str;
  cin >> str;
  int shiftIdx = (shift == 'L' ? 1 : -1);

  for (int i = 0; i < str.size(); i++)
  {
    int idx = s[0].find(str[i]);
    if (idx != -1)
    {
      cout << s[0][idx + shiftIdx];
      continue;
    }
    else if ((idx = s[1].find(str[i])) != -1)
    {
      cout << s[1][idx + shiftIdx];
      continue;
    }
    else
    {
      cout << s[2][s[2].find(str[i]) + shiftIdx];
      continue;
    }
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