//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    bool palindrome(string s){
        string t = s;
        
        reverse(s.begin(), s.end());
        
        return s == t;
    }
    string pattern(vector<vector<int>> &arr) {
        
        
        int n = arr.size();
        int m = arr[0].size();
        
        for(int i = 0; i< n;i++){
            string a = "";
            
            for(int j = 0;j < m;j++){
                a += arr[i][j];
            }
            if(palindrome(a)){
                return to_string(i) + " R";                   
            }
        }
        
        for(int i = 0; i < m;i++){
            string a = "";
            
            for(int j = 0;j < n;j++){
                a += arr[j][i];
            }
            if(palindrome(a)){
                return to_string(i) + " C";                   
            }
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends