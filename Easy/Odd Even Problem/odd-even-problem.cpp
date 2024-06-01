//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        
        vector <int> freq(27, 0);
        for(int i = 0;i < s.size();i++){
            freq[s[i] - 'a' + 1]++;
        }
        
        // for(int i = 1;i <= 26;i++){
        //     cout << i << " " << freq[i] << "\n";
        // }
        
        int x = 0, y = 0;
        for(int i = 1;i <= 26;i++){
            if(freq[i] % 2 && i % 2){
                y++;
            }
            
            if(freq[i] != 0 && freq[i] % 2 == 0 && i % 2 == 0) x++;
        }
        
        // cout << "\n" <<  x << " " << y << "\n";
        
        return (x + y) % 2 ? "ODD" : "EVEN";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends