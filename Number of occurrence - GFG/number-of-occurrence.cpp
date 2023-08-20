//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int first = lower_bound(arr, arr + n, x) - arr; // First index of element which is Less then or Equal to x 
	    int last = upper_bound(arr, arr + n, x) - arr; // First index of element which is Greater then  x 
	    
	    if(first == n) return 0; // element is not found
	   // if(arr[first] != x) return 0; // element is not found
	    
	    return last - first;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends