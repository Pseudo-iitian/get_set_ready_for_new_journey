#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,1,2,2,2,2,2,3,4,5};
    vector<int> b = {1,2,2,2,4,5,6,7};
    // intersection of two sorted array 
    // brute force appraoch
    // tc O(n1* n2)
    // sc = O(n2)
    vector<int> visB(b.size());
    vector<int> intersectedElement;
    for(int i=0;i<a.size();++i){
        for(int j=0;j<b.size();++j){
            if(a[i]==b[j] && visB[j]==0){
                intersectedElement.push_back(a[i]);
                visB[j]=1;
            }
            if(a[i]<b[j]){
                break;
            }
        }

    }

    for(auto &val: intersectedElement){
        cout<<val<<" ";
    }
    cout<<endl;

    // optimal approach 
    // two pointer concept

    vector<int> res;
    int  i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            res.push_back(a[i]);
            i++;j++;
        }
    }

    for(auto &val: res){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}