//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    
    
    /* 
        n = 7
        k = 3 
        1 2 3 4 5 6 7 
        
        
        rotate(0, n - 1){
                
            rev(0, k - 1) : 3 2 1 
            rev(k, n - 1) : 7 6 5 4
            -----------------------
            3 2 1 7 6 5 4
            rev(0, n - 1) : 4 5 6 7 1 2 3
        }
        
    */
    
    void reverse(int arr[], int i, int j){
        
        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }
    void rotateArr(int arr[], int d, int n){
        
        d = d % n;
        
        reverse(arr, 0, d - 1);
        reverse(arr, d, n - 1);
        reverse(arr, 0, n - 1);
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends