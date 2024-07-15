//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        
        if(d * 9 < s) return "-1";
        
        
        string ans = "";
        d -= 1;
        
        while(d--){
            
            if(s > 9){
                ans += "9";
                s -= 9;
            }
            else if(s > 1 && s <= 9){
                string diff = to_string(s - 1);
                ans += diff;
                s = 1;
            }
            else{
                ans += "0";
            }
        }
        
        ans += to_string(s);
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends