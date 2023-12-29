//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    // Your Code Here
	            unordered_map<string, int> mp;
        if(n%k!=0)
        {
            return 0;
        }
        for(int i=0;i<s.length();i+=k){
            mp[s.substr(i,k)]++;
        }
        int c=0;
        for(auto x:mp)
        {
            if(x.second==1)
            {
                c++;
            }
        }
        if(mp.size()==1)
        {
            return 1;
        }
        return c&&mp.size()==2?1:0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
        Solution  ob;
		cout << ob.kSubstrConcat (n, s, k) << endl;
	}
}
// } Driver Code Ends