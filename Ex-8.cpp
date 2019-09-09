//Tao class hcn va class hv ke thua tu hinh chu nhat

#include <iostream>
using namespace std;

class retangle{
    private:
        int a,b;
    public:
        void input()
        {
            cout<<"a = ";
            cin>>a;
            cout<<"b = ";
            cin>>b;
        }
        void info(){
            cout<<"Chieu dai: a = "<<a<<endl;
            cout<<"Chieu rong: b = "<<b<<endl;
        }
        void chuvi(){
            cout<<"chu vi = "<<2*a+2*b<<endl;
        }
        void dientich(){
            cout<<"dien tich = "<<a*b<<endl;
        }
        int abs(int a)
        {
            if(a<0) return -a;
            else return a;
        }
        double abs(double a){
            if(a<0) return -a;
            else return a;
        }

};
class square :public retangle{
    public:
        void in4(){
            cout<<"La hinh co 4 canh bang nhau va 4 goc vuong"<<endl;
        }
};

int main()
{
    square a;
    a.input();
    a.info();
    a.dientich();
    a.chuvi();
    cout<<"Tri tuyet doi cua so thuc: "<<a.abs(-2.5)<<endl;
    cout<<"Tri tuyet doi cua so nguyen: "<<a.abs(-2)<<endl;
    return 0;
}