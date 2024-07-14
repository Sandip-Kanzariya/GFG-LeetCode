//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        
        vector<int>ans;
        
        int n = arr.size();
        
        int i = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] >= 0){
                ans.push_back(arr[i]);
            }
        }
        
        for(int i = 0;i < n;i++){
            if(arr[i] < 0){
                ans.push_back(arr[i]);
            }
        }
        arr = ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends