/*
Problem Statement: Given a grid of dimension N x M where each cell in the grid can have values 0, 1, or 2 which has the following meaning:

0: Empty cell

1: Cells have fresh oranges

2: Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh oranges at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
*/

/*
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int orangesRotting(vector<vector<int>>&grid){
         int n = grid.size();
         int m = grid[0].size();
        //stroing rotten oranges in queue in from of{{row,column},time}
         queue<pair<pair<int,int>,int>> q;
         int vis[n][m];//visiting array
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0}); 
                    vis[i][j] = 2;//marked as rotten in the visited array
                }
                else{
                    vis[i][j] = 0;
                }
            }
        }
        int tm =0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,1,0,-1};
        while(!q.empty()){
             int r = q.front().first.first;//first row
             int c = q.front().first.second;
             int t = q.front().second; //time
             tm = max(tm,t);
             q.pop();
             for(int i=0;i<4;i++){
                int nrow = r + drow[i]; // neighbouring row
                int ncol = c + dcol[i];
                if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1)
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = 1;
             }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] !=2 && grid[i][j] == 1)
                    return -1;
            }
        }
    }

};

int main() {

  vector<vector<int>>grid{{0,1,2},{0,1,2},{2,1,1}};
  Solution obj;
  int ans = obj.orangesRotting(grid);
  cout << ans << "\n";

  return 0;
}
*/
#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector < vector < int >> & grid) {
      // figure out the grid size
      int n = grid.size();
      int m = grid[0].size();

      // store {{row, column}, time}
      queue < pair < pair < int, int > , int >> q;
      int vis[n][m];
      int cntFresh = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          // if cell contains rotten orange
          if (grid[i][j] == 2) {
            q.push({{i, j}, 0}); 
            // mark as visited (rotten) in visited array
            vis[i][j] = 2;
          }
          // if not rotten
          else {
            vis[i][j] = 0;
          }
          // count fresh oranges
          if (grid[i][j] == 1) cntFresh++;
        }
      }

      int tm = 0;
      // delta row and delta column
      int drow[] = {-1, 0, +1, 0};
      int dcol[] = {0, 1, 0, -1}; 
      int cnt = 0;

      // bfs traversal (until the queue becomes empty)
      while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        // exactly 4 neighbours 
        for (int i = 0; i < 4; i++) {
          // neighbouring row and column
          int nrow = r + drow[i];
          int ncol = c + dcol[i];
          // check for valid cell and 
          // then for unvisited fresh orange
          if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
            // push in queue with timer increased
             q.push({{nrow, ncol}, t + 1}); 
            // mark as rotten
            vis[nrow][ncol] = 2;
            cnt++;
          }
        }
      }

      // if all oranges are not rotten
      if (cnt != cntFresh) return -1;

      return tm;

    }
};

int main() {

  vector<vector<int>>grid{{0,1,2},{0,1,2},{2,1,1}};
  Solution obj;
  int ans = obj.orangesRotting(grid);
  cout << ans << "\n";

  return 0;
}
