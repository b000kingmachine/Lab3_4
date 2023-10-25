
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;
    int sum = 0;
    int count = 0;


    while (true) {
        cout << "Введите число: ";
        cin >> number;

        if (number == 0) {
            cout << "Количество чисел: " << count << endl;
            cout << "Общая сумма чисел: " << sum << endl;
            cout << "Среднее арифметическое: " << sum / count << endl;
            break;
        }


        count++;

        sum += number;
    }

    return 0;
}