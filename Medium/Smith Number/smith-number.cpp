//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
    
    void sieve(int n, vector <int> &prime)
    {
        
        for(int i = 2;i < n + 1;i++){
            
            if(prime[i] == 1e9){
                prime[i] = i;
                for(int j = i + i;j < n + 1;j+=i){
                    prime[j] = min(prime[j], i);
                }
            }
        }
        
    }
    
    int digitsum(int c){
        int sum = 0;
        while(c != 0){
            sum += c % 10;
            c = c / 10;
        }
        return sum;
    }
    
    int smithNum(int n) {
        
        vector <int> prime(n + 1, 1e9);    
        
        sieve(n, prime);
        
        // for(auto k : prime) cout << k << " ";
        if(prime[n] == n) return 0; // Not Composite 
        
        int sum = digitsum(n);
        
        int psum = 0;
        while(n > 1){
            psum += digitsum(prime[n]);
            n /= prime[n];
        }
        
            
        return sum == psum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.smithNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends