#include "singly_linked_list.h" 

//Записи в линейном списке содержат ключевое поле типа
//int.Сформировать однонаправленный список.Удалить из
//него элемент с заданным номером, добавить К элементов,
//начиная с заданного номера;

int main()
{
	int n;
	std::cout << "Enter the length of the list: ";
	std::cin >> n;

	singly_linked_list l(n);

	l.print();

	int j;
	std::cout << "Enter the item number to delete: ";
	std::cin >> j;

	l.remove(j);
	l.print();
	
	int k;
	std::cout << "Enter the number of items to add: ";
	std::cin >> k;

	l.multiple_insert(j, k);
	l.print();

	return 0;
}