#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();

    // brute force solution
    int temp = arr[n-1];
    for(int i=n-1;i;--i){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;


    return 0;
}