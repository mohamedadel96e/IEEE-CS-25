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
  return x >=0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y];
}

void bfs(int start_x, int start_y, vector<string>& grid, vector<vector<bool>> & visited) {
  queue<pair<int,int>> q;
  q.push({start_x,start_y});
  visited[start_x][start_y] = true;
  while(!q.empty()) {
    auto [x,y] = q.front();
    q.pop();
    for(auto [dx,dy]:directions) {
      int new_x = x + dx;
      int new_y = y + dy;
      if(is_valid(new_x,new_y,grid.size(),grid[0].size(),grid,visited)) {
        visited[new_x][new_y] = true;
        q.push({new_x,new_y});
      }
    }
  }
}


void solve()
{
  int n, m; 
  cin >> n >> m;

  vector<string> grid(n);
  for (int i = 0; i < n; i++)
  {
    cin >> grid[i];
  }
  vector<vector<bool>> visited(n,vector<bool>(m, false));
  int rooms = 0;  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if(grid[i][j] == '.' && !visited[i][j]) {
        bfs(i,j,grid,visited);
        rooms++;
      }
    }
    
  }
  cout << rooms << endl;
  
  
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