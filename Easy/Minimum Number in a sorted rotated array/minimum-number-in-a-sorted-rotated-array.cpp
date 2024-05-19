//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int v[], int low, int high)
    {
        
        int start = low;
        int end = high;
        
        while(start < end){
            
            int mid = (end + start) >> 1;
            
            if(v[mid] < v[end]){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
        
        return v[start];
        
    }
};

//{ Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends