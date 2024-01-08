//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    // Reverse Linked List : Pass By reference 
    void reverse(Node *&n){
        Node *prev = NULL;
        Node *curr = n;
        Node *Next = n;
            
            
        while(Next != NULL){
            Next = Next -> next;
            curr -> next = prev;
            prev = curr;
            curr = Next;
        }
        
        n = prev;
    }
    
    
    // merge two sorted linked list
    Node *merge(Node * &head1, Node *&head2){
        Node *ans, *last;
        
        if(head1 == NULL) return head2;
        else if(head2 == NULL) return head1;
        
        if(head1 -> data < head2 -> data){
            ans = head1;
            last = head1;
            
            head1 = head1 -> next;
            last -> next = NULL;
        }
        else{
            ans = head2;
            last = head2;
            
            head2 = head2 -> next;
            last -> next = NULL;
        }
        
        
        // Repeat
        while(head1 != NULL && head2 != NULL){
            
            if(head1 -> data < head2 -> data){
                last -> next = head1;
                last = head1;
                head1 = head1 -> next;
                last -> next = NULL;
            }
            else{
                last -> next = head2;
                last = head2;
                head2 = head2 -> next;
                last -> next = NULL;
            }
        }
        
        if(head1 != NULL) last -> next = head1;
        else last -> next = head2;
        
        return ans;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node *ans =merge(node1, node2);
        
        reverse(ans);
        
        return ans;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends