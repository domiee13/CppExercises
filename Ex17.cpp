#include <iostream>
using namespace std;

void phantich(int &n){
 
    for(int i=2;i<=n;i++){
        int dem=0;
        while(n%i==0){
            dem++;
            n = n/i;
        }
        if(dem!=0)
        {
            if(dem>1) cout<<i<<"^"<<dem;
            else cout<<i;
            cout<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    phantich(n);
    return 0;
}