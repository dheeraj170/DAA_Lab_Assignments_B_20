#include <bits/stdc++.h>
using namespace std;

void freq(char arr[],int n){
    int x[26] = {0};
    char ch;
    for(int i=0;i<n;i++){
        x[arr[i] - 'a']++;
    }
    int mx =0;
    for(int i=0;i<26;i++){
        if(mx < x[i]){
            mx=x[i];
            ch = i+'a';
        }
    }
    if(mx > 1){
        cout<<ch<<" "<<mx;
    }
    else{
        cout<<"No Duplicates Present";
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        freq(arr,n);
        cout<<endl;
    }
    return 0;
}
