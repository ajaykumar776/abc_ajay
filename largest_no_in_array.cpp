#include <iostream>

using namespace std;

int max_no(int ar[] ,int n);
int main(){
    int n=5;
    int arr[n];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = max_no(arr , n);
    cout<<"max no is "<<max<<endl;
}
int max_no(int ar[] ,int n){
    int max = ar[0];   
    for(int i=0;i<n;i++)
    {
        if(max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}