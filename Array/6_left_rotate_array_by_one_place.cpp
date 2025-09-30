#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int temp = arr[0];
    int n = arr.size();

    for(int i=1;i<n;++i){
        arr[i-1] = arr[i];
    }

    arr[n-1]= temp;
    for(auto & val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    
    return 0;
}