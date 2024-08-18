//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        
        
        int prefix = 0,
            suffix = 0;
        
         int n = arr.size();
        
        for(int i = 0;i < n;i++){
            suffix += arr[i];        
        }
        
        for(int i = 0;i < n;i++){
            prefix = prefix + arr[i];
            suffix -= arr[i];
            
            if(prefix == suffix){
                return 1;
            }
        }
        
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends