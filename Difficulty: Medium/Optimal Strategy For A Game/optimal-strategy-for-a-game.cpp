class Solution {
  public:
    int solve(int i,int j,vector<int> &arr,int p,vector<vector<long long>> &dp
){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(p==0){
            int c1=arr[i]+solve(i+1,j,arr,1,dp);
            int c2=arr[j]+solve(i,j-1,arr,1,dp);
            return dp[i][j]=max(c1,c2);
            
        }
        else{
            int c1=solve(i+1,j,arr,0,dp);
            int c2=solve(i,j-1,arr,0,dp);
            return dp[i][j]=min(c1,c2);
            
        }
        
    }
    int maximumAmount(vector<int> &arr) {
        vector<vector<long long>> dp(arr.size(),vector<long long>(arr.size(),-1));
        
        return solve(0,arr.size()-1,arr,0,dp);
        
    }
};