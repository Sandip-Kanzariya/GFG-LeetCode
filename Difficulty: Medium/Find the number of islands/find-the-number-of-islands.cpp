//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    
    vector <pair<int, int>> dxy = {{0, 1}, {0, -1}, {-1, 0}, {1,0},
                                   {-1,-1}, {-1, 1}, {1, -1}, {1, 1}};
                                   
    void findIslands(vector<vector<char>>& grid, int x, int y, 
        vector <vector<bool>> &visited){
        
        visited[x][y] = true;
        
        int n = grid.size(), 
            m = grid[0].size();
            
        for(int i = 0;i < 8;i++){
            auto p = dxy[i];
            int nx = x + p.first;
            int ny = y + p.second;
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                continue; // !!!!!
            }
            
            if(grid[nx][ny] == '1' && visited[nx][ny] == false){
                findIslands(grid, nx, ny, visited);
            }
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;
        
        vector <vector<bool>> visited(n, vector <bool> (m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] == '1' && visited[i][j] == 0){
                    islands++;
                    findIslands(grid, i, j, visited);
                }
            }   
        }
        return islands;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends