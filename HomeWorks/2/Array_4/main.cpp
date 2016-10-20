/*������� ���������� ������������� ������.
������� ���������� �������� �������.
����� ������ ����������� ����������� ����� ����� ���������, ������� ������ �� ���������� ���������,
� ���� ��� ����� ��������� ������, ������� ����� �� ���������� ���������.
   ��������: http://www.itmathrepetitor.ru/s-zadachi-s-resheniyami-odnomernye-mass/*/

#include <iostream>

using namespace std;

#define N 11    //����� ��������� �������

int main()
{
    int a[N] = {1,  2  ,3,  23  ,4,  5  ,6,  7  ,8,  12  ,11};    //�������� ������
    int n = N; //���������� ��� ����� ���-�� ��������� �������
    int ii = 0; // ����� ��������� �������������

     //----------����� �������------------

    cout << "Original array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;

    //----------����� ������������� ���������------
    int M = a[1];  //������������ �������� ������� �������

    for (int i = 1; i < n; i += 2)
    {
            if (a[i] > M)
            {
                M = a[i];   // �������� ����. ��������
                ii = i;     //����� ����� ��������
            }
    }


    cout << "MAX = " << a [ii] << "\n" << endl;

    //------------����� ������� ����� �� 3 ����-----------
    //-----------������ �� a[ii]------------


    int counter  = 3;

    while (counter > 0)
    {
        for ( int k = ii+1; k < n ; k++ )
        {
            a[k] = a[k+1];
        }
        counter--;
    }


    //------------����� ������� ������ �� 1 ���-----------
    //-----------����� �� a[ii]------------


    counter  = 1;

    while (counter > 0)
    {
        for ( int k = (ii-1); k > 0 ; k-- )
        {
            a[k] = a[k-1];
        }
        counter--;
    }

   //----------����� �������------------

     cout << "Modyfied array"<<"\n"<< endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}