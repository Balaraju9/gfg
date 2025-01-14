//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        sort(arr,arr+n);
        long long int xo=arr[0];
        vector<long long int> v1;
        for(int i=1;i<n;i++){
            if(arr[i]==xo || xo==0){
                xo=xo^arr[i];
            }
            else{
                v1.push_back(xo);
                xo=arr[i];
            }
        }
        if(xo!=0) v1.push_back(xo);
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
     
        
        return {v1[0],v1[1]};
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends