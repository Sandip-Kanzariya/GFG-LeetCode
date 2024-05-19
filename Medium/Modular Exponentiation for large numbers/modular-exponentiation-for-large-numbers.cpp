//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    /* 
	    Time: O(logn) 
	    Space: o(1)
	    */
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int res = 1;
		    
		    while(n > 0){
		        
		       if(n % 2 == 1){ // odd power
		           res = (res * x) % M;
		       }
		       n = n / 2;
		       
		       x = (x * x) % M;
		    }
		    
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends