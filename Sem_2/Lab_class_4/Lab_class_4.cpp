#include <iostream>
#include "Person.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Person p("Danil", 19);

	cout << "Person:" << endl;
	cout << p.getName() << endl;
	cout << p.getAge() << endl;

	Teacher t("Yarrulin Denis Vladimirovich", "infa", 20, 25);

	cout << "Teacher:" << endl;
	cout << t.getName() << endl;
	cout << t.getSubject() << endl;
	cout << t.getHours() << endl;
	cout << t.getAge() << endl;

	return 0;
}