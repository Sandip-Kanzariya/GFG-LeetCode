//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    class Cmp{
        public:
        bool operator()(pair <int, int> &a, pair <int, int> &b){
            
            if(a.first != b.first) return a.first > b.first;
            return a.second > b.second;
        }  
    };
    vector<int> topK(vector<int>& nums, int k) {
        
        map <int, int> mp;
        
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, Cmp> minh;
        
        for(auto it = mp.begin();it != mp.end();it++){
            minh.push({it -> second, it -> first}); // freq, ele
            
            if(minh.size() > k){
                minh.pop();
            }
        }
        
        vector <int> ans;
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends