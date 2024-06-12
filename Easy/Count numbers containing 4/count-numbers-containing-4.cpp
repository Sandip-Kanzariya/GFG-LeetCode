//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    // logn
    bool checkFor4(int x){
        
        while(x > 0){
            int d = x % 10;        
            if(d == 4) return 1;
            x /= 10;
        }
        
        return 0;
    }
    int countNumberswith4(int n) {
        
        // n 
        
        int ans = 0;
        for(int i = 1;i<= n;i++){
            if(checkFor4(i)) ans++;            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends