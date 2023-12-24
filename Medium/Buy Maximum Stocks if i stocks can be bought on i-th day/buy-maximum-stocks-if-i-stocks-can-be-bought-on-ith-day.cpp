//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        
        vector<pair<int,int>>vp;
        for (int i=0;i<n;i++){
            vp.push_back({price[i],i+1});
        }
        int tot=0;
        sort(vp.begin(),vp.end());
        for (auto it:vp){
            int val=it.first;
            int num=it.second;
            int acc=k/val;
            int curr_price=val*min(num,acc);
            if (curr_price<=k){
                 k-=curr_price;
                 tot+=min(num,acc);
            }
        }
        return tot;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends