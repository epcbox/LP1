#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int nel = n;
  int billete [7] = {100,50,20,10,5,2,1};
  int respuestas[7] = {0,0,0,0,0,0,0};
  for (int i=0;i<7;i++)
  {
    respuestas[i]=nel/billete[i];
    nel=nel%billete[i];
  }
  cout<<n<<endl<<respuestas[0]<<" nota(s) de R$ 100,00"<<endl<<respuestas[1]<<" nota(s) de R$ 50,00"<<endl<<respuestas[2]<<" nota(s) de R$ 20,00"<<endl<<respuestas[3]<<" nota(s) de R$ 10,00"<<endl<<respuestas[4]<<" nota(s) de R$ 5,00"<<endl<<respuestas[5]<<" nota(s) de R$ 2,00"<<endl<<respuestas[6]<<" nota(s) de R$ 1,00"<<endl;
  return 0;
}
