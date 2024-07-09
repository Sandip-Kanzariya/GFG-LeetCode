//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long kthsmallest(long long A[], long long N, long long K){
        
        priority_queue <int> maxh;
        
        for(long long i = 0;i < N;i++){
            maxh.push(A[i]);
            
            if(maxh.size() > K){
                maxh.pop();
            }
        }
        
        return maxh.top();
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        long long l = kthsmallest(A, N, K1);
        long long r = kthsmallest(A, N, K2);
        
        long long ans = 0;
        for(long long i = 0; i < N;i++){
            if(A[i] < r && A[i] > l){
                ans += A[i];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends