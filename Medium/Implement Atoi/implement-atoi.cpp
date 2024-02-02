//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        
            
        for(int i = 1;i < s.size();i++){
            
            if((s[i] <= '9' && s[i] >= '0'))    
                continue;
            else return -1;
        }
        
        
        
        if(s[0] != '-'){
            int ans = s[0] - '0';
            for(int i = 1;i < s.size();i++){
                ans *= 10;
                ans += s[i] - '0';
            }     
            
            return ans;
        }
        else{
            int ans = s[1] - '0';
            for(int i = 2;i < s.size();i++){
                ans *= 10;
                ans += s[i] - '0';
            }     
            
            return -1 * ans;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends