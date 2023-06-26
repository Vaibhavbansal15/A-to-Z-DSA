//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int d=0 , m=n;
		    while(m!=0){
		        m = m/10;
		        d++;    // digits count
		    }
		    
		    int num = 0 , k = 0;
		    m = n;
		    while(m){
		        k = m%10;
		        num = num + k*pow(10,--d);
		        m = m/10;
		    }
		    
		    if(num == n)
		        return "Yes";
		    else
		        return "No";  
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends