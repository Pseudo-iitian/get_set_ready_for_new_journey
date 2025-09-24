#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    vector<int> arr= {1,4,43,53,3,53};
    int n = arr.size();

    // optimal appraoch - tc - O(n)
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for(int i=1;i<n;++i){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest= arr[i];
        }
    }

    cout<<secondSmallest<<endl;

    return 0;
}