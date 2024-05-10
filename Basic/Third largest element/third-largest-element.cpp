//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         
         int fl = 0;
         int sl = -1;
         int tl = -2;
         
         for(int i = 0;i < n;i++){
             
             if(a[i] > fl){
                 
                 tl = sl;
                 sl = fl;
                 fl = a[i];
             }
             else if(a[i] < fl && a[i] > sl){
                 tl = sl;
                 sl = a[i];
             }
             else if(a[i] > tl){ 
                 tl = a[i];
             }
         }
         
         return tl;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends