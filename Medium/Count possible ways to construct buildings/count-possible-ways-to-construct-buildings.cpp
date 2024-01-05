//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#define ll long long
int mod=1e9+7;
class Solution{
	public:
	
	// Fibonacci : https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1
	
	int TotalWays(int N)
	{
	    
        ll p1 = 1, p2 = 1;
	    
	    while(N--){
	        ll next = (p1 + p2) % mod;
	        p1 = p2;
	        p2 = next;
	    }
	    
	    return (p2 * p2) % mod;
	  
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends