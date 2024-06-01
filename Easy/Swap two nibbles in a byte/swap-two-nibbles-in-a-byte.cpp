//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        
        string binary = bitset<8>(n).to_string();
            
        
        for(int i = 0;i < 4;i++){
            swap(binary[i], binary[i + 4]);
        }
        
        
        int num = stoi(binary, 0, 2);
        
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends