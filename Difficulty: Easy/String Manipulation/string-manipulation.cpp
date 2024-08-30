//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        
        stack <string> st;
        int n = arr.size();
        
        for(int i = 0;i < n;i++){
            
            if(!st.empty()){
                bool p = 0;
                while(st.top() == arr[i]){
                    st.pop();
                    p = 1;
                }

                if(p == 0){
                    st.push(arr[i]);    
                }                
            }
            else{
                st.push(arr[i]);    
            }
        }
        
        return st.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline character after the integer input
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<string> arr;
        string s;
        while (ss >> s) {
            arr.push_back(s);
        }
        Solution ob;
        cout << ob.removeConsecutiveSame(arr) << endl;
    }

    return 0;
}
// } Driver Code Ends