//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        
        int sum_a = accumulate(a, a + n, 0);
        int sum_b = accumulate(b, b + m, 0);
        
        sort(a, a + n);
        sort(b, b + m);
        
        int ap = 0, bp = 0;
        
        while(ap < n && bp < m){
            
            if(sum_a - a[ap] + b[bp] == sum_b - b[bp] + a[ap]){
                return 1;
            }
            else if(sum_a - a[ap] + b[bp] < sum_b - b[bp] + a[ap]){ // sum of b is big so try to reduce by b's big element
                bp++;
            }
            else{
                ap++;                
            }
        }
            
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends