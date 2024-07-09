//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        
        priority_queue <long long, vector <long long>, greater<long long>> minh;
        
        for(long long i = 0;i < n;i++){
            minh.push(arr[i]);
        }
        
        // pop 2 minimum rope ==>  add tem and => push 
        
        long long total_cost = 0;
        while(minh.size() > 1){
            
            long long f = minh.top();
            minh.pop();
            
            long long s = minh.top();
            minh.pop();
            
            long long t = f + s;
            total_cost += t;
            
            minh.push(t);
        }
        
        return total_cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends