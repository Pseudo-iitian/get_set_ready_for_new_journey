#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,0,2,0,2};
    int n = arr.size();

    // bruteforce 
    vector<int> temp;
    for(auto &val:arr){
        if(val!=0){
            temp.emplace_back(val);
        }
    }

    for(int i=0;i<temp.size();++i){
        arr[i] = temp[i];
    }

    for(int i=temp.size(); i<n;++i)
        arr[i] = 0;

    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;


    // optimal aproach will be here 
    // using of two pointer concept

    arr = {1,2,0,0,2};
    n = arr.size();
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]!=0){
            i++;
        }
        else{
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }

    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    arr = {1,2,0,0,2};
    n = arr.size();
    // second approach for optimal solution is 
    // find 0 index first of all
    j = -1;
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            j = i;
            break;
        }
    }

    for(int i=j+1;i<n;++i){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(auto &val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}