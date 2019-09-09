/*
    Bài 1. Class ChuSoNguyen : có thuộc tính là 1 số nguyên, 1 mảng A[] các số có 1
chữ số, số phần tử . Viết các phương thức:
a) Khởi tạo số = 0
b) Nhập 1 số từ bàn phím
c) TachSo() : tách số đó ra thành các chữ số và lưu vào mảng A[]
d) In kết quả ra màn hình, ngăn cách nhau bởi 3 dấu cách.
Ví dụ với số 45321, in ra màn hình:
4 5 3 2 1
 */

#include <iostream>
using namespace std;

class ChuSoNguyen{
    private:
        int n;
        int arr[100];
    public:
        ChuSoNguyen(){
            n = 0;
        }
        void input(){
            cout<<"n = ";
            cin>>n;
        }
        void TachSo(){
            int i = 0;
            //Khoi tao gia tri mang = 0
            for(int i = 0;i<100;i++){
                arr[i]=0;
            }
            //Tach so
            while(n>0){
                arr[i] = n%10;
                n = n/10;
                i++;
            }
            
        }
        void output(){
            //In nguoc lai de co ket qua dung
            
            for(int i = 99;i>=0;i--){
                if(arr[i]!=0) cout<<arr[i]<<" ";
            }
        }
};

int main()
{
    ChuSoNguyen a;
    a.input();
    a.TachSo();
    a.output();
    return 0;
}