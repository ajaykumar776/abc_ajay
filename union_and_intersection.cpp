#include <iostream>

using namespace std;

int union_array(int arr1[] ,int arr2[],int n1,int n2);
int intersection_array(int arr1[] ,int arr2[],int n1,int n2);
int main(){
    int n1 = 5;
    int n2 = 5;
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={6,7,8,9,10};
    union_array(arr1,arr2,n1,n2);
}
int union_array(int arr1[] ,int arr2[],int n1 ,int n2){
    int arr3[n1+n2];
    for(int i=0;i<n1 + n2;i++)
    {
        if(i<n1){
            arr3[i] = arr1[i];
        }else
        {
            arr3[i] = arr2[i-n1];
        }   
    }
    for(int i=0;i<n1+n2;i++){
        cout<<"union element are "<<arr3[i]<<endl;
    }
    return 0;
}
