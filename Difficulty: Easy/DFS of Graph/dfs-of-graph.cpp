//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node, vector<vector<int>>& adj, 
    vector<int> &ans, vector<bool> &v){
    
        ans.push_back(node);
        v[node] = 1;
        
        for(int i = 0;i < adj[node].size();i++){
            if(v[adj[node][i]] == 0){
                v[adj[node][i]] = 1;
                dfs(adj[node][i], adj, ans, v);    
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        
        int n = adj.size();
        vector <int> ans;
        vector <bool> visited(n, 0);
        
        visited[0] = 1;
        dfs(0, adj, ans, visited);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends