class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        // First Find Root of Binary Tree 
        unordered_set <int> child;

        child.insert(leftChild.begin(), leftChild.end());
        child.insert(rightChild.begin(), rightChild.end());
        int root = -1;
        // Find element which is not in any list 
        for(int i = 0;i < n;i++){
            if(child.find(i) == child.end()){
                root = i;
                break;
            }
        }

        // If there is no parent 
        if(root == -1) return 0;

        // if some node have more then one parent it is visited more then one in DFS : Fasle 
        unordered_set <int> visited;
        stack <int> st;
        visited.insert(root);
        st.push(root); 

        while(!st.empty()){
            int node = st.top();
            st.pop();

            // left, right
            vector <int> children = {leftChild[node], rightChild[node]};
            for(int c : children){ 

                if(c != -1){

                    // If already visited 
                    if(visited.find(c) != visited.end()){
                        return false;
                    }

                    st.push(c);
                    visited.insert(c);
                }
            }
        }


        // If all node traverse then connected 

        return visited.size() == n;
    }
};