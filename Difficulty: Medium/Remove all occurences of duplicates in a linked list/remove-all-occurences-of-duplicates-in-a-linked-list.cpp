//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        
        Node* temp = head;
        Node* prev = NULL;
        
        
        while(temp != NULL){
            
            int skip = 0;    
            while(temp != NULL && temp -> next != NULL){ // Skip Consicutive
            
                if(temp -> data == temp -> next -> data){
                    temp = temp -> next;
                    skip += 1;
                }
                else 
                    break;
            }
            
            if(skip > 0){ // Jump 
            
                if(prev == NULL){
                    head = temp -> next;
                    temp = head;
                }
                else{
                    prev -> next = temp -> next;
                    temp = prev -> next;
                }
            }
            else{ // to handle distinct elements 
                prev = temp;
                temp = temp -> next;
            }
        } 
        
        return head;
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends