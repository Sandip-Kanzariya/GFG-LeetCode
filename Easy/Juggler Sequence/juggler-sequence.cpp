//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        
        vector<long long> ans;
        
        ans.push_back(n);
        
        for(int i = 1; ;i++){
            
            if(ans[i - 1] == 1) 
                break;
            
            long double s = sqrt(ans[i - 1]);
            
            if(ans[i - 1] % 2) { // odd
                
                ans.push_back(floor(s * s * s));
            }
            else{ // even 
                ans.push_back(floor(s));
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
        long long n;
        cin >> n;

        Solution ob;
        vector<long long> ans = ob.jugglerSequence(n);
        for (long long u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends