//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        
    int c = __builtin_popcount(N);
    
    if(c == 0 || c > 1) return -1;
    
    
    string s = bitset<32>(N).to_string();
    
    int ans = 0;
    for(int i = s.size() - 1;i >=0 ;i--){
        
        ans ++;
        
        if(s[i] == '1'){
            return ans;
        }            
    }
    
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends