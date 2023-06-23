//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int s=2*n-1;
	    for(int i=0;i<n;i++){
	        for(int j=n;j>n-i;j--){
	            cout<<" ";
	        }
	        for(int k=0;k<s;k++){
	            cout<<"*";
	        }
	        cout<<endl;
	        s-=2;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends