//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.

int getCount(struct Node* head){
    
        int ans = 0;
        while(head != NULL){
            ans++;
            head = head -> next;
        }
        
        return ans;
}
    
Node* insertInMiddle(Node* head, int x)
{
    Node* temp = head;
    
	int l = getCount(head);
	
	int half;
	if(l % 2) 
	    half = l / 2 + 1;
	else
	    half = l / 2;
	
    while(half != 1){
        temp = temp -> next;    
        half--;
    }
    
    Node* t = new Node(x);
    t -> next = temp -> next;
    temp -> next = t;
    
	
	return head;
}