
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n=8;
  int m=5;
  int arr[n]={3, 4, 1, 9, 56, 7, 9, 12};
  int tem;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    int min=n/2;
    int c;
    for(int k=0;k+m-1<n;k++){
        c = arr[k+m-1]-arr[k];
        if(c<min){
            min = c;
        }
    }
    cout<<min<<endl;
}