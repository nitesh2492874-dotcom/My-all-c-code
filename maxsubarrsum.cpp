#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int maxsum=INT_MIN;
    for(int st=0; st<n; st++){
        int currsum=0;
        for(int end=st; end<n; end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
        }
    }
    cout<<"max sum is ="<<maxsum<<endl;
    return 0;
}