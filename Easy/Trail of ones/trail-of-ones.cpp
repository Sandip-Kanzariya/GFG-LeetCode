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
        
    intl numberOfConsecutiveOnes(intl n) {
        
        
        // Fibonacci 
        intl a = 1, b = 1;
        intl cn = n;
        
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 1;
        }
        else{
            
            while(n--){
                intl t = (a + b) % mod;
                a = b;
                b = t;
            }        
        }
        
        return (Power(2, cn, mod) + mod -  b) % mod;
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