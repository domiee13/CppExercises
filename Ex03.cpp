/*
    Viet chuong trinh tinh tong cua moi hang va cot cua ma tran, neu la ma tran vuong 
    thi tinh tong duong cheo
 */

#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Nhap lan luot so hang va so cot cua ma tran: ";
    cin>>m>>n;
    int a[m][n];
    cout<<"Nhap lan luot cac phan tu cua ma tran"<<endl;
    for(int i=0;i<m;i++){
        for(int j= 0; j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Ma tran da nhap la:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum = 0;
    if(n==m){
        for(int i=0;i<m;i++){
            for(int j= 0;j<n;j++){
                if(i==j) sum = sum + a[i][j]; 
            }
        }
        cout<<"Tong duong cheo cua ma tran vuong la: "<<sum<<endl;
    }
    else{
        for(int i=0;i<m;i++){
            sum = 0;
            for(int j= 0;j<n;j++){
                sum = sum + a[i][j]; 
            }
            cout<<"Tong cua dong "<<i+1<<" la: "<<sum<<endl;
        }
        for(int j=0;j<n;j++){
            sum = 0;
            for(int i= 0;i<m;i++){
                sum = sum +a[i][j];
            }
            cout<<"Tong cua cot "<<j+1<<" la: "<<sum<<endl;
        }
    }
    return 0;
}