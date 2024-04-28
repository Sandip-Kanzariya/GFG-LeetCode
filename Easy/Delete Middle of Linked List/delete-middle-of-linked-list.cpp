//{ Driver Code Starts
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



// } Driver Code Ends
/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        
        if(head -> next == NULL) return NULL;
        
        int n = 0;
        // Length of the LL 
        Node* temp = head;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        
        
        temp = head;
        
        if(n % 2){ // odd length 
            int m = (n + 1) / 2;
            
            n = 1;
            while(n != m - 1){
                
                temp = temp -> next;
                n++;
            }
            
            
            Node* tp = temp -> next;
            temp -> next = tp -> next;            
            
            delete tp;
        }
        else { // even length 
            int m = n / 2;
            
            n = 1;
            while(n != m){
                
                temp = temp -> next;
                n++;
            }
            
            Node* tp = temp -> next;
            temp -> next = tp -> next;            
            
            delete tp;
        }
        
        return head;
    }
};

//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends