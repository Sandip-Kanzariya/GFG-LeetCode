//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    
    // https://www.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1
    int GetNth(struct Node* head, int index){
        int ans;
        
        while(index--){
            ans = head -> data;
            head = head -> next;
        }
        return ans;
    }
    
    // Length : l
    
    int getCount(Node *head){
        
        int l = 0;
        
        while(head != NULL){
            l++;
            head = head -> next;
        }
        
        return l;
    }
    
    int getMiddle(Node *head)
    {
        int l = getCount(head);
        int mid = l / 2 + 1;
        
        return GetNth(head, mid);
    }
};


//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends