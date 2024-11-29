#include <iostream>
using namespace std;

int main()
{
    int op;
    float a, b;

    cin >> op >> a >> b; // 1 +, 2 -, 3 *, 4 /

    switch (op)
    {
    case 1: cout << a + b; break;
    case 2: cout << a - b; break;
    case 3: cout << a * b; break;
    case 4: 
    {
        if (b == 0)
        {
            cout << "Делить на ноль нельзя !";
        }
        else
        {
            cout << a / b;
        }
    }
    default: cout << "Неверная операция !";
    }

    return 0;
}