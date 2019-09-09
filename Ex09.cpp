//Lam viec voi file

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile;
    outfile.open("data.fpl");
    char name[40];
    int age;
    cout<<"Nhap ten ban ei: ";
    cin.getline(name,sizeof(name));
    outfile <<name<<endl;
    cout<<"Nhap tuoi ban ei: ";
    cin>>age;
    outfile <<age<<endl;
    outfile.close();
    // ifstream infile;
    // infile.open("data.fpl");
    // char data[100];
    // infile >> data;
    // cout<<data<<endl;
    // infile >> data;
    // cout<<data<<endl;

    return 0;
}