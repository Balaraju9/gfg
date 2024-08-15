//{ Driver Code Starts
// Initial template for C++

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

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

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
    Node* addOne(Node* head) {
        Node* prev=NULL;
        Node* cur=head;
        Node* next;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        int c=1;
        Node *puk=prev;
        while(puk!=NULL){
            if(puk->data==9 && c==1){
                puk->data=0;
                c=1;
            }
            else{
                if(c==1){
                puk->data=puk->data+1;
                c=0;
                }
            }
            if(puk->next==NULL){
                break;
            }
            puk=puk->next;
            
        }
        if(c==1){
            puk->next=new Node(1);
            
        }
       Node* prev1=NULL;
         cur=prev;
         
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev1;
            prev1=cur;
            cur=next;
        }
        return prev1;
        
    }
};

//{ Driver Code Starts.

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

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends