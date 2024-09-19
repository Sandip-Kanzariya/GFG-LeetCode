//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        string alpha = "";
        
        int n = str.size();
        
        for(int i = n - 1;i >= 0;i--){
            if(isalpha(str[i]))
            {
                alpha += str[i];
            }
        }
        
        int k = 0;
        for(int i = 0;i < n;i++){
            if(isalpha(str[i])){
                str[i] = alpha[k++];
            }
        }
        
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends