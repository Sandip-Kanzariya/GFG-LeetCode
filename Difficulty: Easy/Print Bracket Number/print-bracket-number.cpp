//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        
        vector <int> ans;
        int n = str.size();
        
        stack <int> st;
        int o = 0;
        
        for(int i = 0;i < n;i++){

            if(str[i] == '('){
                o++;
                st.push(o);
                ans.push_back(o);
            }    
            else if(str[i] == ')'){
                int top = st.top();
                st.pop();
                ans.push_back(top);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends