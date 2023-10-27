//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
      int LCS(string x, string y, int n, int m){
    
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
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
                }
            }
        }
        
        return t[n][m];
    }
    int minimumNumberOfDeletions(string S) { 
        
        string b = S;
        
        reverse(b.begin(), b.end());
        
        int n = S.size();
        // Longest Palindromic Subsequence Size
        int lps = LCS(S, b, n, n);
        
        return S.size() - lps;
        
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends