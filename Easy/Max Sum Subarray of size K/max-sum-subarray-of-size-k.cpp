//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:

    /* Two Pointers : Sliding Windows
    
        Time : O(n)
        Space : O(1)
    
    */
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
        int i = 0, j = 0;
        
        long sum = 0;
        
        long ans = 0;
        
        while(j < N){
            
            sum += Arr[j];
            
            if(j - i + 1 < K){
                j++;
            }
            else{
                ans = max(ans, sum);        
                
                sum -= Arr[i];
                i++;
                j++;
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