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
    Node* divide(Node* head) {
        Node *temp=head;
      Node *ev=new Node(0);
      Node *tev=ev;
      Node *od=new Node(0);
      Node *tod=od;
      while(temp!=NULL){
          if(temp->data%2==0){
              ev->next=temp;
              ev=ev->next;
              
              
          }
          else{
              od->next=temp;
              od=od->next;
          }
          temp=temp->next;
          if(temp==NULL){
               od->next=NULL;
              if(od->data!=0){
                  ev->next=tod->next;
              }
              else{
              ev->next=NULL;
              }
             
          }
      }
      return tev->next;
        
    }
};