//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    
    
    long long dp[1001][1001];
    
    long long solve(int n, int  arr[], int i, int j){
        
        // Base Case 
        if(i > j) return 0; // we are done with the game 
            
        // 
        if(dp[i][j] != -1) return dp[i][j];
        
        // 
        long long take = arr[i] + min(solve(n, arr, i + 2, j), solve(n, arr, i + 1, j - 1));
        long long not_take = arr[j] + min(solve(n, arr, i + 1, j - 1), solve(n, arr, i, j - 2));
        
        long long ans = max(take, not_take);
        
        return dp[i][j] = ans;
        
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        
        memset(dp, -1, sizeof(dp));
        
        return solve(n, arr, 0, n -1);
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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends