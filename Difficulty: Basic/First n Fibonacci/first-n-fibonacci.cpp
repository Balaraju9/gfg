//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    
    void fun(long long n,long long c,long long a,long long b,long long co,vector<long long> &v1){
        if(co==n){
            return;
        }
        c=a+b;
        a=b;
        b=c;
        v1.push_back(a);
        fun(n,c,a,b,++co,v1);
        
        
    }
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long a=0,b=1,c=0;
        vector<long long> v1;
         fun(n,c,a,b,0,v1);
         return v1;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends