//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /* Brute Force : 
    
    
    Time: O()
    Space: O()
    
    */
    int countTriangles(vector<int>& arr) {
        // i, j, k => a[i] + a[j] > a[k] 
        
        int n = arr.size();
        
        int ans = 0;
        
        sort(arr.begin(), arr.end());
        
        for(int i=0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                int sum = arr[i] + arr[j];
                
                for(int k = j + 1;k < n;k++){
                    if(sum > arr[k]){
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends