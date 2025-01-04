//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    /* Two pointer 
        
        Time: O(n^2)
        Space: O(1)
        
    */
    bool hasTripletSum(vector<int> &arr, int target) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        for(int i = 0;i < n - 2;i++)
        {
            int l = i + 1, h = n - 1;
            
            while(l < h){
                
                int sum = arr[i] + arr[l] + arr[h];
                
                if(sum == target){
                    // cout << arr[i] <<  " " << arr[l] << " " << arr[h] << "\n"; 
                    return 1;
                }
                else if(sum < target){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends