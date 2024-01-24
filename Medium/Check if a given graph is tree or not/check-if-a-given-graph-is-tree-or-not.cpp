//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
  
    /* Tree : 
    
    1. # of Edges = # of node - 1;
    2. There is exactly One path from one node to any other node (No Cycle)
    3. There Should be one connected Component 
    
    
    */
    
     bool dfs(vector<int> adj[], vector<bool>& vis, int u, int par) {
        vis[u] = true;
        for (int v : adj[u]) {
            if (v == par) continue;
            if (vis[v] == true) return true;
            if (dfs(adj, vis, v, u)) return true;
        }
        return false;
    }
    
    int isTree(int n, int m, vector<vector<int>> &adj) {
        
        vector<int> Adj[n];
        vector<bool> vis(n, false);
        bool flag = false;
        int val = -1;

        for (int i = 0; i < m; i++) {
            int a = adj[i][0];
            int b = adj[i][1];
            Adj[a].push_back(b);
            Adj[b].push_back(a);
        }
        int count=0;
        for (int i = 0; i < n; i++) {
            if (!vis[i] ) {
              if(dfs(Adj, vis, i, val))
                flag = true;
                 count++;
            }
           
        }
        if(count>1) return false;
        
        return !flag ;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends