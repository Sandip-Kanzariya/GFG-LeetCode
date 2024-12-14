//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    /* 
    Time: o(n)
    Space: O(1)
    */
    int findMin(vector<int>& arr) {
        
        int n = arr.size();
        for(int i = 1;i < n;i++){
            if(arr[i] < arr[i - 1]){
                return arr[i];
            }
        }
        
        return arr[0];
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends