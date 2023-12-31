//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    
    // recursive : 0-1 Knapsack Variation 
    
    bool solve(int index, int sum, int coins[], int &N){
        
        
        if(sum > 0 && (sum % 20 == 0 || sum % 24 == 0|| sum ==2024)) return 1;
        
        if(index >= N) return 0;
        
        
        // (Take , Not Take)
        return solve(index + 1, sum + coins[index], coins, N) || solve(index + 1, sum, coins, N);
    }
    int isPossible(int N , int coins[]) 
    {
        
        return solve(0, 0, coins, N);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends