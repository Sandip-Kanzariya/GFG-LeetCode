//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        vector <int> v;
        int mx = 0;
        for(int i = 0;i < n;i++){
            int row = 0, col = 0;
            for(int j = 0;j < n;j++){
                
                row += matrix[i][j];
                col += matrix[j][i];
            }
            v.push_back(col);
            mx = max({mx, row, col});
        }
        
        
        int ans = 0;
        for(auto k : v){
            ans += mx - k;
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends