//Chuyen thap phan sang nhi phan

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    cout<<"n = ";
    cin>>n;
    int arr[1000];
    // for(i=0;i<1000;i++){
    //     arr[i] =0;
    // }
    while(n>0){
        arr[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j = i-1;j>=0;j--){
        cout<<arr[j];
    }
    cout<<endl;
    return 0;
}