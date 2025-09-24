#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> arr){
    int n = arr.size();
    for(int i=1;i<n;++i){
        if(arr[i]>arr[i-1]) return false;
    }
    return true;
}

int main(){
    int n;
    vector<int> arr = {1,2,1,23,4,23};
    int flag = 1;
    if(is_sorted(arr)){
        cout<<"sorted already"<<endl;
    }else {
        cout<<"not sorted"<<endl;
    }



    return 0;
}