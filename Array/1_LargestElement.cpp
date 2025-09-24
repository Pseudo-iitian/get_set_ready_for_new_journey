#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,5,3,2,6,3};
    int n = arr.size();

    // brute force solution tc - O(nlogn)
    sort(arr.begin(),arr.end());
    cout<<"brute force, largest element: "<<arr[n-1]<<endl;

    // better solution tc - O(n)
    int mx = INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    cout<<"better approach, largest element : "<<mx<<endl;

    // optimal approach
    // binary search  tc - O(logn)

    return 0;
}