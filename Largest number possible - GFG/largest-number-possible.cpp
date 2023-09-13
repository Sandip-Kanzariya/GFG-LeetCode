//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        
        
        if(N == 1 && S == 0) return "0";
        else if(N > 1 && S == 0) return "-1";
        
        string s = "";
        int t = S;
        for(int i = 0;i< N;i++){
            if(S >= 9){
                s += '9';
                S -= 9;
            }
            else{
                s += S + '0';
                if(S > 0)
                    S = 0;
            }
        }
        
        if(S != 0) return "-1";
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends