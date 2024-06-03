//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        
        int ans = INT_MIN;
        
        int count = 0;
        
        
        while(N > 0){
            
            if(N & 1){ // if LSB is 1
                count++;
            }
            else{
                ans = max(ans, count);
                count = 0;
            }
            N = N >> 1; // Divide By 2 
        }
        
        ans = max(ans, count);
        
        return ans;
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends