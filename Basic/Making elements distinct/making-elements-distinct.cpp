//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// To find minimum sum of unique elements.
long long int minSum(int arr[], int n);




int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << minSum(a, n) << endl;
        
    }
}
// } Driver Code Ends


long long int minSum(int arr[], int n)
{
	// Complete the function
	
	long long sum = 0;
	
	
	for(int i = 1;i < n;i++){
	    
	    sum += arr[i - 1];
	    
	   // cout << arr[i - 1] << " ";
	    if(arr[i - 1] >= arr[i]){
	        arr[i] = arr[i - 1] + 1;
	    }
	}
	
	if(arr[n - 1] == arr[n - 2]) sum += arr[n - 1] + 1;
	else sum += arr[n - 1];
	
	return sum;
	
}