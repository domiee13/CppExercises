/*
    Kiem tra so doi xung
    Cach 1: tim so dao nguoc roi so sanh
 */

#include <iostream>
using namespace std;

int main()
{
    long n;
    long sum = 0;
    long tmp,r;
    cout<<"n = ";
    cin>>n;
    for(tmp = n;n!=0;n = n/10){ //Hoac n /= 10
        r = n %10;
        sum = sum*10+r;
    }
    if(tmp==sum) cout<<tmp<<" La so doi xung"<<endl;
    else cout<<tmp<<" Khong phai so doi xung"<<endl;
    return 0;
}