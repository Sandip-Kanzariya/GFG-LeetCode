//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        
        int n = arr.size();
        int one = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == 1){
                one++;
            }
            else{
                return n - one;
            }
        }
        
        return n - one;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.countZeroes(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends