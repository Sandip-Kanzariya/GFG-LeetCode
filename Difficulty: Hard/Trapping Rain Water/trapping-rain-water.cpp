//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &height) {
        int n = height.size();
        
        // Left side
        int maxl[n];
        maxl[0] = height[0];
        
        for(int i = 1;i < n;++i){
            maxl[i] = max(maxl[i - 1], height[i]);
        }
        
        // Right side
        int maxr[n];
        maxr[n - 1] = height[n - 1];
        
        for(int i = n - 2;i >= 0;--i){
            maxr[i] = max(maxr[i + 1], height[i]);
        }
        
        int ans = 0;
        // for(int i = 0;i < n;++i) cout << maxl[i] << " ";
        // cout << "\n";
        // for(int i = 0;i < n;++i) cout << maxr[i] << "\n";
        
        for(int i =0;i < n;++i){
            ans += min(maxl[i], maxr[i]) - height[i];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends