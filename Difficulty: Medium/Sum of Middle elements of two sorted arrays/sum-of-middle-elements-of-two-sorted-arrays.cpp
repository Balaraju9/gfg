//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int k1=(arr1.size()+arr2.size())/2;
        int i=0,j=0,balu=0;
        int ele=0;
        int puk=0;
        int sul=0;
        while(i<arr1.size() && j<arr2.size()){
            puk++;
            if(arr1[i]>arr2[j]){
                balu=j;
                ele=arr2[j];
                j++;
                
                
            }
            else{
                balu=i;
               
                ele=arr1[i];
                i++;
            }
            if(puk==k1+1){
                sul+=ele;
            }
            if(puk==k1){
                sul+=ele;
            }
           
            
        }
        return sul;
        
        // code here
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends