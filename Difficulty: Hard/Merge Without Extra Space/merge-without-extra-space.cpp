//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    /* 
    Time: O(n + m)
    Space: O(n + m)
    */
    void mergeArrays(vector<int>& a, vector<int>& b) {
        
        int n = a.size(), m = b.size();
        
        vector <int> ans(n + m, 0);
        
        int i = 0, j = 0, k = 0;
        while(i < n && j < m){
            if(a[i] <= b[j]){
                ans[k++] = a[i++];
            }            
            else if(a[i] > b[j]){
                ans[k++] = b[j++];
            }
        }
        
        while(i < n){
            ans[k++] = a[i++];
        }
        while(j < m){
            ans[k++] = b[j++];
        }
        i = 0;
        for(i = 0;i < n;i++){
            a[i] = ans[i];
        }
        
        for(int j = 0;j < m;j++){
            b[j] = ans[i + j];
        }
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends