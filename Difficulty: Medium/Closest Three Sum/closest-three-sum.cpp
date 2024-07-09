//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
  
    // 0 1 2 3 4 5
    int threeSumClosest(vector<int> arr, int target) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        int closestSum = INT_MAX;
        
        // n - 3, n- 2, n - 1
        // i, l = i + 1, r 
        
        for(int i = 0;i < n - 2;i++){
            int l = i + 1;       
            int r = n - 1;
            
            while(l < r){
                
                int sum = arr[i] + arr[l] + arr[r];
                
                int diff = abs(sum - target);
                
                if(diff < min_diff){
                    min_diff = diff;
                    closestSum = sum;
                }
                else if(diff == min_diff && sum > closestSum){
                    closestSum = sum;
                }
                
                if(target == sum) return sum;
                
                if(sum < target)l++;
                else --r;
            }
        }
        
        return closestSum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends