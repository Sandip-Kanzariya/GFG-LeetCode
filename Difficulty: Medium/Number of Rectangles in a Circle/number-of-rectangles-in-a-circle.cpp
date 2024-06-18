//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
        
        int ans = 0;
        
        int d = r + r; // diameter 
        
        // a -> length
        // b -> width
        
        for(int a = 1;a <= d;a++){
            for(int b = 1;b <= d;b++){
                if(a * a + b * b <= 4 * r * r){
                    ans++;
                }
            }
        }
        return ans;
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
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends