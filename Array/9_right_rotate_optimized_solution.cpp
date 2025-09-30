#include<bits/stdc++.h>
using namespace std;

void rightRotateByKPlaces(vector<int> &arr, int k){
    int n = arr.size();
    reverse(arr.begin()+(n-k),arr.end());
    reverse(arr.begin(),arr.begin()+(n-k));
    reverse(arr.begin(),arr.end());
}

int main(){

    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 1;
    k= k%n;

    rightRotateByKPlaces(arr,k);
    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}