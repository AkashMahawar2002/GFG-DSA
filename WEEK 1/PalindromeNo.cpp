#include<iostream>
using namespace std;

bool isPal(int n){
     int rev=0;
     int temp=n;
     while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
     }
     return (rev==n);
}

int main(){
    cout<<isPal(8668)<<endl;
    cout<<isPal(866864);
}