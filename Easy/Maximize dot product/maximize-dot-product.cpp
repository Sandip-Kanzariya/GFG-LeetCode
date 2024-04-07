//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public: 
	
	// take & not_take : DP memoization
	
	int solve(int i, int j, int n, int m, int a[], int b[], vector <vector <int>> &dp){
	    
	    if(j == m){
	        return 0;
	    }
	    
	    if(i == n) return -1e7;
	    
	    if(dp[i][j] != -1){
	        return dp[i][j];
	    }
	    
	    int not_take = 0 + solve(i + 1, j, n, m, a, b, dp); // Not Multiply a[i]
	    int take = a[i] * b[j] + solve(i + 1, j + 1, n, m, a, b, dp); // Multiply 
	    
	    return dp[i][j] = max(not_take, take);
	}
	
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
		
		vector <vector <int>> dp(n, vector <int>(m, -1));
		
		int ans = solve(0, 0, n, m, a, b, dp);
		
		return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends