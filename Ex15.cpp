/*Bài 2. Class BMI có thuộc tính là chiều cao, cân nặng và chỉ số BMI. Viết các
phương thức
a. Khởi tạo các thuộc tính = 0
b. Khởi tạo các thuộc tính chiều cao, cân nặng
c. Nhập chiều cao cân nặng từ bàn phím
d. Tính Chỉ số BMI (Body Mass Index) được tính theo công thức BMI =
cân_nặng (kg)/chiều_cao(m) * chiều_cao(m)
e. Phân loại hiển thị kết quả theo thông số:
Thieu can: nhỏ hơn 18.5
Trung binh: từ 18.5 đến dưới 25
Thua can: từ 25 đến dưới 30
Beo phi: lớn hơn hoặc bằng 30 */

#include <iostream>

using namespace std;

class BMI{
    private:
        float height;
        float weight;
        float urBMI;
    public:
        BMI(){
            height = 0;
            weight = 0;
        }
        BMI(float h,float w){
            height = h;
            weight = w;
        }
        void input(){
            cout<<"Height = ";
            cin>>height;
            cout<<"Weight = ";
            cin>>weight;
        }
        void calculator(){
            urBMI = (weight)/(height*height);
        }
        void type(){
            if(urBMI<18.5){
                cout<<"Thieu can"<<endl;
            }
            else if(urBMI>=18.5 && urBMI<25)
                cout<<"Trung binh"<<endl;
            else if(urBMI>=25 && urBMI<30)
                cout<<"Thua can"<<endl;
            else if(urBMI>=30)
                cout<<"Beo phi"<<endl;
            else cout<<"Khong the xac dinh . . ."<<endl;
        }
};
int main()
{
    BMI a;
    a.input();
    a.calculator();
    a.type();
    return 0;
}