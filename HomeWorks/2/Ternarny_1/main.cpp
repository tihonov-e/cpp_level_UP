//������ �� ��������� ��������
//��������� ����������� ���������:
//"�������" ? "��������� 1" : "��������� 2";


/* ������
    ��������� �������� y � ����������� �� � ��
    ���������� ���������

    x > 0 -> y = 1
    x < 0 -> y = 0

*/


#include <iostream>

using namespace std;

int main()
{
    int x,y;
    // ���� �������� x � ����������
    cout << "x = "; cin >> x;

    x > 0 ? y = 1 : y = 0; // ��������� ��������

    if (y == 1)  cout << "x > 0" << endl;
    else cout << "x < 0" << endl;

    return 0;
}