//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
       unordered_map<int,int> mp;
       int j=0;
       int max1=0,s=0;
       while(j<n){
           s=s+arr[j];
          
           if(mp.find(s-k)!=mp.end()){
               max1=max(max1,abs(mp[s-k]-j));
           }
            if(s==k){
               max1=max(max1,j+1);
           }
           if(mp.find(s)!=mp.end()){
           }
           else{
           mp[s]=j;
           }
           j++;
       }
       return max1;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends