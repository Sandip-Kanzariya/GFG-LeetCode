//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool check(char a, char b){
        
        if((a == '(' && b == ')') 
            || (a == '{' && b == '}') 
            || (a == '[' && b == ']')) 
        return 1;
        
        return 0;
    }
    bool ispar(string x)
    {
        stack <char> st;
            
        for(int i = 0;i < x.size();i++){
            
            if(st.empty()){
                st.push(x[i]);
            }    
            else if(check(st.top(),x[i])){
                st.pop();
            }
            else{
                st.push(x[i]);
            }
        }
        
        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends