#include <iostream> 
using namespace std;
int main()
{
	setlocale(0, "");
	int rub;
	int years;
	cout << "Напишите сумму, которую хотите внести на сберегательный счет: ";
	cin >> rub;
	cout << "Напишите срок, на который хотите внести деньги (в годах): ";
	cin >> years;
	cout << "Через " << years << " года вы получите " << rub / 100 * 3 * years + rub << " рублей";
	return 0;
}
