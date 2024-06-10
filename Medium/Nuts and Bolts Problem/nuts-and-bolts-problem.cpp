//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        
        map <char, int> mp;
        
        mp['!'] = 1;
        mp['#'] = 1;
        mp['$'] = 1;
        mp['%'] = 1;
        mp['&'] = 1;
        mp['*'] = 1;
        mp['?'] = 1;
        mp['@'] = 1;
        mp['^'] = 1;
        
        for(int i = 0;i < n;i++){
            mp[nuts[i]]++;
        }
        
        int i = 0;
        for(auto k : mp){
            if(k.second != 1){
                nuts[i] = k.first;
                bolts[i] = k.first;
                i++;
            }
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends