//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    /* Binary Search 
        Time : O(n)
        Space : O(1)
    */
    int findClosest( int n, int k,int arr[]) 
    { 
        
        int diff = INT_MAX;
        int ans = 0;
        
        for(int i = 0;i < n;i++){
            
            int d = abs(arr[i] - k);
            
            if(d <= diff){ // Sorted so, take greater 
                ans = arr[i];
                diff = d;
            }
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends