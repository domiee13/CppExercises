//Convert Hex to Decimall

#include <iostream>
using namespace std;
int main(){
    int n;
    char res[100];
    cout<<"Enter the number: n = ";
    cin>>n;
    int r;
    int i = 0;
    while(n>0){
        r=n%16;
        // switch(r){
        //     case 1:
        //         res[i] = '1';
        //         break;
        //     case 2:
        //         res[i] = '2';
        //         break;
        //     case 3:
        //         res[i] = '3';
        //         break;
        //     case 4:
        //         res[i] = '4';
        //         break;
        //     case 5:
        //         res[i] = '5';
        //         break;
        //     case 6:
        //         res[i] = '6';
        //         break;
        //     case 7:
        //         res[i] = '7';
        //         break;
        //     case 8:
        //         res[i] = '8';
        //         break;
        //     case 9:
        //         res[i] = '9';
        //         break;
        //     case 10:
        //         res[i] = '10';
        //         break;
        //     case 0:
        //         res[i] = '0';
        //         break;
        //     default:
        //         break;
        // };
        if(r<=9) res[i] = r+48;//Trong bang ma ASCII
        else if(r==10) res[i] = 'A';
        else if(r==11) res[i] = 'B'; 
        else if(r==12) res[i] = 'C'; 
        else if(r==13) res[i] = 'D'; 
        else if(r==14) res[i] = 'E'; 
        else res[i] = 'F'; 
        n = n/16;
        i++;
    }
    cout<<"0x";
    for(int j = i-1;j>=0;j--){
        cout<<res[j];
    }
    cout<<endl;
    return 0;
}