#include<bits/stdc++.h>
using namespace std;

int main(){
    // remove duplicates in place sorted array and return unique values

    vector<int> arr = {1,1,2,2,2,2,3,3,3};
    int n = arr.size();

    // brute force is to use set
    // tc - O(nlogn + n), sp - O(n)
    set<int> st;
    for(auto &val: arr){
        st.insert(val);
    }

    int index = 0;
    for(auto &val: st){
        arr[index] = val;
        index++;
    }

    cout<<"total unique element present: "<<index<<endl;

    // better solution contians the use of two piontere approach
    arr = {1,1,1,2,2,2,3,3,4,5};
    n = arr.size();
    int i = 0;
    for(int j = 1;j<n;++j){
        if(arr[i]!=arr[j]){
            // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[i+1]<<" "<<arr[j]<<endl;
            arr[i+1] = arr[j]; 
            i++;
        }
        
    }

    // for(auto &val: arr){
    //     cout<<val<<" ";
    // }
    cout<<endl;
    cout<<"total unique element present : "<<i+1;

    return 0;
}