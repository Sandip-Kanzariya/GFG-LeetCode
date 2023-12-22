//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int cmp(pair<int,  pair<int, int>> a, pair<int, pair<int, int>> b){
    return a.second.second < b.second.second;
}

class Solution{
public:

    
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        vector <pair <int, pair <int, int> >> vp;
        
        for(int i =0 ;i < N;i++){
            vp.push_back({i + 1, {S[i], F[i]}});
        }
        
        sort(vp.begin(), vp.end(), cmp);
        
        vector <int> ans;
        auto temp = vp[0];
        ans.push_back(vp[0].first);
        
        for(int i =1;i < N;i++){
            // cout << vp[i].second.first << " " << vp[i].second.second << "\n";
            
            if(vp[i].second.first > temp.second.second){
                temp = vp[i];
                ans.push_back(vp[i].first);
            }
        }
        sort(ans.begin(), ans.end());
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
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends