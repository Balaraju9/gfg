//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
       stack<string> st;
       string s1;
       for(int i=0;i<str.size();i++){
           if(str[i]=='.'){
               st.push(s1);
               s1="";
               
           }
           else{
               s1+=str[i];
           }
       }
       st.push(s1);
       str="";
       while(!st.empty()){
           if(st.size()==1){
               str+=st.top();
           }
           else{
               str+=st.top()+".";
           }
           st.pop();
           
       }
       return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends