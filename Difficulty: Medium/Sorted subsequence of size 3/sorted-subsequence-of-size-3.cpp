//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2) {
    int m = v2.size();
    int n = v1.size();
    int j = 0; // For index of v2

    // Traverse v1 and v2
    for (int i = 0; i < n && j < m; i++) {
        if (v1[i] == v2[j]) {
            j++;
        }
    }
    return (j == m);
}


// } Driver Code Ends
// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
  
    // Nearest Left smaller Index
    vector <int> NLSI(vector <int> &arr){
        stack <pair<int, int>> st;
        int n = arr.size();
        
        vector <int> nlsi(n, 0);
        
        
        for(int i = 0;i < n;i++){
            
            if(st.empty()){
                nlsi[i] = -1;
            }
            else if(!st.empty() && st.top().first < arr[i]){
                nlsi[i] = st.top().second;
            }
            else if(!st.empty() && st.top().first >= arr[i]){
                
                while(!st.empty() && st.top().first >= arr[i]){
                    st.pop();
                }
                
                if(st.empty()){
                    nlsi[i] = -1;
                }
                else{
                    nlsi[i] = st.top().second;
                }
            }
            
            st.push({arr[i], i});
        }
        return nlsi;
    }
    
    // Nearest Right Greater Index
    vector <int> NRGI(vector <int> &arr){
        stack <pair<int, int>> st;
        int n = arr.size();
        
        vector <int> nrgi(n, 0);
        
        
        for(int i = n - 1;i >= 0;i--){
            
            if(st.empty()){
                nrgi[i] = -1;
            }
            else if(!st.empty() && st.top().first > arr[i]){
                nrgi[i] = st.top().second;
            }
            else if(!st.empty() && st.top().first <= arr[i]){
                
                while(!st.empty() && st.top().first <= arr[i]){
                    st.pop();
                }
                
                if(st.empty()){
                    nrgi[i] = -1;
                }
                else{
                    nrgi[i] = st.top().second;
                }
            }
            st.push({arr[i], i});
            
        }
        return nrgi;
    }
    
    vector<int> find3Numbers(vector<int> &arr) {
        
        vector <int> nlsi = NLSI(arr);
        vector <int> nrgi = NRGI(arr);
        
        //for(auto k : nlsi) cout << k << " ";
        //cout << "\n";
        //for(auto k : nrgi) cout << k << " ";
        
        int n = arr.size();
        for(int i = 0;i < n;i++){
            
            vector <int> ans;
            if(nlsi[i] != -1 && nrgi[i] != -1){
                ans.push_back(arr[nlsi[i]]);
                ans.push_back(arr[i]);
                ans.push_back(arr[nrgi[i]]);
            
                return ans;
            }
        }
        return {};
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution obj;
        auto res = obj.find3Numbers(arr);
        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and isSubSequence(arr, res)) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends