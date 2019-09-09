// #include <iostream>
// using namespace std;

// int main()
// {
//     string a = "A di da phat";
//     int n;
//     cout<<"n = ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<a<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
 
int main(){
	string a;
	int n;
    int i = 0;
    cout<<"Than chu? ";
	getline(cin, a);
    cout<<"So lan?";
	cin >> n;
	while(i<n){
		cout << a << endl;
        i++;
	}
	return 0;
}
