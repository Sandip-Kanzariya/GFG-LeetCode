//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

int cmp(pair<pair <int, int>, int> a, pair<pair <int, int>, int> b){
    return a.second > b.second;    
}

class Solution {
  public:
  
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        
        vector <pair<pair <int, int>, int>> vp;
        
        for(int i = 0;i < n;i++){
            vp.push_back({{arr[i], brr[i]}, abs(arr[i] - brr[i])});
        }
        
        sort(vp.begin(), vp.end(), cmp);
            
        
        long long ans = 0;
        for(auto k : vp){
            int a = k.first.first;
            int b = k.first.second;
            
            if(a > b && x > 0 || y <= 0){
                ans += a;
                x--;
            }
            else
            {
                ans += b;
                y--;
            }
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends