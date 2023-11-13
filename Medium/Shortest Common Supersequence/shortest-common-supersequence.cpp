//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
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
    
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
           return m + n - LCS(X, Y, m, n);
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends