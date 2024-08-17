//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        int n = nums.size();
        
        vector <long long int> prefix(n, 1), suffix(n, 1);
        
        prefix[0] = nums[0];
        for(int i = 1;i < n;i++){
            prefix[i] = prefix[i - 1] * nums[i];
        }
        
        suffix[n - 1] = nums[n - 1]; 
        for(int i = n - 2;i >= 0;i--){
            suffix[i] = suffix[i + 1] * nums[i];
        }
        
        vector <long long int> ans(n, 1);    
            
        for(int i = 0;i < n;i++){
            
            if(i == 0 && i + 1 < n){
                ans[i] = suffix[i + 1];
            }
            else if(i == n - 1 && i - 1 >= 0){
                ans[i] = prefix[i - 1];
            }
            else if(i - 1 >= 0 && i + 1 < n){
                ans[i] = prefix[i - 1] * suffix[i + 1];
            }
        }
    
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends