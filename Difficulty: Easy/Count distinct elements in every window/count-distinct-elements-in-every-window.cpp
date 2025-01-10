//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /* Brute Force: 
        Time: o(n * k)
        Space: O(k + n)
    */
    vector<int> countDistinct(vector<int> &arr, int k) {
        
        int n = arr.size();
        vector <int> ans;
        
        for(int i = 0;i < n - k + 1;i++){
            set <int> st;
            for(int j = i;j < k + i;j++){
                st.insert(arr[j]);                
            }   
            ans.push_back(st.size());
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends