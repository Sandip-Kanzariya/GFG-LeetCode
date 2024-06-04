//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        
        
        int n = s.size();
        
        // 10 -> 11 
        // 1001 -> 1010
        for(int i = n - 1;i >= 0;i--){
            if(s[i] == '1'){ // 1 -> 0
                s[i] = '0';
            }
            else{ // o -> 1
                s[i] = '1';
                break;
            }
        }
        
        // if s : string have all 1's 
        string ans = "1";
        for(int i = 0;i < n;i++) ans += '0';
        
        // remove preceding 0's 
        
        while(s[0] == '0'){
            s.erase(s.begin());
        }
        
        if(s.size() == 0) return ans;
        
        
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends