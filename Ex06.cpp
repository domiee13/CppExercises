//Xac dinh 1 nam thuoc the ki nao ?
#include <iostream>
#include <stdio.h>
using namespace std;

int centuryFromYear(int year) {
    int a = 0;
    a = year/100;
    if(year%100 == 0) return a;
    return a + 1;
    
}
int main()
{
    string a = "123456789";
    cout<<a.length()<<endl;
    int year;
    cout<<"year = ";
    cin>>year;
    cout<<year<<" thuoc the ki "<<centuryFromYear(year)<<endl;
    return 0;
}