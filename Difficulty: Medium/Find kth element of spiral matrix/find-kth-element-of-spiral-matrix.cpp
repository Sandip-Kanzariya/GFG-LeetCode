//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		
        int left = 0, right = m - 1,
            up = 0, down = n - 1;
            
        while(left <= right && up <= down){
            
            // Read First Row 
            for(int col = left;col <= right && up <= down;col++){
                k--;
                if(k == 0)
                    return matrix[up][col];
            }
            up++;
            
            // Last Column 
            for(int row = up;row <= down && left <= right;row++){
                k--;
                if(k == 0)
                    return matrix[row][right];
            }
            right--;
            
            // Last Row 
            for(int col = right;col >= left && up <= down;col--){
                k--;
                if(k == 0)
                    return matrix[down][col];
            }
            down--;
            
            // First Column 
            for(int row = down;row >= up && left <= right;row--){
                k--;
                if(k == 0)
                    return matrix[row][left];
            }
            left++;
            
        }
        
        return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends