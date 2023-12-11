//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        
        long long ans = 0, MAX = 0;
        
        int i = 0, j = 0;
        
        while(j < N){
                
            ans += Arr[j];
            
            if(j - i + 1 == K){
                MAX = max(MAX, ans);
                // cout << ans << " ";
                ans -= Arr[i];
                i++;
            }
            j++;
        }
        
        return MAX;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends