#include <iostream>
using namespace std;

int main()
{
  setlocale( LC_ALL, "" );
  
  int antalIdioter = 100;
  int m�nad = 0;
  
  while ( antalIdioter < 1000000 )
  {
    antalIdioter = antalIdioter * 2;
    m�nad++;
  }
  
  cout << "Antal m�nader: " << m�nad << endl;
  
  return 0;
}
