//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0, j = n - 1;
        
        int ans = 0;
        while(i < j){
            if(arr[i] + arr[j] < target){
                ans += j - i;
                i++;
            }
            else{
                j--;
            }
        }
        /* 
        1 2 3 4 5 
        
        
        */
        
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends