//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            char ch='A';
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int k=0;k<i;k++){
                cout<<ch;
                ch++;
            }
            ch--;
            for(int m=1;m<i;m++){
                ch--;
                cout<<ch;
            }
            cout<<endl;
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