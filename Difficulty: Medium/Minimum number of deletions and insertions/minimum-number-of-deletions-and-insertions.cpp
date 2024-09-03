//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	      vector<vector<int>> m(str1.size()+1, vector<int>(str2.size()+1));

	    for(int i=0;i<=str1.size();i++){
	        for(int j=0;j<=str2.size();j++){
	            m[i][0]=0;
	            m[0][j]=0;
	            
	            
	        }
	    }
	    for(int i=1;i<=str1.size();i++){
	        for(int j=1;j<=str2.size();j++){
	            if(str1[i-1]==str2[j-1]){
	                m[i][j]=1+m[i-1][j-1];
	            }
	            else{
	                m[i][j]=max(m[i-1][j],m[i][j-1]);
	            }
	        }
	    }
	    return (str1.size()-m[str1.size()][str2.size()])+(str2.size()-m[str1.size()][str2.size()]);
	    
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends