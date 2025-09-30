#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 4;
    k= k%n;

    // brute force approach 
    // tc - O(n)
    vector<int> temp(k);
    for(int i=n-k;i<n;++i){
        temp[i-n+k] = arr[i];
    }

    for(int i=n-1;i>=k;--i){
        arr[i] = arr[i-k];
    }
    
    for(int i=0;i<k;++i){
        arr[i] = temp[i];
    }

    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}