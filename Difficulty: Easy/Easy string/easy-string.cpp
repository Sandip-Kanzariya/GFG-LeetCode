//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    
    int n = S.size();
    
    string ans = "";
    char c = S[0];
    
    int t = 1;
    
    for(int i = 1;i < n;i++){
        
        if(tolower((S[i])) == tolower(S[i - 1])){
            t++;
        }
        else{
            ans += to_string(t);
            ans += tolower(c);
            t = 1;
            c = S[i];
        }
    }
    
    ans += to_string(t);
    ans += tolower(c);
    
    return ans;
}

