#include<iostream>
using namespace std;

int fib1(int n){
    if(n==0 || n==1){
        return n;
    }
    else 
    return fib1(n-1)+ fib1(n-2);
    
}

int fib2(int n){
    int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int fib3(int n){
    if(n==0 || n==1){
        return n;
    }
    int a=0, b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    cout<<fib1(13)<<endl;
    cout<<fib2(13)<<endl;
    cout<<fib3(13);
    return 0;
}