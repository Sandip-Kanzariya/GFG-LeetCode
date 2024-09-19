//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        
        vector <string> st;
        
        int n = str.size();
        string temp = "";
        for(int i = 0;i < n;i++){
            if(str[i] == '.'){
                st.push_back(temp);
                temp = "";
            }            
            else{
                temp += str[i];
            }
        }
        
        st.push_back(temp);
        
        temp = "";
        for(int i = st.size() - 1;i >= 0;i--){
            temp += st[i];
            if(i != 0)
                temp += '.';
        }
        
        return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends