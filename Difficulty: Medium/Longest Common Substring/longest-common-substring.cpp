//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
int LCSubstring(string x, string y, int n, int m){

    int t[n + 1][m + 1];

    // Base Condition  : initialization 
    for (int i = 0; i <= n; i++)
    {
        t[i][0] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        t[0][j] = 0;
    }
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(x[i - 1] == y[j - 1])
                t[i][j] = 1 + t[i - 1][j - 1];
            else{
                t[i][j] = 0;
            }
        }
    }
    
    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ans = max(ans, t[i][j]);
            // cout << t[i][j] << " ";
        }
        // cout << "\n";
    }
    
    return ans;
}
    int longestCommonSubstr(string str1, string str2) {
        
        int n = str1.size();      
        int m = str2.size();      
        
        return LCSubstring(str1, str2, n, m);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends