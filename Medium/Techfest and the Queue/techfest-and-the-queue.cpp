//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    map <long long, long long> findFactorCount(long long n){

        map <long long, long long> factorsCount;
        
        
        for (long long i = 2; i * i <=  n; ++i)
        {
            while(n % i == 0){
                n = n / i;
                factorsCount[i]++;
            }
        }  
        
        if(n != 1){
            factorsCount[n]++;
        }
    
        return factorsCount;
    }
    
	int sumOfPowers(int a, int b){
	    
	    int ans = 0;
	    
	    for(int i = a;i <= b;i++){
	        
	        map <long long, long long> mp = findFactorCount(i);
	        
	        for(auto k : mp){
	           // cout << k.second << " ";
	           ans += k.second;
	        }
	       // cout << "\n";
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends