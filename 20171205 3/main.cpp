// j�mf�ra str�ngar
#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Anv�ndarnamn: ";
  string namn;
  getline(cin, namn);
  cout << "L�senord: ";
  string losen;
  getline(cin, losen);
  if (namn == "Mia" && losen == "hemligt")
  {
    cout << "\nHej Mia\n";
  }
  else
  {
    cout << "\nFelaktigt namn eller l�senord\n";
  }
  return 0;
}
