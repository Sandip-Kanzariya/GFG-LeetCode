//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    
    long long mod =  1000000007;
    
    long long countWays(int n)
    {
        
        if(n == 1 || n == 2) return n;
        else if (n == 3) return 4;
        
        int dp[n + 1] = {0};
        
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        
        
        for(int i = 4;i <= n;i++){
            dp[i] = (dp[i - 1] % mod + dp[i - 2] % mod + dp[i - 3] % mod) % mod;
        }
        
        return dp[n];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends