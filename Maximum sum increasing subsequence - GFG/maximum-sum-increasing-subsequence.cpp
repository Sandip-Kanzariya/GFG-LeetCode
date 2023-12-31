//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    
	   vector <int> msis(n, 0);
	    
	   int ans = INT_MIN; 
	   for(int i = 0;i < n;i++){
	        
	        msis[i] = arr[i];
	        
	        for(int j = 0;j < i;j++){
	            
	            if(arr[j] < arr[i]){ // Stricly Increasing 
	                
	                if(msis[i] < msis[j] + arr[i]){
	                   msis[i] = msis[j] + arr[i];
	
	                }
	            }
	        }
	        
	        ans = max(ans, msis[i]);
	    }
	    
	    return ans;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends