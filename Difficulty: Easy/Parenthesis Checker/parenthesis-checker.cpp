//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        int c=0;
        for(int i=0;i<x.size();i++){
            c=0;
            if(!st.empty()  ){
                if(st.top()=='(' && x[i]==')'){
                    st.pop();
                    c=1;
                }
                
                   else if(st.top()=='[' && x[i]==']'){
                    st.pop();
                    c=1;
                }
                   else if(st.top()=='{' && x[i]=='}'){
                    st.pop();
                    c=1;
                }
                if(c==0){
                     st.push(x[i]);
                }
                
                
            }
            else{
                st.push(x[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends