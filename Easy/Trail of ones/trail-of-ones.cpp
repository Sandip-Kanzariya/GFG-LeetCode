//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    
  public:
    
    #define intl long long
    
    const intl mod = 1e9 + 7;
    
    intl Power(intl a, intl x, intl n)
    {
        intl res = 1;
    
        while (x > 0)
        {
    
            // Odd
            if (x % 2 == 1)
            {
                res = (res * a) % n;
            }
    
            x = x / 2;
    
            a = (a * a) % n;
        }
    
        return res;
    }
    
    intl fibonacci(intl n){
        intl a = 1, b = 1;
        
        if(n == 1){
            return 1;
        }
        else{
            
            while(n--){
                intl t = (a + b) % mod;
                a = b;
                b = t;
            }        
        }
        
        return b;
    }    
    
    intl numberOfConsecutiveOnes(intl n) {
        
        
        // [2^n - nth Fibonacci number ]
        return (Power(2, n, mod) + mod - fibonacci(n)) % mod;
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends