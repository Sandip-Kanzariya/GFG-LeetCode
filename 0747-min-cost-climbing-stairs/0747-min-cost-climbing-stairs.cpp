class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector  <int> v(n + 1, 0);
        v[0] = 0;
        v[1] = 0;

        for(int i = 2;i <= n;i++){
            v[i] = min(v[i - 1] + cost[i - 1 ], v[i -2] + cost[i - 2]);
        }
        return v[n];
    }
};