#include<iostream>
using namespace std;

int fact1(int n){
    int res=1;
    for(int i=2;i<=n;i++){
        res=res*i;
    }
    return res;
}

int fact2(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact2(n-1);
}

int countzeros1(int n){
    int facta=1;
    for(int i=2;i<=n;i++){
        facta=facta*i;
    }
    int res=0;
    while(facta%10==0){
        res++;
        facta=facta/10;
    }
    return res;
    
}// less efficient for longer digits

int countzeros2(int n){
    int facta=0;
    for(int i=5;i<=n;i=i*5){
        facta=facta+(n/i);
    }
    return facta;
    
}



int main(){
    cout<<fact1(5)<<endl;
    cout<<fact2(5)<<endl;
    cout<<countzeros1(10)<<endl;
    cout<<countzeros2(100);
}