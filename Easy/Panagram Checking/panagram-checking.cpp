//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        https://media.geeksforgeeks.org/img-practice/prod/courses/5/Web/Content/Clock-4_1706701529.gif
        map <char, int> mp;
        
        for(int i = 0;i < s.size();i++){
            
            if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')
                mp[tolower(s[i])]++;
        }
        
        return mp.size() == 26;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends