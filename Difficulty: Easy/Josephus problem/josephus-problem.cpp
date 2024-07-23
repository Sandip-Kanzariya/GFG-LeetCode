//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    
    void solve(vector <int> &v, int &n, int k,int i, int &safe){
        
        if(v.size() == 1){
            safe = v[0];
            return;
        }
        
        i = (i + k) % v.size();
        v.erase(v.begin() + i);
        
        solve(v, n, k,i, safe);
    }
    int josephus(int n, int k)
    {
       
       vector <int> v;
       
       for(int i = 1;i <= n;i++){
           v.push_back(i);
       }
       
       int safe = -1;
       int index = 0;
       k--;
       
       solve(v, n, k, index, safe);
       
       return safe;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends