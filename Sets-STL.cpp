#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n;
    cin>>n;
    int type,query;
    for(int i = 0;i<n;++i){
        cin>>type>>query;
        switch (type){
            case 1 :
            {
                s.insert(query);
                break;
            }
            case 2:
            {
                s.erase(query);
                break;
            }
            case 3:
            {
                set<int>::iterator it = s.find(query);
                if(it!=s.end()){
                    cout<<"Yes "<<endl;
                }
                else cout<<"No "<<endl;
            }
        }
    }
    return 0;
}



