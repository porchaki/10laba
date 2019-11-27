#include <iostream>
using namespace std;
int main(){
int t = 1;
int r = 0;
int N,A;
setlocale (LC_ALL,"russian");
cout<<"введите N и А"<<endl;
cin>>N>>A;

for( int i=0; i<=N; ++i )
{
   r += t;
   t *= -A;
}
cout <<r;
system ("pause");
return 0;
}
