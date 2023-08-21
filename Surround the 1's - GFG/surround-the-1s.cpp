//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    bool check(int i, int j, int n, int m){
        if(i >= 0 && i < n && j >= 0 && j < m) return true;
        
        return false;
    }
    
    vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                                        {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
                                        
    int Count(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int ans = 0;
        
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                
                int zero = 0;
                if(matrix[i][j] == 1){
                    for(auto k : movements){
                        if(check(i + k.first, j + k.second, n, m)){
                            if(matrix[i + k.first][j + k.second] == 0) zero++; 
                        }
                    }
                }
                if(zero != 0 && zero % 2 == 0) ans++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends