//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    /* Brute Force : Find cell with zero value : row and column  
    Time: O(n * m)
    Space: O(Number of zeros in matrix)
    */
    void setMatrixZeroes(vector<vector<int>> &mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector <pair<int, int>> zeros;
        
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                if(mat[i][j] == 0){
                    zeros.push_back({i, j});
                }
            }
        }
        
        for(auto p : zeros){
            
            for(int i = 0;i < n;i++){
                mat[i][p.second] = 0;
            }
            
            for(int i = 0;i < m;i++){
                mat[p.first][i] = 0;
            }
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends