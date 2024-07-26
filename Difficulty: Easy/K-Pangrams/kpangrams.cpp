//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    bool kPangram(string str, int k) {
        
        vector <int> v(26, 0);
        int n = str.size();
        
        for(int i = 0;i < n;i++){
            
            if(isalpha(str[i])){
                v[str[i] - 'a'] += 1;    
            }
        }   
        
        int letter = 0;
        for(int i = 0;i < 26;i++){
            if(v[i] == 0)
            {
                k--;
            }{
                letter += v[i];
            }
        }
        
        if(letter < 26) return 0;
        return k >= 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends