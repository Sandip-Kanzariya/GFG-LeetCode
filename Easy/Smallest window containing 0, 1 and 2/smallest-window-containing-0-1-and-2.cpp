//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    // Two Pointer 
    int smallestSubstring(string S) {
        
        int ans = 1e8;
        int ok = 0;
        
        int l = 0, r = 0;
        
        vector <int> f(3, 0);
        
        while(l < r or r < S.size()){
            
            if(!ok and r < S.size()){
                
                ++f[S[r++] - '0'];
                
                if(f[0] && f[1] && f[2]){
                    ok = 1;
                }
                else{
                    ok = 0;
                }
            }
            else if(l < r){
                
                --f[S[l++] - '0'];
                
                if(f[0] && f[1] && f[2]){
                    ok = 1;
                }
                else{
                    ok = 0;
                }
                
            }
            
            if(ok)
            {
                ans = min(ans, r - l);
            }
        }
        
        return ans == 1e8 ? -1 : ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends