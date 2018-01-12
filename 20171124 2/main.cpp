 
#include<iostream>
using namespace std;
// Exempel 7.3, sidan 84
int main()
{
  double hojd;
  cout << "Ange pudelns markhöjd: ";
  cin >> hojd;
  if ( (hojd>28) && (hojd < 35) )
  {
    cout << "Det är en dvärgpudel.";
  }
  else
  {
    cout << "Det är inte en dvärgpudel.";
  }
  return 0;
}