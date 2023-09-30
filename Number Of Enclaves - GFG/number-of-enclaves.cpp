//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool valid(int i, int j, int n, int m){
        if(i >= 0 && i < n && j >= 0 && j < m) return true;
        else return false;
    }
    
    void dfs(int i, int j, vector<vector<int>> &grid){
        
        int n = grid.size();
        int m = grid[0].size();
        
        grid[i][j] = 0;
        
        if(valid(i + 1, j, n, m) && grid[i + 1][j]){
            dfs(i + 1, j, grid);
        }
        
        if(valid(i - 1, j, n, m) && grid[i - 1][j]){
            dfs(i - 1, j, grid);
        }
        
        if(valid(i, j + 1, n, m) && grid[i][j + 1]){
            dfs(i, j + 1, grid);
        }
        
        if(valid(i, j - 1, n, m) && grid[i][j - 1]){
            dfs(i, j - 1, grid);
        }
        
    }
    
   
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0;i < n;i++){
            
            for(int j = 0;j < m;j++){
                    
                    if((i == 0 || i == n - 1) || (j == 0 || j == m - 1)){
                        
                        if(grid[i][j] == 1){
                            
                            
                            dfs(i, j,  grid);
                        }
                    }
                    
            }
        }
        
        int ans = 0;
        for(int i = 0;i < n;i++){
            
            for(int j = 0;j < m;j++){
                    
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends