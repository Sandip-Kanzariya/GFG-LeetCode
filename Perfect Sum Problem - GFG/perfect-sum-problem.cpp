//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long N = 1e9 + 7;
	int perfectSum(int arr[], int n, int sum)
	{
        long long t[n + 1][sum + 1];
        
        //
        for(long long j = 0;j < sum + 1;j++)t[0][j] = 0;
        for(long long i = 0;i < n + 1;i++)t[i][0] = 1;
        
        
        for(long long i = 1;i < n + 1;i++){
            for(long long j = 0;j < sum + 1;j++){
                if(arr[i - 1] <= j){
                    t[i][j] = t[i - 1][j] % N + t[i - 1][j - arr[i - 1]] % N;
                }
                else{
                    t[i][j] = t[i - 1][j] % N;
                }
            }
        }
        
        return t[n][sum] % N;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends