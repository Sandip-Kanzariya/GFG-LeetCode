//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  // Two Pointers 
    int smallestSubWithSum(int x, vector<int>& arr) {
        
        int mini = INT_MAX;
        
        int sum = 0, l = 0;
        int n = arr.size();
        for(int i = 0;i < n;i++){
            sum += arr[i];
            
            while(sum > x){
                mini = min(mini, i - l + 1);
                sum -= arr[l++];
            }
        }
        
        return (mini == INT_MAX) ? 0 : mini;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends