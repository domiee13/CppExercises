//Ve tam giac Pascal

#include <iostream>
using namespace std;

int C(int k, int n){
    if((k==n) || (k==0)) return 1;
    if(k==1) return n;
    return C(k-1,n-1) + C(k,n-1);

}
int main()
{
    int n;
    cout<<"Nhap so dong: n = ";
    cin>>n;
    cout<<"Co cai tam giac Pascal de the ma khong lam duoc"<<endl<<"Nhin tao nay:"<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<C(j,i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}