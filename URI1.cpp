#include <iostream>

using namespace std;

int main()
{
  int intro;
  cin>>intro;
  int newe;
  newe = intro;
  int cien=newe / 100;
  newe=newe%100;
  int cinc= newe / 50;
  newe = newe%50;
  int veint=newe/ 20;
  newe=newe%20;
  int diez= newe /10;
  newe = newe%10;
  int cinco= newe /5;
  newe = newe%5;
  int dos = newe / 2;
  newe=newe%2;
  int uno= newe /1;
  newe = newe%1;
  cout<<intro<<endl<<cien<<" nota(s) de R$ 100,00"<<endl<<cinc<<" nota(s) de R$ 50,00"<<endl<<veint<<" nota(s) de R$ 20,00"<<endl<<diez<<" nota(s) de R$ 10,00"<<endl<<cinco<<" nota(s) de R$ 5,00"<<endl<<dos<<" nota(s) de R$ 2,00"<<endl<<uno<<" nota(s) de R$ 1,00"<<endl;
  return 0;
}
