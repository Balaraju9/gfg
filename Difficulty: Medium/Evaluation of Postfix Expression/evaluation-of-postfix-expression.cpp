//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
       stack<int> st;
       for(int i=0;i<arr.size();i++){
           if(arr[i]!="*" && arr[i]!="+"&& arr[i]!="-"&& arr[i]!="/"){
               st.push(stoi(arr[i]));
           }
           else{
               int s1=st.top();
               st.pop();
               int s2=st.top();
               st.pop();
               int ind1=s1;
               int ind2=s2;
               if(arr[i]=="*"){
                   ind1=(int)ind1*ind2;
                   
               }
               else if(arr[i]=="+"){
                   ind1=(int)ind1+ind2;
                   
               }
               else if(arr[i]=="-"){
                   ind1=(int)ind2-ind1;
                   
               }
               else{
                   ind1=(int)ind2/ind1;
                   
               }
               st.push(ind1);
               
           }
       }
       return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends