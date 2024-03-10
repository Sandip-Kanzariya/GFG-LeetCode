//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    
	    map <char, int> mp;
	    
	    int n = str.size();
	    
	    for(int i = 0;i< n;i++){
	       if(mp[str[i]]){
	           str[i] = ' ';
	       }
	       else{
	           mp[str[i]]++;
	       }
	    }
	    
	    string ans = "";
	    for(int i = 0;i< n;i++){
	       if(str[i] != ' ')
	        ans += str[i];
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends