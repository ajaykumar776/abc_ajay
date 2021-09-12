#include <iostream>

using namespace std;

int reverse_array(int arr[],int n);

int main()
{
    int arr[]={1,2,6,4,9};
    int n = sizeof(arr)/sizeof (arr[0]);
    reverse_array(arr,n);
    return 0;
}
int reverse_array(int arr[],int n)
{
    int i,t;
    for(i=0;i<n;i++){
        t = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i]= t;
    }
    cout<<"\n reverse of array\n"<<endl;
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}