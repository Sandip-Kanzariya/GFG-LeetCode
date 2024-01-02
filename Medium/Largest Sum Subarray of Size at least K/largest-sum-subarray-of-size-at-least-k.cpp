//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    
    public:    
    
    
    /* 
       all sumarray with k length  + try to extend those subarray 
    */
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
     
     
     // find max sum after me 
     vector <long long int> dp(n + 1, 0);
     
     for(int i = n - 1;i >= 0;i--){
        dp[i] = max(a[i] + dp[i + 1], 0LL);
     }
     
     long long int ans = -1e18;
     long long int ksum = 0;
     
     
     // Sum of k elements 
     for(int i = 0;i < k;i++){
         ksum += a[i];
     }
     
     
     // try to extend those subarray
     for(int i = k;i < n;i++){
            
        long long int atleastksum = ksum + dp[i];
         
         ans = max(ans, atleastksum);
         
         // update ksum subarray 
         ksum += a[i]; // add ith 
         ksum -= a[i - k]; // remove (i - k)th
         
     }
     
     return max(ans, ksum);
     
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends