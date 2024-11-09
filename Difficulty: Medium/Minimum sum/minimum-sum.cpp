//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
       sort(arr.begin(),arr.end());
       string s1="";
       string s2="";
       for(int i=0;i<arr.size();i++){
           if(i%2==0){
               s1+=to_string(arr[i]);
           }
           else{
               s2+=to_string(arr[i]);
               
           }
       }
       string z1="";
       int i=s1.size()-1,j=s2.size()-1,c=0;
       while(i>=0||j>=0||c>0){
           int s=c;
           if(i>=0){
               s+=s1[i]-'0';
               i--;
           }
           if(j>=0){
               s+=s2[j]-'0';
               j--;
           }
           z1+=to_string(s%10);
           c=s/10;
       }
       reverse(z1.begin(),z1.end());
      i=0;
      while(z1[i]=='0'){
          i++;
      }
    return z1.substr(i);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends