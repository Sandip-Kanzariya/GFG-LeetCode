//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    
	int minOperations(string str1, string str2) 
	{ 
	
	    int m = str1.size();
	    int n = str2.size();
	    int l = LCS(str1, str2, m, n);    
	    
	    return m + n - 2 * l;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends