//Ma hoa ROT13
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
int main(){
    int i;
    string code;
    string str = "ABCDEFGHIJKLM";
    string str2 = "NOPQRSTUVWXYZ";
    cout<<"Nhap doan van muon ma hoa:"<<endl;
    getline(cin, code);
    //Chuyen ve dang chu hoa
    for(i = 0;i<code.length();i++)
    {
        code[i] = toupper(code[i]);

    }

    //Ma hoa ROT13
    for(i = 0;i<code.length();i++){
        for(int j = 0;j<str.length();j++){
            if(code[i]==str[j]){
                code[i] = str2[j];
                break;
            }
            if(code[i]==str2[j]){
                code[i] = str[j];
                break;
            }
        }
        
    }
    cout<<"Ma hoa thanh cong . . ."<<endl;    
    cout<<code<<endl;
    return 0;
}