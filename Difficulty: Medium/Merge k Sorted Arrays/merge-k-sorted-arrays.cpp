//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends

//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> fun(vector<int> &v1,vector<int> &v2){
        int i=0,j=0;
        vector<int> v3;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]<v2[j]){
                v3.push_back(v1[i]);
                i++;
            }
            else{
                v3.push_back(v2[j]);
                j++;
            }
        }
          while(i<v1.size()){
           
                v3.push_back(v1[i]);
                i++;
         
        }
            while(j<v2.size()){
           
                v3.push_back(v2[j]);
                j++;
         
        }
        return v3;
        
        
    }
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        vector<int> v1(arr.size()*k);
        int c1=0;
        for(int i=1;i<arr.size();i++){
           vector<int> v2= fun(arr[i],arr[i-1]);
           arr[i]=v2;
           
        }
        return arr[arr.size()-1];
        
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}






// } Driver Code Ends