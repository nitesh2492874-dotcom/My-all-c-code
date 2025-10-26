#include<iostream>
using namespace std;
bool isarmstrong(int n){
    int copyn=n;
    int sumofcubes=0;
    while(n!=0){
        int dig=n%10;
        sumofcubes+=(dig*dig*dig);
        n=n/10;
    }
        return sumofcubes==copyn;
    }
    int main(){
        int n=122;
        if(isarmstrong(n)){
            cout<<"is an armstomg num\n";
        }
        else{
            cout<<"not a armstrong num\n";
        }
        return 0;
    }
    