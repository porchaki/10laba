#include <iostream>
using namespace std;
int main()
{
      int n, s=0;
	  setlocale(LC_ALL,"russian");
	  cout<<"¬ведите n"<<endl;
	  cin>>n;
       for(int i=1;i<=n;i++)
       {
          s+=2*i-1;
          cout << s << " ";     
          }
      system("pause");
	  return 0;
      
      }