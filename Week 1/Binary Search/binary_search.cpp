#include <bits/stdc++.h>
using namespace std;


bool binarySearch(vector<int> arr,int k,int &pos){
    int low=0,high=arr.size()-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==k){
            pos=mid+1;
            return true;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else{
            high=mid+1;
        }
    }
    return false;
}

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,k,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        int pos=0;
        cin>>k;
        if(binarySearch(arr,k,pos)){
            cout<<"Element Present at position: "<<pos;
        }
        else{
            cout<<"Element Not present";
        }
        cout<<endl;
    }
    return 0;
}
