// Вычислить величину e с регулируемой точностью.

#include <iostream>
#include <iomanip>
using namespace std;

int fact(int n, int acc = 1)
{
    if (n == 0) { return acc; }
    else { return fact(n - 1, n * acc); }
}

double exp(int n, double e = 1.0)
{
    if (n == 0) { return e; }
    else { return exp(n - 1, e + (1.0 / fact(n))); }
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int n;

    cout << "Введите точность: ";
    cin >> n;

    if (n >= 0)
    {
        cout.precision(n);
        cout << exp(n) << endl;
    }
    else { cout << "Некорректное n !" << endl; }

    return 0;
}