#include <bits/stdc++.h>
using namespace std;


bool binarySearch(vector<int> arr,int k,int l,int h,int &pos){
    int low=l,high=h,mid;
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
bool exponentialSearch(vector<int> arr,int k,int &pos)
{
    int n=arr.size();
    if(arr[0]==k){
        pos++;
        return true;
    }
    int i=1;
    while(i<n && arr[i]<=k){
        pos++;
        i=i*2;
    }
    int x=min(i,n-1);
    return binarySearch(arr,k,i/2,x,pos);

}

int main(){
    

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,k,x;
    cin>>t;
    while(t>0){
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>x;
            arr[i]=x;
        }
        int pos=0;
        cin>>k;
        if(exponentialSearch(arr,k,pos)){
            cout<<"Element Present at position: "<<pos;
        }
        else{
            cout<<"Element Not present";
        }
        cout<<endl;
        t--;
    }
    return 0;
}
