#include<iostream>
using namespace std;
int main() {
    int numbers[3]={2,9,5};
    int sum=0;
    int m=1;
    for(int i=0; i<3; i++){
        m*=numbers[i];
        sum+=numbers[i];
        }
        cout<<"sum="<<sum<<endl;
        cout<<"multi="<<m<<endl;
        return 0;
}