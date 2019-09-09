/*
    Nhap ma tran 5x5, cac phan tu duong cheo bang 0, tren duong cheo
    bang 1, duoi duong cheo bang -1
 */

#include <iostream>
using namespace std;
#define max 100
// void inputArr(int a[max][max], int m, int n)
// {
//     for(int i = 0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(m==n) a[i][j] = 0;
//             else if (m>n)
//             {
//                 /* code */
//                 a[i][j] = -1;

//             }
//             else a[i][j] = 1;
            
//         }
//     }
// }
// void outputArr(int a[max][max], int m, int n){
//     for(int i = 0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
int main()
{
    int m,n;
    cout<<"Nhap lan luot so hang va cot cua ma tran:"<<endl;
    cin>>m>>n;
    int a[m][n];
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j) a[i][j] = 0;
            else if (i>j)
            {
                /* code */
                a[i][j] = -1;

            }
            else a[i][j] = 1;
            
        }
    }
    cout<<"Ma tran da nhap la: "<<endl;
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}