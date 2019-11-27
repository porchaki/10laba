#include <iostream>
using namespace std;
 
int main()
{
   int cost;
   setlocale (LC_ALL,"russian");
 
   cout << "Введите стоимость 1 кг конфет: ";
   cin >> cost;
   for (double i = 1; i <= 10; i=i++)
   {
      cout << "Стоимость " << i/10 << " кг конфет = " << cost*(i/10) << endl;
   }
   system("pause");
   return 0;
}