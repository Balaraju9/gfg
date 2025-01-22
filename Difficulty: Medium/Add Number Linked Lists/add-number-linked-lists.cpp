//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addTwoLists(Node* n1, Node* n2) {
        Node* prev=NULL;
        while(n1!=NULL){
            Node* temp=n1->next;
            n1->next=prev;
            prev=n1;
            n1=temp;
        }
          
        Node* prev1=NULL;
        while(n2!=NULL){
            Node* temp=n2->next;
            n2->next=prev1;
            prev1=n2;
            n2=temp;
        }
        int c=0;
        vector<int> v1;
        while(prev!=NULL && prev1!=NULL){
            int s=prev->data+prev1->data+c;
            
            c=s/10;
            v1.push_back(s%10);
            
            prev=prev->next;
            prev1=prev1->next;
        }
          while(prev1!=NULL){
            int s=prev1->data+c;
            
            c=s/10;
            v1.push_back(s%10);
           
            prev1=prev1->next;
        }
          while(prev!=NULL){
            int s=prev->data+c;
            
            c=s/10;
            v1.push_back(s%10);
            
            prev=prev->next;
         
        }
         if(c){
            v1.push_back(c);
        }
       
        Node *k=new Node(0);
        Node *z=k;
    
        for(int i=v1.size()-1;i>=0;i--){
           
            k->next=new Node(v1[i]);
            k=k->next;
        }
        while(z->data==0){
            z=z->next;
        }
        
        return z;
        
        
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends