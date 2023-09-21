//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    
    int solve(int i, int arr[],vector <int> &dp){
        
        if(i == 0) return dp[i] = arr[i];
        if(i < 0) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int p = arr[i] + solve(i - 2, arr, dp);
        int np = 0 + solve(i - 1, arr, dp);
        
        return dp[i] = max(p,np);
    }
    int FindMaxSum(int arr[], int n)
    {
        // memoized recursive 
        
        vector <int> dp(n, -1);
        
        return solve(n - 1, arr, dp);
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends