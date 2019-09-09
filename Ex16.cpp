/*Bài 3. Class UCBC có thuộc tính là 2 số integer. Viết các phương thức:
a. khởi tạo 2 số = 0
b. khởi tạo 2 số
c. nhập 2 số
d. Tìm UCLN
e. Tìm BCNN */

#include <iostream>

using namespace std;
class UCBC{
    private:
        int a,b;
    public:
        UCBC(){
            a =0;
            b = 0;
        }
        UCBC(int x,int y){
            a = x;
            b = y;
        }
        void input(){
            cout<<"a = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;
        }
        int UCLN(){
            int num1 = a;
            int num2 = b;
            while(num1!=num2){
                if(num1>num2) num1=num1-num2;
                else num2 = num2-num1;
            }
            return num1;
        }
        int BCNN(){
            return (a*b)/(UCLN());
        }
        void info(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }

};
int main()
{
    UCBC x(6,9);
    cout<<"UCLN = "<<x.UCLN()<<endl;
    cout<<"BCNN = "<<x.BCNN()<<endl;
    x.info();
    return 0;
}