//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    /* DutchNational Flag Algorithm : 
    
        Time: O(n)
        Space: O(1)
    */ 
    void sort012(int a[], int n)
    {
        int low = 0, 
            flag = 0,
            high = n - 1;
            
        while(flag <= high){
            
            if(a[flag] == 0){
                swap(a[low], a[flag]);
                low++;
                flag++;
            }    
            else if(a[flag] == 1){
                flag++;
            }
            else{
                swap(a[high], a[flag]);
                high--;
            }
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends