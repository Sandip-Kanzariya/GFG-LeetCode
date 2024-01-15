//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        
        vector <vector <int>> dp(n + 1, vector <int> (total + 1, 0));   
        
        for(int i = n - 1;i >=0;i--){
            for(int j = 0;j <= total;j++){
                
                int nontake = 0, take = 0;
                
                nontake = dp[i + 1][j];
                
                if(cost[i] <= j){
                    
                    int remamount = j - cost[i] + cost[i] * 9 / 10;
                    take = 1 + dp[i + 1][remamount];
                    
                }
                
                dp[i][j] = max(take, nontake);
            }
        }
        
        return dp[0][total];
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
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends