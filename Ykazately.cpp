#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x = 1;
    int *p;
    p = &x;
    cout << "����� ���������� � ������ = " << p << endl;
    cout << "Ÿ �������� = " << *p << endl;

    int dynamicMassive[] = {1,3,5,7};// ���������� ������������� �������
    cout << dynamicMassive[0] << " " << dynamicMassive[1] << " " << dynamicMassive[2] << " " << dynamicMassive[3] << endl;
    dynamicMassive[4] = 10;// ������������� ����, ��� �� ����������
    cout << dynamicMassive[4] << "\n\n";

    int array [5] = { 7, 8, 2, 4, 5 };// ������� ������

    cout << array << endl;//����� ������� ������������, ��� ����� ������� �������� �������
    cout << &array[0] << "\n\n";

    cout << &array[1] << endl; // ����� ������ ������� ��������
    cout << array+1 << endl; // ����� ������ ������� �������� �� �������

    cout << array[1] << endl; // �������� ������� ��������
    cout << *(array+1) << endl; // �������� ������� �������� �� �������

    return 0;
}
