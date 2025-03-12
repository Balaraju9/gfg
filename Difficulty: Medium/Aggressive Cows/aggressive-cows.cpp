//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool fun(vector<int> &st,int m,int cow){
        int pet=st[0];
        for(int i=1;i<st.size();i++){
            if(st[i]-pet>=m){
                pet=st[i];
                cow--;
            }
            if(cow-1<=0){
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &st, int k) {
        sort(st.begin(),st.end());
        int h=st[st.size()-1];
        int l=0;
        while(l<=h){
            int m=(l+h)/2;
            if(fun(st,m,k)==true){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return h;

      
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends