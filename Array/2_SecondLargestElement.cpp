#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    vector<int> arr= {1,4,43,53,3,53};
    int n = arr.size();

    //brute force approach
    // sort then find second largest ( keep in mind : number can repeat, or second largest can not be found in array)
    sort(arr.begin(),arr.end());
    int largest = arr[n-1];
    int secondLargest = INT_MIN;
    for(int i=n-2;i>=0;--i){
        if(arr[i]!=largest){
            secondLargest = arr[i];
            break;
        }
    }
    cout<<secondLargest<<endl;

    // better approach
    // find largest then find greater than current and not equal to largest tc - O(2n)
    largest = INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    secondLargest= INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>secondLargest & arr[i]!=largest){
            secondLargest= arr[i];
        }
    }
    cout<<secondLargest<<endl;

    // optimal approach
    // O(n)
    largest= arr[0];
    secondLargest= INT_MIN;
    for(int i=0;i<n;++i){
        if(arr[i]>largest){
            secondLargest= largest;
            largest= arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest= arr[i];
        }
    }
    cout<<secondLargest<<endl;

    return 0;
}