#include <iostream>
#include <string>
#include <ctime>
#include <clocale>

using namespace std;

int collisions = 0;

struct Person
{
	string name;
	string phone;
	string date;

	Person()
	{
		name = "NULL";
		phone = "NULL";
		date = "NULL";
	}
};

struct hashTable
{
	Person* arr;

	hashTable(int size) { arr = new Person[size]; }
	~hashTable() { delete[] arr; }

	void insert(Person p, int size);
	Person pop(string date, int size);
	void search(string date, int size);
};

int hash(string str, int size)
{
	double f = 0.1337 * stoi(str.substr(0, 2)) + stoi(str.substr(3, 2)) + stoi(str.substr(6, 4)); 
	double g = (f - int(f)) * size; 
	return int(g);
}

void hashTable::insert(Person p, int size)
{
	int idx = ::hash(p.date, size);
	int hash = idx;

	if (arr[idx].name == "NULL")
	{
		arr[idx] = p;
		return;
	}

	while (idx < size)
	{
		if (arr[idx].name == "NULL")
		{
			arr[idx] = p;
			return;
		}

		++idx;
		++collisions;
	}

	if (idx >= size)
	{
		idx = 0;
		++collisions;

		while (idx < size)
		{
			if (arr[idx].name == "NULL")
			{
				arr[idx] = p;
				return;
			}

			++idx;
			++collisions;
		}
	}
}

Person hashTable::pop(string date, int size)
{
	int idx = ::hash(date, size);
	int hash = idx;

	if (arr[idx].date == date)
	{
		Person tmp = arr[idx];
		arr[idx] = Person();
		return tmp;
	}

	while (idx < size)
	{
		if (arr[idx].date == date)
		{
			Person tmp = arr[idx];
			arr[idx] = Person();
			return tmp;
		}

		++idx;
	}

	if (idx >= size)
	{
		idx = 0;

		while (idx < size)
		{
			if (arr[idx].date == date)
			{
				Person tmp = arr[idx];
				arr[idx] = Person();
				return tmp;
			}

			++idx;
		}
	}
}

void hashTable::search(string date, int size)
{
	int idx = ::hash(date, size); 
	int hash = idx; 
	while (arr[idx].date != date && idx < size) { idx++; }
	if (idx < size) 
	{
		cout << "Человек с датой рождения " << date << " найден по индексу " << idx << endl; 
		return; 
	} 
	idx = 0; 
	while (arr[idx].date != date && idx < hash) { idx++; } 
	if (idx < hash) 
	{ 
		cout << "Человек с датой рождения " << date << " найден по индексу " << idx << endl; 
		return; 
	} 
	cout << "Человек с датой рождения " << date << " не найден" << endl; 
	return;
}

void displayPerson(Person p)
{
	cout << "=========================" << endl;
	cout << "ФИО: " << p.name << endl; 
	cout << "Телефон: " << p.phone << endl; 
	cout << "Дата рождения: " << p.date << endl;
	cout << "=========================" << endl;
}

void displayHashTable(hashTable* table, int size)
{
	for (int i = 0; i < size; ++i)
	{
		displayPerson(table->arr[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	hashTable table(5);

	Person p;
	p.name = "Danil";
	p.phone = "666";
	p.date = "10.02.2006";

	table.insert(p, 5);

	cout << "#1" << endl;
	displayHashTable(&table, 5);

	cout << "#2" << endl;
	displayPerson(table.pop("10.02.2006", 5));

	cout << "#3" << endl;
	displayHashTable(&table, 5);

	return 0;
}