#include <iostream>
using namespace std;

int power(int x, int n){
    int res=1;
    for(int i=0;i<n;i++){
        res = res*x;
    }
    return res;
}

int power2(int x, int n){
    if(n==0){
        return 1;
    }
    int temp=power2(x, n/2);
    temp=temp*temp;
    if(n%2==0){
        return temp;
    }
    else
    return temp*x;
}

int power3(int x, int n){
    int res=1;
    while(n>0){
    //    if(n%2!=0)
    if(n&1)
       {
        res=res*x;
       }
       else 
       x=x*x;
    //    n=n/2;
       n=n>>1;
    }
    return res;
}

int main(){
    cout<<power(3,4)<<endl;
    cout<<power2(3,4)<<endl;
    cout<<power3(3,4);
}