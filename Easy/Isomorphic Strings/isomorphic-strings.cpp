//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        
        if(str1.size() != str2.size()) return 0;
        
        int n = str1.size();
        vector <int> a(26, -1), b(26, -1);
        
        for(int i = 0;i < n;i++){
            
            
            // mapping of str1
            if(a[str1[i] - 'a'] != -1){
                
                int x = a[str1[i] - 'a'];
                
                if(x != str2[i] - 'a') return 0;
            }
            
            // mapping of str2
            if(b[str2[i] - 'a'] != -1){
                
                int x = b[str2[i] - 'a'];
                
                if(x != str1[i] - 'a') return 0;
            }
            
            
            a[str1[i] - 'a'] = str2[i] - 'a';
            b[str2[i] - 'a'] = str1[i] - 'a';
            
        }
        
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends