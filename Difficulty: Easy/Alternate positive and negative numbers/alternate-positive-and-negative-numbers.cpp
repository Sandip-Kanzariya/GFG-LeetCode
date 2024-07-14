//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	    vector <int> p, nv;
	    for(int i = 0;i < n;i++){
	        if(arr[i] >= 0) p.push_back(arr[i]);
	        else nv.push_back(arr[i]);
	    }   
	    
	    
	    
	    int j = 0, k = 0, i = 0;
	    
	    for(i = 0;i < n;){
	        if(j != p.size()){
	            arr[i++] = p[j++];
	        }
	        
	        if(k != nv.size()){
	            arr[i++] = nv[k++];
	        }
	    }
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
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends