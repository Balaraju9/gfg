//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        if(str.size()==1){
            int k=stoi(str);
            if(k<=5){
                return "0";
            }
            else{
                return "10";
            }
        }
      int k1=str[str.size()-1]-'0';
      if(k1<=5){
          return str.substr(0,str.size()-1)+"0";
      }
      
      string balu=to_string((str[str.size()-2]-'0')+1)+"0";
      if(balu.size()<=2){
          return  str.substr(0,str.size()-2)+balu;
      }
       str=str.substr(0,str.size()-2)+"00";
       int i=str.size()-1,j=balu.size()-1;
       int c=0;
       while(i>=0 && j>=0){
           int cal1=str[i]-'0';
           int cal2=balu[j]-'0';
           int total=cal1+cal2+c;
           c=total/10;
         
           
           str[i]=(total%10)+'0';
           i--;
           j--;
        
           
       }
         while(i>=0 ){
           int cal1=str[i]-'0';
      
           int total=cal1+c;
           c=total/10;
          
           str[i]=(total%10)+'0';
           i--;
         
        
           
       }
          while( j>=0){
          
           int cal2=balu[j]-'0';
           int total=cal2+c;
           c=total/10;
          
           str[i]=(total%10)+'0';
       
           j--;
        
           
       }
       return str;
      
      
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends