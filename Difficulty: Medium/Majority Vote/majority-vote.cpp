//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        int fre=0,ans=-1;
        vector<int> v3;
        for(int i=0;i<nums.size();i++){
            if(fre==0) ans=nums[i];
            if(ans==nums[i]) fre++;
            else fre--;
            
        }
        
        
          int fre1=0,ans1=-1;
          for(int i=0;i<nums.size();i++){
              if(nums[i]==ans) continue;
            if(fre1==0) ans1=nums[i];
            if(ans1==nums[i]) fre1++;
            else fre1--;
            
        }
        
        
        
        int z=0,z1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans){
                z++;
            }
            else if(nums[i]==ans1){
                z1++;
            }
        }
        if(z>nums.size()/3) v3.push_back(ans);
        if(z1>nums.size()/3) v3.push_back(ans1);
        if(v3.size()==0) v3.push_back(-1);
        sort(v3.begin(),v3.end());
        return v3;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends