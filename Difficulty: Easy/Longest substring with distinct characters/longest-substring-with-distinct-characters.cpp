//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
    int n = s.size();
    int ans = 0;
    unordered_map<char, int> lastIndex; // Tracks the last index of each character
    int start = 0; // Start of the current window

    for (int end = 0; end < n; end++) {
        if (lastIndex.find(s[end]) != lastIndex.end()) {
            // Update the start to the right of the last occurrence of s[end]
            start = max(start, lastIndex[s[end]] + 1);
        }
        lastIndex[s[end]] = end; // Update the last occurrence of s[end]
        ans = max(ans, end - start + 1); // Update the maximum length
    }

    return ans;
}

};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends