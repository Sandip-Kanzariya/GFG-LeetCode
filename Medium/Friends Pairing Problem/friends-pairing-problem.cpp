//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        
        if(n < 3) return n; // 1 -> 1, 2 -> 2 
        
        const int mod = 1e9+7;
        
        long long a = 1, b = 2,
                  ans;
        
        int i = 2;
        
        while(i < n){
            ans = ((a * i) % mod + b % mod) % mod;
            a = b;
            b = ans;
            i++;
        }
        return b;
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
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends