#include <bits/stdc++.h>
using namespace std;

void findsum(int arr[],int n,int givenSum){
    sort(arr,arr+n);
    int i=0,j=n-1;
    bool flag=true;
    while(i<j){
        if((arr[i] + arr[j]) == givenSum)
        {
            cout<<arr[i]<<" "<<arr[j]<<"     ";
            flag = false;
            i++;
            j--;
        }else if((arr[i] + arr[j]) > givenSum)
        {
            j--;
        }else{
            i++;
        }
    }
    if(flag){
        cout<<"No Such pair Exist";
    }
}


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,givenSum;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>givenSum;
        findsum(arr,n,givenSum);
        cout<<endl;
    }
}
