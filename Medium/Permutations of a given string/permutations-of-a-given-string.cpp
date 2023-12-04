//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    
	    // Ip / Op Recursive Method
	    // Time : O(n! * n)
	    void findPermutation(string ip, string op, set <string> &st){
	        
	        if(ip.size() == 0){
	            st.insert(op);
	  
	            return;
	        }    
	        
	        
	        for(int i = 0;i < ip.size();i++){
	            
	            string newIp = ip.substr(0, i) + ip.substr(i + 1);  // Remove the ith character of ip
	            string newOp = op + ip[i]; // Add ith character of ip to op 
	            
	            findPermutation(newIp, newOp, st);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Lexicographically Sorted Order 
		    
		    set <string> st;
		    
		    findPermutation(S, "", st);
		    
		    vector <string> v(st.begin(), st.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends