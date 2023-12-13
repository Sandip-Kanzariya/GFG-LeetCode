//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	
	// Fibonacci Series Question : 
	
	ll mod = 1e9 + 7;
	ll countStrings(int n) {
	    
	    ll p1 = 1, p2 = 1;
	    
	    while(n--){
	        ll next = (p1 + p2) % mod;
	        p1 = p2;
	        p2 = next;
	    }
	    
	    return p2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends