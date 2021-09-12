#include <iostream>

using namespace std;

int peak_index(int arr[],int n);
int main(){
    int n = 5;
    int arr[] ={1,5,10,6,2};
    int c = peak_index(arr,n);
    cout<<"index of peak elemet "<<c<< endl;
}
int peak_index(int arr[],int n){
    int max = arr[0];
    int index;
    for(int i=0;i<n;i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
        
    }
     cout<<" peak elemet is  "<<max<< endl;

    return index;
}
