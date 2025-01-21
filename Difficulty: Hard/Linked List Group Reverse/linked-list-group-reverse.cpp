//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *h, int k) {
        // code here
        vector<int> ans;
        vector<int> v1;
        Node* pu=h;
        int k1=0;
        while(pu!=NULL){
            if(k1%k==0){
                reverse(v1.begin(),v1.end());
                for(auto &i:v1){
                    ans.push_back(i);
                }
                v1={};
                
                
            }
            ++k1;
            v1.push_back(pu->data);
            pu=pu->next;
            
           
            
        }
        
             reverse(v1.begin(),v1.end());
        
        
        
          for(auto &i:v1){
                    ans.push_back(i);
                }
             
        int i=0;
        pu=h;
        while(pu!=NULL){
            pu->data=ans[i];
            i++;
            pu=pu->next;
        }
        return h;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

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
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends