//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	    long long mod = 1e9 + 7;
		int nthPoint(int N){
		    
		    
		    vector <int> dp(N + 1, 0);
		    
		    dp[1] = 1;
		    dp[2] = 2;
		    
		    for(int i = 3;i <= N;i++){
		      dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
		    }
		    
		    
		    return dp[N];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends