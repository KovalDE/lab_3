// Lab_03_4.cpp
// < Коваля Дмитра >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x;
    double y; 
    double R1; // БІЛЬШЕ ЧИСЛО
    double R2; // МЕНШЕ ЧИСЛО
    bool t = false;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    
    if( (x * x + y * y) >= R2 * R2 && (x * x + y * y) <= R1 * R1) 
    {
        t = true;
    }
    else 
    {
        t = false;
    }
    if (t == true && x <= 0 && y <= 0) 
    {
        cout << "yes" << endl;
    }
    if (t == true && x >= 0 && y >= 0)
    {
        cout << "yes" << endl;
    }
    else 
    {
        cout << "no" << endl;
    }
    cin.get();
    return 0;
}



