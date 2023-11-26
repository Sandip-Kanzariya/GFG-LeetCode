//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    vector <int> ans;
    
    int solve(int n){
        
        
        if(n <= 0){
            return n;
        }    
        ans.push_back(n);
        
        solve(n - 5);
    }
    
    void solve2(int n, int &p){
        
        ans.push_back(n);
        
        if(n == p){
            return ;
        }    
        
        solve2(n + 5, p);
    }
    
    vector<int> pattern(int N){
        // code here
        
        int p = N;
        
        N = solve(N);
        solve2(N, p);
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends