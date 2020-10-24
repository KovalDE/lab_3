// Lab_03_1.cpp
// < Коваль Дмитро >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double y; 
    double A; 
    double B;
    cout << "x = "; cin >> x;
    A = fabs((4 * x) - 1);
    // спосіб 1: розгалуження в скороченій формі
    if (x < 0)
        B = ((x * x * x * x * x * x * x) - (2 * x));
    if (0 <= x && x < 3)
        B = atan((exp(x) + 1) / 8);
    if (x >= 3)
        B = (x * x * x * x) + exp((x * x) + 3);
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;


    // спосіб 2: розгалуження в повній формі
    if (x < 0)
        B = ((x * x * x * x * x * x * x) - (2 * x));
    else
        if (0 <= x && x < 3)
            B = atan((exp(x) + 1) / 8);
        else
            B = (x * x * x * x) + exp((x * x) + 3);    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;

}