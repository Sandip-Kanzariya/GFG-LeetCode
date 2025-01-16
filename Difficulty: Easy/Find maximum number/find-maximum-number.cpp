//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string findMax(string N) {
        
        sort(N.rbegin(), N.rend());
        
        return N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.findMax(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends