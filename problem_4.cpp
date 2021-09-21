#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int a0,a1,a2;
    a0 = a % 10;
    a1 = a / 10 % 10;   
    a2 = a / 100;
    cout << a0*a1*a2; 
}