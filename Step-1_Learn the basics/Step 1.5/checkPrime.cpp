#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N;
	bool ans = true;
	cin >> N;
    for (int i=2;i<=N/2;i++) {
    	if (N%i == 0) {
		  	ans = false;
			break;
        }
    }
	if(ans)
		cout<<"true";
	else
		cout<<"false";
}
