//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int k=1,m;
        for(int i=0;i<n;i++){
            m=k;
            for(int j=0;j<=i;j++){
                cout<<m<<" ";
                if(m==1)
                    m=0;
                else
                    m=1;
            }
            cout<<endl;
            if(k==0)
                k=1;
            else
                k=0;
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