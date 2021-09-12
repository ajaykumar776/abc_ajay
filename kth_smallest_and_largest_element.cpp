#include <iostream>
using namespace std;

int kth_element_smallest(int arr[],int n ,int k);
int main() {
    int n = 5;
    int k=2;
    int arr[] ={1,2,3,4,5};
    kth_element_smallest(arr,n,k);
	return 0;
}
int kth_element_smallest(int arr[],int n,int k){
    int tem,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    cout <<"smallest element "<<endl;
    cout<< arr[k+1]<<endl;
}