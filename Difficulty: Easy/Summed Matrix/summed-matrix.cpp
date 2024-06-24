//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // 2 <= q <= n + n
        
        if(q < 2 || q > 2 * n) return 0;
        
        long long ans = 0;
        
        if(q <= n){
            ans = q - 1;
        } 
        else{
            long long d = q - n - 1;
            
            ans = n - d;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends