//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        
        vector <vector <long long>> ans(n, vector <long long> (n, 1));
        
        const long long mod=1e9+7;
        
        
        for(int i = 2;i < n;i++){
            
            for(int j = 1 ;j < i;j++){
                ans[i][j] = (ans[i - 1][j - 1] + ans[i - 1][j]) % mod; 
            }
        }
        
        
        
        return ans.back();
    }
};



//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends