//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long lucas(int n)
        {
            const int mod = 1e9 + 7;
            
            long long l0 = 2,
                l1 = 1;
            
            if(n == 1) return l1;
            
            n--;
            
            while(n--){
                long long d = (l0 % mod + l1 % mod) % mod;
                l0 = l1;
                l1 = d;
            }
            
            return l1;            
        }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends