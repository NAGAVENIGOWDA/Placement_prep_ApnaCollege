#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
int n,m; 
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
int temp;
for(int i=0;i<n;i++){
    
    for(int j=i;j<m;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
}
 
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j];
    }
    cout<<"\n";
}
 
 
 
return 0 ;
}