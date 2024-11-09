#include<iostream>
using namespace std;

class Solution{
    int n;
public:

    Solution(){

    }
    Solution(int n){
        this->n=n;
    }
    bool isPrime(int n){
        if(n==1){
            return false;
        }
        if(n==2 || n==3){
            return true;
        }
        if(n%2==0 || n%3==0){
            return false;
        }
        for(int i=5;i*i<=n;i=i+6){
            if(n%i==0 || n%(i+2)==0){
                
                cout<<"Number N :- "<<n<<" is not a Prime Number. "<<endl; 
                return false; 
            }
             
        }
        cout<<"Number N :- "<<n<<" is a Prime Number. "<<endl;
        return true;
    }
};

int main(){
    Solution s1,s2;
    s1.isPrime(6787);
    s2.isPrime(67);
}