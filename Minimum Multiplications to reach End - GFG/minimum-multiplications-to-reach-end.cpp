//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // BFS 
        const int mod = 100000;
        
        vector <int> v(100001, -1);
        
        queue <int> q;
        q.push(start);
        v[start] = 0;
        
        
        while(!q.empty()){
                
            int n = q.size();
            
            for(int i = 0;i < n;i++){
                
                int f = q.front();
                q.pop();
                
                if(f == end) return v[end];
                
                for(int j = 0;j < arr.size();j++){
                    int temp = (f * arr[j]) % mod; 
                    
                    if(v[temp] == -1){
                        v[temp] = v[f] + 1;
                        q.push(temp);
                    }
                } 
            }
            
            
        }
        
        
        return -1;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends