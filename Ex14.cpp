//Tach so thanh chu so . . .
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int a[100];
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    int i = 0;
    while(n>0){
        a[i] = n%10;
        n = n/10;
        i++;
    }
    for(i=99;i>=0;i--){
        if(a[i]!=0) cout<<a[i]<<" ";
    }
}