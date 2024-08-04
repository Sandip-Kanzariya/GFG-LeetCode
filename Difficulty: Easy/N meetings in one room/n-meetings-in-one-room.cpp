//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

int cmp(pair <int, int> &a, pair <int, int> &b){
        return a.second < b.second;
}

class Solution {
  
  
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    
    
    
    int maxMeetings(int n, int start[], int end[]) {
        
        vector <pair<int, int>> vp;
        
        for(int i = 0;i < n;i++){
            vp.push_back({start[i], end[i]});
        }
        
        // Sort based on end time 
        sort(vp.begin(), vp.end(), cmp);
        
        int ans = 1;
        pair <int, int> temp = vp[0];
        
        // If there is meeting which start after temp then take it 
        
        for(int i = 1;i < vp.size();i++){
            if(vp[i].first > temp.second){
                temp = vp[i];
                ans++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends