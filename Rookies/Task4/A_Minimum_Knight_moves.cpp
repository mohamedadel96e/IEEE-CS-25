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
struct position
{
  int x,y,moves;
};

vector<pair<int,int>> directions = {
  {2,1},{2,-1},{-2,1},{-2,-1},
  {1,2},{1,-2},{-1,2},{-1,-2}
};

bool is_valid_square(int x, int y)
{
  return x>=1 && x<=8 && y>=1 && y<=8;
}


void solve()
{
  string start,end;
  cin>>start>>end;
  int x1 = start[0] - 'a' + 1;
  int y1 = start[1] - '0';
  int x2 = end[0] - 'a' + 1;
  int y2 = end[1] - '0';
  if(x1==x2 && y1==y2)
  {
    cout<<0<<endl;
    return;
  }
  queue<position> q;
  q.push({x1,y1,0});
  vector<vector<bool>> visited(9,vector<bool>(9,false));
  visited[x1][y1]=true;
  while(!q.empty()){
    auto [x,y,moves] = q.front();
    q.pop();
    for(auto [dx,dy]:directions)
    {
      int new_x = x+dx;
      int new_y = y+dy;
      if(is_valid_square(new_x,new_y) && !visited[new_x][new_y])
      {
        visited[new_x][new_y]=true;
        if(new_x==x2 && new_y==y2)
        {
          cout<<moves+1<<endl;
          return;
        }
        q.push({new_x,new_y,moves+1});
      }
    }
  }
  return;
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