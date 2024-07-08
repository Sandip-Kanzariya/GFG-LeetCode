//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    class Compare{
        public:
            
            bool operator()(pair<int, int> &a, pair<int, int> &b){
                if(a.first != b.first) return a.first < b.first;
                
                return a.second > b.second;
            }
    };
    
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
    
        // Create Max heap of <pair <int, int>> : pair (Absolute difference with X, element)
        
        
        priority_queue < pair<int, int> , vector <pair<int, int>> ,Compare> maxh;
        
        for(int i = 0;i < n;++i){
            
            if(abs(x - arr[i]) != 0){
                maxh.push({abs(x - arr[i]), arr[i]});
            }
            else{
                continue;
            }
            
            if(maxh.size() > k){
                maxh.pop();
            }
        }
        
        vector <int> ans;
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends