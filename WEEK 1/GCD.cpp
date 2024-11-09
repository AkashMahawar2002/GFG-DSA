// Greatest Common Divisor

#include<iostream>
using namespace std;

int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}//naive approach

int gcd2(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//more optimise approach
int gcd3(int a, int b){
    if(b==0){
        return a;
    }
    else 
    return gcd(b, a%b);
}

int main(){
    cout<<gcd(34,92)<<endl;
    cout<<gcd2(7,13)<<endl;
    cout<<gcd2(4,6)<<endl;
    cout<<gcd3(12,15);

}