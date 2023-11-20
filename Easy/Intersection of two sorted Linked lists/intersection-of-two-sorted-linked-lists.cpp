//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:
    
    
    
    /* 
        Time : O(n + m)
        Space : O(n + m)
    */

    Node* findIntersection(Node* head1, Node* head2)
    {   
        
        Node *t1 = head1, // For First LL
             *t2 = head2, // For Second LL
             *t = NULL, // Current
             *head = NULL; // Result Head
        
        while(t1  && t2){
            
            
            if(t1 -> data == t2 -> data){
                
                // For Result LL 
                if(head == NULL){
                    Node *temp = new Node(t1 -> data);
                    t = temp;
                    head = temp;
                }
                else{
                    Node *temp = new Node(t1 -> data);
                    t -> next = temp;
                    t = temp;
                }
                
                // Go Ahead
                t1 = t1 -> next;
                t2 = t2 -> next;
                
                
            }    
            else{
                if(t1 -> data < t2 -> data){
                    t1 = t1 -> next;
                }
                else{
                    t2 = t2 -> next;
                }
            }
            
        }
        
        return head;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends