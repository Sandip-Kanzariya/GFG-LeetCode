//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    /* Two Pointers 
        Time: O(n^2)
        Space: O(1)
    */
    int countTriplets(vector<int> &arr, int target) {
        
        int n = arr.size();
        int ans = 0;
        
        for(int i = 0;i < n - 2;i++){
            
            int l = i + 1, h = n - 1;
            
            while(l <= h){
                
                int sum = arr[i] + arr[l] + arr[h];
                
                int e1 = arr[l];
                int c1 = 0;
                
                int e2 = arr[h];
                int c2 = 0;
                
                if(sum == target){
                    
                    while(l <= h && arr[l] == e1){
                        l++;
                        c1++;
                    }
                    
                    while(l <= h && arr[h] == e2){
                        h--;
                        c2++;
                    }
                    
                    if(e1 == e2) // [1 1 1 1]
                        ans += c1 * (c1 - 1) / 2; // c1 calculated first 
                    else 
                        ans += c1 * c2;
                }
                else if(sum < target){
                    l++;    
                }
                else{
                    h--;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends