//Hey Problem Solver..... < I Love You :) >
//We_OWN_it.....
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
vector<vector<int>> visited;
vector<vector<int>> grid;

void dfs(int x, int y, int& volume) {
  if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || visited[x][y] || grid[x][y] == 0) {
    return;
  }
  visited[x][y] = 1;
  volume += grid[x][y];
  dfs(x + 1, y, volume);
  dfs(x - 1, y, volume);
  dfs(x, y + 1, volume);
  dfs(x, y - 1, volume);
}

void solve()
{
  int n, m; cin >> n >> m;
  grid.assign(n, vector<int>(m)); 
  visited.assign(n, vector<int>(m, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }
  int max_volume = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if (grid[i][j] == 0) {
        continue;
      }
      int volume = 0;
      dfs(i, j, volume);
      max_volume = max(max_volume, volume);
    }
  }
  cout << max_volume << endl;
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