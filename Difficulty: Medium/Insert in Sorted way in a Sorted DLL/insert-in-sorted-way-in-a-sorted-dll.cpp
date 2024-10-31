//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* getNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        if (head == NULL) {
            return NULL;
        }

        // Insert at the beginning if head->data is greater than x
        if (head->data >= x) {
            Node* temp = new Node();  // Allocate memory for temp
            temp->data = x;
            temp->next = head;
            temp->prev = NULL;
            head->prev = temp;
            return temp;
        }

        Node* k = head;
        while (k != NULL && k->next != NULL && k->data <= x) {
            k = k->next;
        }

        // Insert at the end if k is the last node and k->data is less than x
        if (k != NULL && k->next == NULL && k->data < x) {
            Node* temp = new Node();  // Allocate memory for temp
            temp->data = x;
            temp->next = NULL;
            temp->prev = k;
            k->next = temp;
            return head;
        }
        k=k->prev;

        // Insert in the middle if k->data < x and k->next->data > x
        if (k != NULL && k->next != NULL ) {
            Node* temp = new Node();  // Allocate memory for temp
            temp->data = x;
            Node* pu = k->next;
            k->next = temp;
            temp->next = pu;
            temp->prev = k;
            pu->prev = temp;
            return head;
        }

        return head;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = getNode(x);
            tail = head;
        }

        while (ss >> x) {
            tail->next = getNode(x);
            tail->next->prev = tail;
            tail = tail->next;
        }

        int valueToInsert;
        cin >> valueToInsert;
        cin.ignore(); // Ignore the newline character after the value

        Solution obj;
        head = obj.sortedInsert(head, valueToInsert);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends