#include <iostream>
using namespace std;

int main()
{
    double p = 1.0;
    unsigned int n;
	setlocale (LC_ALL,"russian");
 
    cout << "¬ведите число: ";
    cin >> n;
 
    for (double i=1, j=1.1; i<=n; i++, j+=0.1)
        p = p * j;
 
    cout << p << endl;
	system ("pause");
 
    return 0;
}