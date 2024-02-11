//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        
        
        vector <int> ans;
        
        map <int, int> mp;
        
        ans.push_back(0);
        mp[0]++;
        
        for(int i = 1;i < n;i++){
            
            int a = ans[ans.size() - 1] - i;
            
            
            if(a < 0 || mp.count(a)){
                int b = ans[ans.size() - 1] + i;
                ans.push_back(b);
                mp[b]++;
            }
            else{
                ans.push_back(a);
                mp[a]++;
            }
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends