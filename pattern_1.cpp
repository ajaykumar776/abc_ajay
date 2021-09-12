#include <iostream>
using namespace std;

int main() {
    int n;
     cout<<"enter value of n\n";
     cin>>n;
	// int a[n];

    cout<<"enter  elements:\n";
    for(int i=1;i<n;i++) {
        for(int j=1;j>=i;j++) {
        cout<<j<<"\n";
        }
    }
    
	return 0;
}