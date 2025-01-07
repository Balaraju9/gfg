//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& v, vector<int>& wt, int c) {
        vector<vector<int>> v1;
        for(int i=0;i<v.size();i++){
            v1.push_back({v[i],wt[i]});
        }
        sort(v1.begin(),v1.end(),[](const auto &i,const auto &j){
            return ((double)i[0]/(double)i[1])>((double)j[0]/(double)j[1]);
        });
        
        double tot=0;
        for(int i=0;i<v1.size();i++){
            if(c>=v1[i][1]){
                tot+=v1[i][0];
                c=c-v1[i][1];
             
            }
            else{
               
                tot+=(double)c/(double)v1[i][1]*(double)v1[i][0];
                return tot;
            }
        }
        return tot;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends