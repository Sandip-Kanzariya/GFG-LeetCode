//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        
        int n = s.size();
        
        if(n <= 3){
            n = stoi(s);
            return n % 8 ? -1 : 1;
        }
        
        s = s.substr(n-3); // Last three Digits
        
        n = stoi(s);
        
        return n % 8 ? -1 : 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends