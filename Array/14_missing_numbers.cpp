#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,5};
    int N = 5;
    // element present from 1 to 5 but one num is missing , find which ?? 
    int flag = 1;
    for(int i=1;i<=N;++i){
        flag = 0;
        for(int j=0;j<arr.size();++j){
            if(arr[j]==i){
                flag = 1;break;
            }
        }
        if(flag==0){
            cout<<i<<" is not present"<<endl;
            break;
        }
    }

    if(flag==1){
        cout<<"every element is present"<<endl;
    }

    // better solution using hashing
    vector<int> hashmap(N+1);
    for(int i=0;i<arr.size();++i){
        hashmap[arr[i]] = 1;
    }

    for(int i = 1;i<=N;++i){
        if(hashmap[i]==0){
            cout<<i<<" is missing number"<<endl;
            break;
        }
    }
    
    return 0;
}