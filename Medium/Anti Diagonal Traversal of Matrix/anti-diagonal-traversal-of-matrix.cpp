//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  
    bool safe(int i, int j, int n){
        
        return i >=0 && i < n && j >= 0 && j < n;
    }
    
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        
        int n = matrix.size();
        
        vector <int> ans;
        
        
        // First Row (0, x) 
        for(int x = 0;x < n;x++){
            
            int j = 0;
            int i = x;
            while(safe(j, i, n)){
                ans.push_back(matrix[j][i]);
                j++;
                i--;
            }
        }
        
        
        // last Column (x, n - 1)
        
        for(int x = 1;x < n;x++){
            int j = x;
            int i = n - 1;
            while(safe(j, i, n)){
                ans.push_back(matrix[j][i]);
                j++;
                i--;
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
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends