//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
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

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* h) {
        vector<Node*> v1;
        Node* k=new Node(3);
        Node* k1=new Node(3);
        int c=0;
        v1.push_back(k1);
        v1.push_back(k);
        while(h!=NULL){
            c++;
            if(c%2==0){
                k->next=new Node(h->data);
                k=k->next;
                
            }
            else{
                  k1->next=new Node(h->data);
                k1=k1->next;
                
                
            }
            h=h->next;
        }
        v1[0]=v1[0]->next;
        v1[1]=v1[1]->next;
    
        //     while( k && k->next){
           
         
        // }
      
       
     
        return v1;
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends