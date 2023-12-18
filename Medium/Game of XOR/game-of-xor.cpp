//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    /* 
        
        [ 1, 2, 3, 4, 5, 6 ]
        
        1           --> 1 => 6 * 1  
        1 2         --> 2 => 5 * 2
        1 2 3       --> 3 => 4 * 3
        1 2 3 4     --> 4 => 3 * 4
        1 2 3 4 5   --> 5 => 2 * 5
        1 2 3 4 5 6 --> 6 => 1 * 6
    */
    int gameOfXor(int N , int A[]) {
        
        int ans = 0;
        
        for(int i = 0;i < N;i++){
            // if both are odd then only they appear in XOR otherwise it cancle out
            if( ((i + 1) & 1) && (N - i) & 1 ){
                ans ^= A[i];
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends