#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void swap(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void reverse(int a[], int n){
    for(int i = 0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
}
int main()
{
    int n;
    cout<<"size = ";
    cin>>n;
    int a[n];
    srand(time(NULL));
    for(int i = 0;i<n;i++){
        a[i] = rand()%(10+1-0)+0;
    }

    cout<<"Mang da nhap la: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(a,n);
    cout<<"Mang da dao nguoc la:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int c=5;
    int b =10;
    // swap(c,b);
    // cout<<c<<" "<<b<<endl;
    cout<<endl;
    return 0;
}