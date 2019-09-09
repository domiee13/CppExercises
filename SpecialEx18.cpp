#include <iostream>
using namespace std;

struct dathuc{
    int bac;
    double heso[100];
};
// Tim so lon nhat trong 2 so
int max2(int a,int b){
    if(a>b) return a;
    else return b;
}
//Hien thi da thuc
void output(dathuc dt){
    // cout<<"Da thuc da nhap la:"<<endl;
    for(int i =dt.bac;i>=0;i--){
        cout<<dt.heso[i]<<"x^"<<i;
        if(i!=0) cout<<"+";
        else cout<<endl;

    }
}
//Ham nhap da thuc
void input(dathuc &dt){
    cout<<"Bac cua da thuc = ";
    cin>>dt.bac;
    for(int i = 0;i<=dt.bac;i++){
        cout<<"Heso["<<i<<"] = ";
        cin>>dt.heso[i];
    }
}
//Ham tinh tong da thuc
dathuc add(dathuc dt1, dathuc dt2, dathuc kq){
    kq.bac = max(dt1.bac,dt2.bac);
    for(int i = 0;i<=kq.bac;i++){
        kq.heso[i] = dt1.heso[i] + dt2.heso[i];

    }
    return kq;
}
//Ham tinh hieu da thuc
dathuc subtraction(dathuc dt1, dathuc dt2, dathuc kq){
    kq.bac = max(dt1.bac,dt2.bac);
    for(int i = 0;i<=kq.bac;i++){
        kq.heso[i] = dt1.heso[i] - dt2.heso[i];
    }
    return kq;
}
//Ham tinh dao ham da thuc
dathuc derivative(dathuc dt,dathuc kq){
    kq.bac = dt.bac-1;
    for(int i = dt.bac;i-1>=0;i--){   
        kq.heso[i-1] = dt.heso[i]*i;
        /*
        Hoac co the viet nhu nay . . .
        for(int i = kq.bac;i>=0;i--){   
        kq.heso[i] = dt.heso[i+1]*(i+1);
         */
        //Debug thu cong nhu 1 thang ngu =)))
        // cout<<"i = "<<i<<endl;
        // cout<<"He so cua kq ="<<kq.heso[i-1]<<endl;
        // cout<<"-------------"<<endl;
        // cout<<dt.heso[i]<<endl;
    }
    // output(kq);
    return kq;
}

dathuc multiplication(dathuc d1,dathuc d2,dathuc kq){
   kq.bac = d1.bac+d2.bac;
    for(int i = d1.bac;i>=0;i--){
        for(int j = d2.bac;j>=0;j--){
            kq.heso[i+j] =kq.heso[i+j]+d1.heso[i]*d2.heso[j];
        }
    }
    return kq;
}

dathuc division(dathuc d1, dathuc d2, dathuc kq){
    // TAM NGUNG CHUC NANG CHIA 2 DA THUC
    // kq.bac = d1.bac - d2.bac;
    // cout<<kq.bac<<endl;
    // if(d1.bac<d2.bac){
    //     cout<<"Bac cua da thuc chia nho hon da thuc bi chia"<<endl;
    //     return kq;
    // }
    // else{
    //     for(int i = kq.bac;i>=0;i++){
    //         kq.heso[i] = d1.heso[d1.bac]/d2.heso[d2.bac];
    //         d1.bac--;
    //         d1 = subtraction(d1,multiplication(kq,d2,kq),d1);
    //         cout<<"kq.heso["<<i<<"] = "<<kq.heso[i]<<endl;
    //     }
    //     output(kq);
    // }
    // return kq;
}
int main(){
    dathuc dt1,dt2,kq,kq2,kq3,kq4;
    int nChoice;
    cout<<"Ban muon toi lam gi?"<<endl;
    cout<<"1.Cong 2 da thuc\n2.Tru 2 da thuc\n3.Nhan 2 da thuc\n4.Chia 2 da thuc\n5.Dao ham"<<endl;
    cout<<"Nhap lua chon cua ban:";
    cin>>nChoice;
    switch (nChoice)
    {
    case 1:
        cout<<"Nhap da thuc thu nhat"<<endl;
        input(dt1);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt1);
        cout<<"Nhap da thuc:"<<endl;
        input(dt2);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt2);
        kq = add(dt1,dt2,kq);
        cout<<"Tong 2 da thuc la: "<<endl;
        output(kq);
        break;
    case 2:
        cout<<"Nhap da thuc thu nhat"<<endl;
        input(dt1);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt1);
        cout<<"Nhap da thuc:"<<endl;
        input(dt2);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt2);
        kq2 = subtraction(dt1,dt2,kq);
        cout<<"Hieu 2 da thuc la: "<<endl;
        output(kq2);
        break;
    case 3:
        cout<<"Nhap da thuc thu nhat"<<endl;
        input(dt1);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt1);
        cout<<"Nhap da thuc thu 2:"<<endl;
        input(dt2);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt2);
        kq3 = multiplication(dt1,dt2,kq3);
        cout<<"Ket qua nhan 2 da thuc la:"<<endl;
        output(kq3);
        break;
    case 4:
        cout<<"Nhap da thuc thu nhat"<<endl;
        input(dt1);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt1);
        cout<<"Nhap da thuc thu 2:"<<endl;
        input(dt2);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt2);

        division(dt1,dt2,kq);
        break;
    case 5:
        cout<<"Nhap da thuc can dao ham:"<<endl;
        input(dt1);
        cout<<"Da thuc da nhap la:"<<endl;
        output(dt1);
        kq4 = derivative(dt1,kq);
        cout<<"Dao ham cua da thuc la:"<<endl;
        output(kq4);
        break;
    default:
        break;
    }
    return 0;
}