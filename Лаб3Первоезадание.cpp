

#include <iostream>
using namespace std;
int main()
{
    int choice;
    setlocale(LC_ALL, "RU");
    cout << "Вы зашли в программу перевода старинных русских мер длины" << endl;
    cout << "Выберите что во что перевести " << endl;
    cout << "Перевод из \n 1. саженей в метры \n 2. дюймов в сантиметры \n 3. футов в метры \n 4. драхмов в граммы \n 5. унций в граммы \n 6. фунтов в килограммы \n 7. аршинов в метры \n 8. золотников в граммы \n 9. дюймов в милиметры \n " << endl;
    cin >> choice;
    switch (choice) {
    case 1:
        float sazh;
        cout << "Введите количество сажней \n" << endl;
        cin >> sazh; 
        cout << "Ваш ответ : " << sazh * 2.1366; 
        break; 
    case 2:
        float duim;
        cout << "Введите количество дюймов \n" << endl;
        cin >> duim;
        cout << "Ваш ответ : " << duim * 2.5;
        break;
    case 3:
        float foot;
        cout << "Введите количество футов \n" << endl;
        cin >> foot;
        cout << "Ваш ответ : " << foot * 0.3048;
        break;
    case 4:
        float draxm;
        cout << "Введите количество драхмов \n" << endl;
        cin >> draxm;
        cout << "Ваш ответ : " << draxm * 3.7325;
        break;
    case 5:
        float gramm;
        cout << "Введите количество граммов \n" << endl;
        cin >> gramm;
        cout << "Ваш ответ : " << gramm * 29.86;
        break;
    case 6:
        float pount;
        cout << "Введите количество фунтов \n" << endl;
        cin >> pount;
        cout << "Ваш ответ : " << pount * 0.40951;
        break;
    case 7:
        float arch;
        cout << "Введите количество аршин \n" << endl;
        cin >> arch;
        cout << "Ваш ответ : " << arch * 0.7112;
        break;
    case 8:
        float zolot;
        cout << "Введите количество золотников \n" << endl;
        cin >> zolot;
        cout << "Ваш ответ : " << zolot * 4.2657;
        break;
    case 9:
        float adas;
        cout << "Введите количество duim \n" << endl;
        cin >> adas;
        cout << "Ваш ответ : " << adas * 25.3995;
        break;
    default :
        cout << "Ошиблись";
   
    }
    

    
    return 0;
}
