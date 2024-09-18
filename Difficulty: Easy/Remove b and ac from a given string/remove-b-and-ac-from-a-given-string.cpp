//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:

    string stringFilter(string str) 
    { 
    
        int k = 0;
        
        for(int i = 0;i < str.size();i++){
            
            if(str[i] == 'b'){
                continue;
            }
            else if(str[i] == 'a' && str[i + 1] == 'c'){
                i++;
                continue;
            }
            else{
                str[k] = str[i];
                k++;
            }
        }
        
        return str.substr(0,k);
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends