#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int comp=0,swap=0;
    int temp,i,j;
    for(i=0;i<n-1;i++){
        int min_idx=i;
        for(j=i+1;j<n;j++){
            comp++;
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap++;
        temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl<<"Comparisions: "<<comp;
    cout<<endl<<"Swaps: "<<swap;

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
        selectionSort(arr,n);
        cout<<endl;
    }
    return 0;
}
