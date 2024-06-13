//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       const int mod = 1e9+7;
       
        vector <int> p(n + 1, 1); // p0, p1, p2
        
        if(n == 0 || n == 1 || n == 2) return p[n];
        
        int cn = n;
        
        int c = n - 2;
        n = 3;
        while(c--){
            int d = (p[n - 2] % mod + p[n - 3] % mod) % mod;
            p[n] = d;
            n++;
        }
        
        return p[cn];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends