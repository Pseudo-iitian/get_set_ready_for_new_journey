#include<bits/stdc++.h>
using namespace std;

void rotatebyK(vector<int> &arr, int n, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}

int main(){
    // left rotate array by k places
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int k = 9;
    k = k%n; // it can be 7 also mean do not rotate , 8 means rotate by 1 or rotate by 8 both will get same array (left rotation)

    vector<int> temp(k);
    for(int i=0;i<k;++i){
       temp[i] = arr[i];
    }

    for(int i=k;i<n;++i){
        arr[i-k] = arr[i];
    }

    // brute force is to use of j variable j = 0 then j++; traversing
    // better appraoch is to calculate without the use of j variable

    // int j = 0;
    // int sz = temp.size();
    for(int i=n-k;i<n;++i){
        arr[i] = temp[i+k - n];
        // arr[i] = temp[j];
        // j++;
    }

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    

    // optimal approach is to use reverse(a,a+d), reverse(a+d, a+n), rever(a,a+n)
    // revers 0 to k, then reverse k to n, then reverse whole array
    arr = {1,2,3,4,5,6,7,8};
    n = arr.size();
    k = 3;
    rotatebyK(arr,n,k);
    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}