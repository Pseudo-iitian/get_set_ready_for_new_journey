#include <bits/stdc++.h> // includes all standard libraries
#include <iostream>      // used for input and output (cin, cout)
#include <vector>        // used for dynamic arrays (vectors)
#include <algorithm>     // used for sorting, min, max, etc.
#include <string>        // used for string manipulation
#include <map>           // used for key-value pair containers (maps)
#include <set>           // used for unique element storage (sets)
#include <queue>         // used for queue, priority_queue (BFS, heaps)
#include <stack>         // used for stack operations (LIFO)
#include <cmath>         // used for mathematical functions (sqrt, pow, etc.)
#include <climits>       // used for INT_MAX, INT_MIN
#include <cstring>       // used for C-style string functions (memset, strcpy, etc.)
#include <iomanip>       // used for formatted output (setprecision, setw)

using namespace std;

int main() {

    ios::sync_with_stdio(false); // fast input/output
    cin.tie(nullptr);            // untie cin from cout for performance

    // your code starts here

    // brute force approach will be 
    // take each element and check its count = 1 or not 
    vector<int> arr = {1,1,2,2,3,4,4};
    int n = arr.size();
    for(int i=0;i<n;++i){
        int count = 0;
        for(int j=0;j<n;++j){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==2) continue;
        if(count==1){
            cout<<"it is coming at once and others twice: "<<arr[i]<<endl;
            break;
        }
    }

    // better approach will be use of hashing
    int mx = *max_element(arr.begin(),arr.end());
    vector<int> hashMap(mx+1);
    for(int i=0;i<n;++i){
        hashMap[arr[i]]++;
    }

    // this is not good because mx can be 1000 but array contains only 1 and 10000 so better is to go with n
    // for(int i=1;i<=mx;++i){
    //     if(hashMap[i]==1){
    //         cout<<"it appears once: "<<i<<endl;
    //         break;
    //     }
    // }

    for(int i=0;i<n;++i){
        if(hashMap[arr[i]]==1){
            cout<<"it appears once: "<<arr[i]<<endl;
            break;
        }
    }

    // using xor (optimal approach)
    int xr =0;
    for(int i=0;i<n;++i){
        xr = xr ^ arr[i];
    }
    cout<<xr<<" is coming once in this "<<endl;


    // start with 4th video
    return 0;
}
