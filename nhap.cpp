#include <iostream>
#include <string.h>
using namespace std;

// string timeConversion(string &s){
//     int h1 = int(s[1])-'0';
//     int h2 = int(s[2]) - '0';
//     int hh = h2*10 + h1%10;
//     if(s[8]=='A'){
//         if(hh==12){
//             s[0] = '0';
//             s[1] = '0';
//         }
//     }
//     else if(s[8]=='P') {
//     hh = hh +12;
//     s[1] = hh%10 +48;
//     s[0] = hh/10 + 48;
//     }
//     return s;
// }

int main(){
    string s="07:56:21PM";
    int h1 = int(s[1])-'0';
    int h2 = int(s[0]) - '0';
    int hh = h2*10 + h1;
    cout<<hh<<endl;
    cout<<"int s2 = "<<int(s[0])<<endl;
    if(s[8]=='A'){
        if(hh==12){
            s[0] = '0';
            s[1] = '0';
        }
    }
    else if(s[8]=='P') {
    hh = hh +12;
    cout<<hh<<endl;
    cout<<s[1]<<endl;
    s[1] = hh%10 +48;
    cout<<s[0]<<endl;
    s[0] = hh/10 + 48;
    cout<<hh%10<<endl;
    cout<<hh<<endl;
    cout<<hh/10<<endl;

    }
    for(int i = 0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}