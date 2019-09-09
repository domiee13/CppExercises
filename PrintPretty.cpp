#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    cout << hex << left << showbase << nouppercase<<endl; // formatting
    cout << (long long) n << endl; // actual printed part   
    // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part 
    return 0;
}