#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    srand(time(NULL));
    x = rand()%3+1;
    cout<<"Nhap lua chon cua ban: "<<endl;
    cout<<"1.Keo"<<endl<<"2.Bua"<<endl<<"3.Bao"<<endl;
    int c;
    cin>>c;
    switch (c)
    {
    case 1:
        /* code */
        cout<<"Ban da chon Keo"<<endl;
        break;
    case 2:
        cout<<"Ban da chon Bua"<<endl;
        break;
    case 3:
        cout<<"Ban da chon Bao"<<endl;
        break;
    default:
        cout<<"Ban da chon cai gi?"<<endl;
        break;
    }

    switch (x)
    {
    case 1:
        /* code */
        cout<<"May da chon Keo"<<endl;
        break;
    case 2:
        cout<<"May da chon Bua"<<endl;
        break;
    case 3:
        cout<<"May da chon Bao"<<endl;
        break;
    default:
        cout<<"Ban da chon cai gi?"<<endl;
        break;
    }
    //Setup luat choi
    if((c==1 && x==2) || (c==2&&x==3) || (c==3&&x==1))
    cout<<"Ban thua roi, hahahahahahaha"<<endl;
    else if(c==x)
    {
        cout<<"Ban da hoa"<<endl;
    }
    else
    {
        cout<<"Ban da thang"<<endl;
    }
    
    
    return 0;


    
}