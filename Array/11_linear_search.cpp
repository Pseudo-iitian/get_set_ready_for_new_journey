#include<bits/stdc++.h>
using namespace std;

int present(vector<int> arr,int k){
    auto it = find(arr.begin(),arr.end(),k);
    if(it!=arr.end()){
        // present
        return distance(arr.begin(),it);
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 2;
    // linear search 
    cout<<k<<" is present at "<<present(arr,k)<<" index.";
    return 0;
}