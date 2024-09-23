//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        /* 
        M : Missing 
        D : Duplicate 
        */
        
        long long n = arr.size();
        long long nsum = n * (n + 1) / 2;
        long long sqsum = n * (n + 1) * (2 * n + 1) / 6;
        
        long long arrsum = 0, arrsqsum = 0;
        
        for(long long i = 0;i < n;i++){
            arrsum += arr[i];
            arrsqsum += (long long) arr[i] * arr[i];
        }
        
        // M - D 
        long long a = nsum - arrsum;    
        
        // M^2 - D^2 
        long long b = sqsum - arrsqsum;
        
        // M + D 
        long long c = b / a;
        
        // M * 2 = a + c ==> M 
        long long M = (a + c) / 2;
        long long D = M - a;
        
        return {D, M};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends