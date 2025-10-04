#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,0,1,1,1,0,1,1};
    int n = arr.size();

    // maximum consecutve ones
    int mxOne = 0;
    int count = 0;
    for(int i=0;i<n;++i){
        if(arr[i]==0){
            mxOne= max(mxOne,count);
            count = 0;
        }
        else{
            count++;
        }
    }
    
    cout<<"Maximum consecutive ones: "<<mxOne<<endl;
    return 0;
}