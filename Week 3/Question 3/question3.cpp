#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int curr,i,j;
    for(i=1;i<n;i++){
        curr=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

bool checkDuplicate(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
            return true;
    }
    return false;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertionSort(arr,n);
        if(checkDuplicate(arr,n)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
