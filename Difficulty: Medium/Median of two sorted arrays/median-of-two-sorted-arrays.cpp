//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        
        int i = 0, j = 0;
        
        vector<int> list;
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        while(i < n1 && j < n2){
            if(arr1[i] <= arr2[j]){
                list.push_back(arr1[i]);
                i++;
            }    
            else{
                list.push_back(arr2[j]);
                j++;
            }
        }
        
        while(i < n1){
            list.push_back(arr1[i]);
            i++;
        }
        
        while(j < n2){
            list.push_back(arr2[j]);
            j++;
        }
        int l = list.size();
        
        if(l % 2 == 1){
            return list[l / 2];
        }
        else if(l % 2 == 0){
            int m = l / 2;
            return list[m - 1] + list[m];    
        }
        
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends