//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int count = 0;
        
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                
                if(matrix[i][j] == 0){
                             
                    if(i - 1 >= 0) count += matrix[i - 1][j]; // Up
                    if(i + 1 < n) count += matrix[i + 1][j]; // Down
                    if(j - 1 >= 0) count += matrix[i][j - 1]; // Left
                    if(j + 1 < m) count += matrix[i][j + 1]; // Right
                }
            }       
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends