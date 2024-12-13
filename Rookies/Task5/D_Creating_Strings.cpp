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

string generateStrings(string s, int &cnt)
{
  sort(all(s));
  vector<string> v;
  do
  {
    v.pb(s);
  } while(next_permutation(all(s)));
  string ans = "";
  ans += to_string(v.size()) + endl;
  for(auto x:v) {
    ans += x + endl;
    cnt++;
  }
  return ans;
}

void solve()
{
  string s; cin >> s;
  int cnt = 0;
  string answer = generateStrings(s,cnt);
  cout << answer;
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