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
vector<pair<int,int>> directions = {
  {1,0},{-1,0},{0,1},{0,-1}
};

bool is_valid(int x, int y, int n, int m, vector<string>& grid, vector<vector<bool>> & visited) {
  return x >=0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y];
}

void solve()
{
  int n,m; cin >> n>> m;
  vector<string> grid(n);
  pair<int,int> st,end;
  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
    for (int  j = 0; j < m; j++)
    {
      if(grid[i][j]=='A')
      {
        st = {i,j};
      }
      if(grid[i][j]=='B')
      {
        end = {i,j};
      }
    }
  }
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));
  queue<pair<int,int>> q;


  q.push(st); 
  visited[st.first][st.second] = true;
  bool found = false;
  while(!q.empty())
  {
    auto [x,y] = q.front();
    q.pop();
    if(x == end.first && y == end.second)
    {
      found = true;
      break;
    }
    for (int i = 0; i < 4; i++)
    {
      int new_x = x + directions[i].first;  
      int new_y = y + directions[i].second; 
      if(is_valid(new_x, new_y, n, m, grid, visited) )
      {
        visited[new_x][new_y] = true;
        parent[new_x][new_y] = {x,y};
        q.push({new_x,new_y});
        if(new_x == end.first && new_y == end.second)
        {
          found = true;
          break;
        }
      }
    }
  }
  if(!found)
  {
    cout<<"NO"<<endl;
    return;
  }
  cout << "YES" << endl;
  string path = "";
  pair<int,int> cur = end;
  while(cur != st) {
    auto [px,py] = parent[cur.first][cur.second];
    for (int i = 0; i < 4; i++)
    {
      if(px + directions[i].first == cur.first && py + directions[i].second == cur.second)
      {
        path += "DURL"[i]; /*DURL Stands for (Down, Up, Right, Left)*/
        break;
      }
    }
    cur = {px,py};
  }
  reverse(all(path));
  cout << path.size() << endl << path << endl;
  
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