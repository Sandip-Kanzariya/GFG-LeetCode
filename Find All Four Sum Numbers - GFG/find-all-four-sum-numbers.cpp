//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        
        int n = arr.size();
        // So, We can easily Remove Duplication 
        sort(arr.begin(), arr.end());
            
    
        vector <vector <int>> ans;
        
        // Time : O(n ^ 3) 
        
        
        for(int i = 0; i < n - 3;i++){
                
            // Remove Duplication 
            if(i > 0 && arr[i] == arr[i - 1]){
                continue;
            }
            
            for(int j = i + 1;j < n - 2;j++){
                
                if(j > i + 1 && arr[j] == arr[j - 1]){
                    continue;
                }   
                    
                
                int twosum = k - arr[i] - arr[j];
                int l = j + 1, r = n - 1;
                // apply two sum for rest two elements 
                
                while(l < r){
                    
                    // Find Two Sum : four Sum is ready                 
                    if(arr[l] + arr[r] == twosum){
                        ans.push_back({arr[i], arr[j], arr[l], arr[r]});
                        
                    }
                    // Go Left Side 
                    if(arr[l] + arr[r] > twosum){
                        
                        // Avoid Duplication 
                        
                        while(l < r && arr[r] == arr[r - 1])
                        {
                            r--;
                        }
                        
                        r--;
                    }
                    // Go right Side 
                    else{
                        while(l < r && arr[l] == arr[l + 1])
                        {
                            l++;
                        }
                        
                        l++;
                    }
                }
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends