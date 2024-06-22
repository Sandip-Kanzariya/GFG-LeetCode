//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        int n = sentence.size();
        int i = 0;
        
        long long ans = -1;
        long long curr = -1;
        
        while(i < n){
            
            if(!isdigit(sentence[i])){
                i++;
            }
            else{
                curr = 0;
                
                while(isdigit(sentence[i])){
                    
                    if(sentence[i] == '9'){
                        curr = -1;
                        while(i < n && sentence[i] != ' ')
                            i++;
                        break;
                    }
                    
                    curr = curr * 10 + sentence[i] - '0';
                    i++;
                }
                
                if(ans < curr) ans = curr;
            }
            
        }
        
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends