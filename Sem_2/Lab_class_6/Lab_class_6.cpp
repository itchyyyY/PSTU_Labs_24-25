#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	Vector temp(5, -1);
	cout << temp;
	cin >> temp;
	cout << temp;
	Iterator it = &(temp[4]);
	it = it - 4;
	cout << *it;
	return 0;
}

//4 вариант
// ласс - контейнер ¬≈ “ќ– с элементами типа int.
//–еализовать операции :
//[] Ц доступа по индексу;
//() Ц определение размера вектора;
//*число Ц умножает все элементы вектора на число;
//-n Ц переход влево к элементу с номером n(с помощью класса - итератора).