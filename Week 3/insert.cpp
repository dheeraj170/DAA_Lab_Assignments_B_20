#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int comp=0,shift=0,i,j;
    int temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        comp++;
        while(j>=0 && arr[j]>temp){
            comp++;
            shift++;
            arr[j+1]=arr[j];
            j--;
        }
        if(j==-1)
            comp--;
        if(arr[j+1]!=temp){
            shift++;
            arr[j+1]=temp;
        }

    }  
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl<<"Comparisions: "<<comp;
    cout<<endl<<"Shifts: "<<shift;
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
        cout<<endl;
    }
    return 0;
}
