//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool fun(vector<int> st,int k,int mid){
    
        int cnt=1,sav=st[0];
        for(int i=1;i<st.size();i++){
            if(st[i]-sav>=mid){
                cnt++;
                sav=st[i];
                
            }
                if(cnt==k){
                    return true;
                }
            
        }
        return false;
    }

    int aggressiveCows(vector<int> &st, int k) {
        sort(st.begin(),st.end());
        int l=1,h=st[st.size()-1]-st[0];
        int ans=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(fun(st,k,mid)){
                
                ans=mid;
                
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }
        return ans;

    
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