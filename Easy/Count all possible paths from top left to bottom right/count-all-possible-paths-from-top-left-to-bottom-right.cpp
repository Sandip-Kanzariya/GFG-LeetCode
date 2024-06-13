//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    /* Recursive + Memoization (Top-Down)
    Time: O(m * n)
    Space: O(m * n) + O(m * n)
    */
    int mod = 1e9 + 7;
    
    long long int solve(int m, int n, vector <vector <int>> &dp){
        
        if(m == 0 && n == 0) return 1;
        
        if(m < 0 || n < 0) return 0;
        
        if(dp[m][n] != -1) return dp[m][n] % mod;
        
        return dp[m][n] = (solve(m - 1, n, dp) + solve(m, n - 1, dp)) % mod;
    }
    
    long long int numberOfPaths(int m, int n){
        
        vector <vector <int>> dp(m, vector <int>(n, -1));
        
        return solve(m - 1, n - 1, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends