#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,1,2,2,2,2,2,3,4,5};
    vector<int> b = {1,4,5,6,7};
    set<int> st;

    // brute force approach
    for(int i=0;i<a.size();++i) st.insert(a[i]);
    for(int i=0;i<b.size();++i) st.insert(b[i]);

    for(auto &val: st){
        cout<<val<<" ";
    }
    cout<<endl;

    // better/optimal approach
    //https://leetcode.com/problems/merge-sorted-array/description/ solve this 
    vector<int> res;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        // if(!a.empty() || !b.empty() )
        if(a[i]<=b[j]){
            if(res.empty() || res.back()!=a[i])
                res.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            if(res.empty() || res.back()!=b[j])
                res.push_back(b[j]);
            j++;
        }
        // else{
        //     if(res.empty() || res.back()!=a[i])
        //         res.push_back(b[j]);
        //     i++;j++;
        // }
    }
    
    while(i<a.size()){
        if(res.back()!=a[i])
            res.push_back(a[i]);
        i++;
    }
    
    while(j<b.size()){
        if(res.back()!=b[j])
            res.push_back(b[j]);
        j++;
    }

    for(auto &val: res){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}