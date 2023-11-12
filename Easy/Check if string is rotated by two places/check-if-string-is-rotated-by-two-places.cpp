//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        
        if(str1.size() != str2.size()) return 0;
        
        if(str1.size() == 2){
            
            if(str1 == str2){
                return 1;
            }
            return 0;
        }
        
        string s = "";
        int n  =str1.size();
        s += str1[n - 2];
        s += str1[n - 1];
        
        for(int i = 0;i < n - 2;i++){
            s += str1[i];
        }
        
        if(s == str2) return 1;
        
        
        s = "";
        
        for(int i = 2;i < n;i++){
            s += str1[i];
        }
        
        s += str1[0]; 
        s += str1[1]; 
        
        if(s == str2) return 1;
        
        
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends