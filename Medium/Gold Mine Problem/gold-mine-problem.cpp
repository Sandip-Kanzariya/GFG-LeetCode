//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool safe(int i ,int j, int n, int m){
        
        return i < n && i >= 0 && j >= 0 && j < m ;
    }
    
    long long solve(int i, int j, vector<vector<int>> &dp , vector<vector<int>> &a, int n, int m){
        
        if(!safe(i, j, n, m)) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];  
        
        
        int t = max({
            solve(i - 1, j - 1, dp, a, n, m), 
            solve(i, j - 1, dp, a, n, m), 
            solve(i + 1, j - 1, dp, a, n, m) 
        });
        
        
        return dp[i][j] = t + a[i][j];
    }
    
    int maxGold(int n, int m, vector<vector<int>> a)
    {
        
        vector<vector<int>> dp(n, vector <int> (m, -1));
        
        long long ans = 0;
        
        for(int i = 0;i < n;i++){
            
            ans = max(ans, solve(i, m - 1, dp, a, n, m));
            
        }
        
        return ans;        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends