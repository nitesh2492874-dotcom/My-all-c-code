#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
     cout<<"size="<<vec.size()<<endl;
    vec.push_back(2);
    vec.push_back(3);
    cout<<"after push back size="<<vec.size()<<endl;
    for(int val:vec){
        cout<<val<<endl;
       }
    return 0;
}