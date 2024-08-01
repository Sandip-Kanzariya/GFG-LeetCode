//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        
        int n = arr.size();
        string s = arr[0];
        for(int i = 1;i < n;i++){
        
            string match = "";
            
            int  j = 0;
            int lmt = min(arr[i].size(), s.size());
            
            while(arr[i][j] == s[j] && j < lmt){
                match += s[j];
                j++;
            }
            
            s = match;
        }
        
        return s == "" ? "-1" : s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends