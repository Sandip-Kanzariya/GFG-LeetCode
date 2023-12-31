//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	
	/* 
	    time : O(n / 2) 
	    Space : O(n)
	*/
	void shuffleArray(int arr[],int n)
	{
	    
	   vector <int> ans(n, 0); 
	   
	   for(int i = 0;i < n  / 2;i++){
	       
	       ans[2 * i] = arr[i];
	       ans[2 * i + 1] = arr[i + n/ 2];
	   }
	   
	   for(int i = 0;i < n;i++){
	       arr[i] = ans[i];
	   }
	   
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
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends