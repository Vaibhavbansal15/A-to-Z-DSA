#include<iostream>
using namespace std;
int main(){
    int N=12;
int cnt=0 , i=0 , num = N;
    while(num){
        i = num%10;
        num/10;
        if(N%i == 0)
            cnt++;
    }
    cout<<cnt;
return 0;
}