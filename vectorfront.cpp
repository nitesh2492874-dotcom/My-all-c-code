#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);
    cout<<" size="<<vec.size()<<endl;
 
vec.pop_back();
cout<<vec.front()<<endl;
    
    return 0;
}