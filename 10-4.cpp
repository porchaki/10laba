
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
int N,i;
double A,b,c;
setlocale (LC_ALL,"russian");
cout << "введите N"<<endl;;
cin >> N;
cout << "введите А"<<endl;
cin >> A;

b=1;
c=1;
for (i=1;i<=N;i++){

b*=A;c+=b;}

cout << "Результат:" << c << endl;
system ("pause");
return 0;

}

