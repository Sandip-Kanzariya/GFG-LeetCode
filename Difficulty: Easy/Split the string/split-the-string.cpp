//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{   
public:
    int isPossible(string S){
        
        unordered_set <char> st;
        
        
        for(int i = 0;i < S.size();i++){
            st.insert(S[i]);
        }
        
        // a aa aaa aaaa -- Accepted 
        
        if(st.size() == 1 && S.size() < 10) return 0;
        
        // a b aa ba -- Accepted 
        if(st.size() == 2 && S.size() < 6) return 0;
        
        // a b c ab -- Accepted 
        if(st.size() == 3 && S.size() < 5) return 0;
        
        return 1;
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
        cout<<ob.isPossible(s)<<"\n";
    }
    return 0; 
}
// } Driver Code Ends