//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void bfs(int node, vector<vector<int>> adj, vector <bool> &v){
        
        int V = adj.size();
        
        queue <int> q;
        q.push(node);
        v[node] = 1;
        
        while(!q.empty()){
            
            int f = q.front();   
            q.pop();
            
            // Adjacency Matrix
            for(int i = 0;i < V;i++){
             
                if(adj[f][i] && v[i] == 0){
                    q.push(i);
                    v[i] = 1;
                }
            }
        } 
    }
    
    
    int numProvinces(vector<vector<int>> adj, int V) {
     
        vector <bool> visited(V, 0);   
        int provinces = 0;
        
        for(int i = 0;i < V;i++){
            if(visited[i] == 0){
                // BFS 
                bfs(i, adj, visited);
                provinces++;
            }
        }
        
        return provinces;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends