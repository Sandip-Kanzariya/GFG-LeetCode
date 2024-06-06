//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        
        
        long long sum = 0;
        long long curr = 0;
        
        for(int i = 0;i < n;i++){
            sum += a[i];
            curr += a[i] * (long long)i;
        }
        
        
        /*
            8 3 1 2 : 8 * 0 + 3 * 1 + 1 * 2 + 2 * 3 => curr = 11
            
            i = 1
            3 1 2 8 : 3 * 0 + 1 * 1 + 2 * 2 + 8 * 3 => temp = curr - (sum - a[i - 1]) + a[i - 1] * (n - 1)
        */        
        
        long long ans = curr;
        for(int i = 1;i < n;i++){
            long long temp = curr - (sum - a[i - 1]) + a[i - 1] * (long long)(n - 1);
            
            ans = max(ans, temp);
            
            curr = temp;
        }
            
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends