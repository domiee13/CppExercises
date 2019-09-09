/*
    Kiem tra so doi xung
    Cach 2: Coi so do la 1 chuoi ky tu
 */

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int res;
    cout<<"n = ";
    getline(cin,str);
    for(int i = 0;i<str.length();i++){
        if(str[i]!=str[str.length()-i-1]){
            res = 0;
            break;
        }
        else res = 1;
    }
    if(res) cout<<str<<" la so doi xung"<<endl;
    else cout<<str<<" khong la so doi xung"<<endl;
    return 0;
}