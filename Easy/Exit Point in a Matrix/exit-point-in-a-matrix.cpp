//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        
        int i = 0, j = 0, dir = 1; 
        
        /* 
            R - 1 
            D - 2 
            L - 3
            U - 4
        */
        
        while(i >= 0 && i < n && j >= 0 && j < m){
            
            if(matrix[i][j] == 1){
                matrix[i][j] = 0;
                dir = (dir + 1) % 4;
            }
            
            if(dir == 1){ // Go Right Side, Column Increase 
                j++;
            }
            else if(dir == 2){ // Go Down Side, Row Increase 
                i++; 
            }
            else if(dir == 3){ // Go Left Side, Column Decrease 
                j--; 
            }
            else{ // Go Up Side, Row Decrease 
                i--;
            }
        }
        
        if(dir == 1){ // Comeout from last column 
            j--;
        }
        else if(dir == 2){ // Comeout from Last Row
            i--;
        }
        else if(dir == 3){ // Comeout from First Column
            j++;
        }
        else{ // Comeout from First Row
            i++;
        }
        
        return {i, j};
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
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends