#include <iostream>
using namespace std;
 
int main()
{
   int cost;
   setlocale (LC_ALL,"russian");
 
   cout << "������� ��������� 1 �� ������: ";
   cin >> cost;
   for (double i = 1; i <= 10; i=i++)
   {
      cout << "��������� " << i/10 << " �� ������ = " << cost*(i/10) << endl;
   }
   system("pause");
   return 0;
}