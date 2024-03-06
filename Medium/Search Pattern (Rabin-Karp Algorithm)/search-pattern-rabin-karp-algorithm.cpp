//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    
        vector <int> search(string P, string T)
        {
            
            vector <int> ans;
            
            int n = T.size();
            int m = P.size();
        
            // Preprocessing Step : Pi Table 
        
            vector <int> pi(m + 1, 0);
            pi[0] = -1;
            int k = -1;
        
            for (int i = 1; i <= m; i++)
            {
                while(k >= 0 && P[k] != P[i - 1])
                {
                    k = pi[k];
                }
                pi[i] = ++k;
            }
            
            // PI Table 
            // for(auto y : pi){
            //     cout << y << " ";
            // }
            
        
            int q = 0;
        
            for (int i = 0; i < n; i++)
            {
                while(q > 0 && P[q] != T[i]){
                    q = pi[q];
                }        
        
                if(P[q] == T[i]){
                    q++;
                }
        
                if(q == m){
                    // cout << i - m + 1 << " | ";
                    
                    ans.push_back(i - m + 2);
                    q = pi[q];
                }
            }
            
            
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends