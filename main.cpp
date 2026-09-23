// Lab_02.cpp
// < Балинська Каріна >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double Pi = 4 * atan(1.0); // число π

    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "a = ";
    cin >> a;
    
    z1 = 2 * pow(sin(3 * Pi - 2 * a), 2) *
         pow(cos(5 * Pi + 2 * a), 2);

    z2 = 1.0 / 4.0 -
         1.0 / 4.0 * sin((5.0 / 2.0) * Pi - 8 * a);

    cout << endl;
    cout << "z1 = " << z1 << endl; // зміна 1
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;

}