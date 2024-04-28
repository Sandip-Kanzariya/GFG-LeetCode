//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	    /* Bit magic 
	       Time : O( n * 2^n  )
	       Space : O()
	       
	    */
		vector<string> AllPossibleStrings(string s){
            
            int n = s.size();
            vector <string> ans;
            
            /* o to ( 2^n - 1) bit string of n length 
            
            Ex : n=3, abc  
            
                 210  012
                 ---  ---
            0    000  ___
            1    001  a__
            2    010  _b_
            3    011  ab_
            4    100  __c
            5    101  a_c
            6    110  _bc
            7    111  abc
            
            */
            
            for(int num = 0;num < pow(2, n);num++){ // 
                
                // if num's ith bit set or not 
                string subset = "";
                
                for(int i = 0;i< n;i++){
                    int ithset = (1 << i);
                    if(num & ithset){
                        subset += s[i];
                    } 
                }
                
                if(subset != "")
                    ans.push_back(subset); 
            }
            
            sort(ans.begin(), ans.end());
            
            return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends