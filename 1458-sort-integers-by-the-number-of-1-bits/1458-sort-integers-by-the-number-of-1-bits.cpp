class Solution {
public:

    static int cmp(pair <int, int> a, pair <int, int> b){

        if(a.second == b.second) return a.first < b.first;

        return a.second < b.second;
    }

    vector<int> sortByBits(vector<int>& arr) {
        
        vector <pair<int, int>> v;
        for(int i = 0;i < arr.size();i++){

            int x = __builtin_popcount(arr[i]);
            v.push_back({arr[i], x});
        }

        sort(v.begin(), v.end(), cmp);

        vector <int> ans;

        for(auto k : v){
            ans.push_back(k.first);
        }

        return ans;
    }
};