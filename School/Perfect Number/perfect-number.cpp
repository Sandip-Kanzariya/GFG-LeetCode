//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        
        int CN = N;
        int factsum = 0;
        
        while(N > 0){
            int d = N % 10;
            
            int f = 1;
            for(int i = 1;i <= d;i++){
                f *= i;
            }
            factsum +=f;
            
            N /= 10;
            
        }
        
        if(factsum == CN) return 1;
        else return 0;
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
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends