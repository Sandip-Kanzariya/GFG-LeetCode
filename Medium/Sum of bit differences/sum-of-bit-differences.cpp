//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	/* Brute Force : 
	
	    Time : O(n * 32) = O(n)
	    Space : O(1)
	*/
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    
	    long long ans = 0;
	    
	    for(int i = 31;i >= 0;i--){
	        
	        long count_zero = 0, count_one = 0;
	        
            for(int j = 0;j < n;j++){
                
                // ith-bit is set or not 
                if(arr[j] & (1 << i)){
                    count_one++;
                }
                else{
                    count_zero++;
                }
            }	        
	       ans += 2 * count_zero * count_one;
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends