#include <iostream>
using namespace std;

struct dathuc{
	int bac;
	double heso[100];
};

int max2(int a,int b){
    if(a>b) return a;
    else return b;
}
void hienthi(dathuc dt){
	for(int i =0;i<=dt.bac;i++){
		cout<<dt.heso[i]<<"\t";
	}
	cout<<endl;
}
dathuc nhap(dathuc &dt){
	cout<<"bac = ";
	cin>>dt.bac;
	//dt.heso = new double[dt.bac+1];
	for(int i=0;i<=dt.bac;i++){
		cout<<"heso["<<i<<"] = ";
		cin>>dt.heso[i];
	}
	return dt;
}
dathuc tong(dathuc dt1, dathuc dt2,dathuc kq){
    kq.bac = dt1.bac;
	for(int i =0;i<=dt1.bac;i++){
		 kq.heso[i] = dt1.heso[i]+dt2.heso[i];

		}
		return kq;
}


 int main()
{
	dathuc dt1,dt2,kq;
	nhap(dt1);
	hienthi(dt1);
	nhap(dt2);
	hienthi(dt2);
	dathuc res = tong(dt1,dt2,kq);
	hienthi(res);
	return 0;
}