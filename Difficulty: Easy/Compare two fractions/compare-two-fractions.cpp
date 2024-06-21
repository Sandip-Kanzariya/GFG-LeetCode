//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        int i = 0;
        int n = str.size();
        
        // First Part 
        string nr1 = "", t = "";
        
        while(str[i] != ','){
            
            if(str[i] == '/'){
                i++;        
                nr1 = t;
                t = "";
                continue;
            }
            
            t += str[i];
            i++;
        }
        string dr1 = t;
        
        int n1 = stoi(nr1);
        int d1 = stoi(dr1);
        
        // Second Part 
        t = "";
        string nr2 = "", dr2 = "";

        i += 2;
        while(i < n){
            
            if(str[i] == '/'){
                i++;        
                nr2 = t;
                t = "";
                continue;
            }
            
            t += str[i];
            i++;
        }
        
        dr2 = t;
        
        
        int n2 = stoi(nr2);
        int d2 = stoi(dr2);
        
        
        if((double)n1 / d1 > (double)n2 / d2){
            return to_string(n1) + "/" + to_string(d1);
        }
        else if((double)n1 / d1 < (double)n2 / d2){
            return to_string(n2) + "/" + to_string(d2);
        }
        else{
            return "equal";
        }
        
        return "";
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends