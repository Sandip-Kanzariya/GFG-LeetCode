//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        
        string st = "";
        int n = s.size();
        for(int i = 0;i < n;i++){
            
            if(count == 0){
                st += s[i];
            }
            
            if(count > 0 && s[i] == ch){
                count--;
            }
        }
        
        return st;
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
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends