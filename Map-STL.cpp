#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    map<string,int> m;
    int type,val;
    string name;
    for(int i = 0;i<n;i++){
        cin>>type>>name;
        // getline(cin,name);
        switch (type){
            case 1:
            {
                cin>>val;
                m[name] += val;
                break;
            }
            case 2:
            {
                m.erase(name);
                break;
            }
            case 3:
            {
                map<string,int>::iterator v = m.find(name);
                if(v!=m.end()){
                    cout<<m[name]<<endl;
                }
                else cout<<0<<endl;
                break;
            }
        }
    }
    return 0;
}



