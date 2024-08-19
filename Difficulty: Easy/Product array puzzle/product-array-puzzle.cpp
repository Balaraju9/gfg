//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        vector<long long int> v1;
        vector<long long int> v2(nums.size());
        v1.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            v1.push_back(nums[i]*v1[i-1]);
            
        }
        v2[nums.size()-1]=nums[nums.size()-1];
         for(int i=nums.size()-2;i>=0;i--){
            
            v2[i]=v2[i+1]*nums[i];
            
        }
      
        
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(v1.size()==1){
                    nums[i]=1;
                }
                else{
                nums[i]=v2[i+1];
                }
                
            }
            else if(i==nums.size()-1){
                nums[i]=v1[i-1];
                
            }
            else{
                nums[i]=v1[i-1]*v2[i+1];
                
            }
            
        }
        return nums;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends