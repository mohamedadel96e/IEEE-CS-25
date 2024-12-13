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

vector<string> board(8);
bool col[8],d1[15],d2[15];
int ans=0;

void placeQueens(int row) {
  if(row==8) {
    ans++;
    return;
  }
  for(int i=0;i<8;i++) {
    if(board[row][i]=='*') continue;
    if(col[i] || d1[row+i] || d2[row-i+7]) continue;
    col[i]=d1[row+i]=d2[row-i+7]=true;
    placeQueens(row+1);
    col[i]=d1[row+i]=d2[row-i+7]=false;
  }
}

void solve()
{
  for(auto &x:board) cin >> x;
  fill(col,col+8,false);
  fill(d1,d1+15,false); 
  fill(d2,d2+15,false);
  placeQueens(0);
  cout << ans << endl;
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