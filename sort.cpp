#include <iostream>

using namespace std;

int accending(int arr[],int n);
int main(){
    int n = 10;
    int arr[]={1,9,8,7,6,5,4,3,2,10};
    accending(arr,n);
}

int accending(int arr[],int n){
    int i,j,tem;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){

            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }

    }
    cout<<"\n Sorting in accending order\n"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}