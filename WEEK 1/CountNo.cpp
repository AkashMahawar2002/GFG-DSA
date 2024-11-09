#include<iostream>
using namespace std;

int count(int n){
    int res = 0;
    while(n>0){
        n=n%10;
        res++;
    }
    return res;
}
int main(){
    cout<<count(787836);
    return 0;
}