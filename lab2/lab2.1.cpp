// Lab_02.cpp 
// < �������, ��� ������ > 
// ����������� ������ � 2. 
// ˳����� ��������. 
// ������ 0.3 
// ccc

#include <iostream> 
#include <cmath> 
using namespace std;

int main()
{
    double a;  // ������� ��������  
    double z1; // ��������� ���������� 1-�� ������ 
    double z2; // ��������� ���������� 2-�� ������ 


    cout << "a = "; cin >> a;

    z1 = 1 - 1 / 4 * (sin(2 * a) * sin(2 * a)) + cos(2 * a);
    z2 = cos(a) * cos(a) + cos(a) * cos(a) * cos(a) * cos(a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}