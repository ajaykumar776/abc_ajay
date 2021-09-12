#include <iostream>

using namespace std;

int max_no(int ar1[] ,int arr2[], int arr3[], int n);
int main(){
    int n = 5;
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={6,7,8,9,10};
    int arr3[] ={11,12,13,14,15};

    max_no(arr1,arr2,arr3,n);
    
}
int max_no(int arr1[] ,int arr2[], int arr3[], int n){
    int max1 = arr1[0];
    int max2 = arr2[0];
    int max3 = arr3[0];
    for(int i=0;i<n;i++){
        if(max1<arr1[i])
        max1= arr1[i];
        if(max2<arr2[i])
        max2=arr2[i];
        if(max3<arr3[i])
        max3=arr3[i];
    }
    cout<<"three max no is : "<<max1<< " " << max2 << " "<<max3<<endl;
    int newarr[3];
    for(int i=0;i<3;i++){
        if(i==0){
            newarr[i] = max1;
        }
        if(i==1){
            newarr[i] = max2;
        }
        if(i==2){
            newarr[i] = max3;
        }
    }
    int new_max = newarr[0];
    int sum = 0;
    for(int i=0;i<3;i++){
        sum = sum+newarr[i];
        if(new_max < newarr[i])
        {
            new_max = newarr[i];
        }
    }
       cout<<"max no with newarrr "<<new_max<< "\nsum " <<sum<<endl;
    return 0;
}