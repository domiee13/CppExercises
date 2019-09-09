/*
    Input: nhập a biểu thị số lượng dãy. 
Các dòng tiếp theo, đầu mỗi dòng nhập số lượng phần tử của dãy.
Output: In ra màn hình các dãy vừa nhập 
Ví dụ : 
Input

2

3 1 5 2

5 9 1 5 7 10

Output
1 5 2

9 1 5 7 10
 */
#include <iostream>
using namespace std;
int mang[1000][1000];

int main()
{
    int a;
    cout<<"a = ";
    cin>>a;
    int x[a];
    for(int i =0;i<a;i++){
        cin>>x[i];
        for(int j = 0;j<x[i];j++){
            cin>>mang[i][j];
        }
    }

    cout<<"output:"<<endl;
    for(int i =0;i<a;i++)
    {
        for(int j=0;j<x[i];j++)
        cout<<mang[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
