//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
         
        vector <int> p, n;
        
        for(int i = 0;i < arr.size();i++){
            if(arr[i] >= 0){
                p.push_back(arr[i]);
            }
            else{
                n.push_back(arr[i]);
            }
        }
        
        int k = 0, j = 0;
        for(int i = 0;i < arr.size();){
            
            if(k < p.size()){
                arr[i++] = p[k++];
            }
            if(j < n.size()){
                arr[i++] = n[j++];
            }
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends