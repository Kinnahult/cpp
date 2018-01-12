#include <iostream>
using namespace std;

int main()
{
  setlocale( LC_ALL, "" );
  
  int antalIdioter = 100;
  int månad = 0;
  
  while ( antalIdioter < 1000000 )
  {
    antalIdioter = antalIdioter * 2;
    månad++;
  }
  
  cout << "Antal månader: " << månad << endl;
  
  return 0;
}
