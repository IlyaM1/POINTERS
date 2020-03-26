#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x = 1;
    int *p;
    p = &x;
    cout << "Адрес переменной в памяти = " << p << endl;
    cout << "Её значение = " << *p << endl;

    int dynamicMassive[] = {1,3,5,7};// объявление динамического массива
    cout << dynamicMassive[0] << " " << dynamicMassive[1] << " " << dynamicMassive[2] << " " << dynamicMassive[3] << endl;
    dynamicMassive[4] = 10;// подтверждение того, что он динамичный
    cout << dynamicMassive[4] << "\n\n";

    int array [5] = { 7, 8, 2, 4, 5 };// обычный массив

    cout << array << endl;//адрес массива обозначается, как адрес первого элемента массива
    cout << &array[0] << "\n\n";

    cout << &array[1] << endl; // адрес памяти второго элемента
    cout << array+1 << endl; // адрес памяти второго элемента по другому

    cout << array[1] << endl; // значение второго элемента
    cout << *(array+1) << endl; // значение второго элемента по другому

    return 0;
}
