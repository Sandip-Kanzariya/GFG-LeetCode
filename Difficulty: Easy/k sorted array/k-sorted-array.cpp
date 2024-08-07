//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        
        priority_queue<pair<int, int>, vector <pair<int,int>>, greater<pair<int, int>>> minh;
        
        vector <int> ans;
        
        int c = 0;
        
        for(int i = 0;i < n;i++){
            
            minh.push({arr[i], i});
        
        }
        
        while(!minh.empty()){
            
            auto p = minh.top();
            
            if(abs(p.second - c) > k){
                return "No";
            }
            c++;
            ans.push_back(p.first);
            minh.pop();
        }
        
        return "Yes";
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
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends