//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    
    // Bit observation : O(log(n) * log(n))
    
    int csb(int n){
            
        int setbit = 0;
        while(n){
            
            if(n & 1){
                setbit++;
            }
            
            n /= 2; // right shift : divide by 2 (n = n / 2)
        }
        
        return setbit;
        // return __builtin_popcount(n);
    }
	int is_bleak(int n)
	{
	    // log(10 ^ 9) == 29
	    
	    for(int i = n - 29; i <= n - 1;i++){
	            
	       if(i + csb(i) == n){
	           return 0;
	       }
	    }
	    
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends