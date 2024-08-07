//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> st;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    vector<int> v1;
    while(!s.empty()){
        v1.push_back(s.top());
        s.pop();
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v1.size();j++){
            if(v1[i]>v1[j]){
                swap(v1[i],v1[j]);
            }
        }
    }
        reverse(v1.begin(), v1.end());
    for(auto &i:v1){
        s.push(i);
    }
   //Your code here
}