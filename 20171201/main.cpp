#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Anv�ndarnamn: ";
  string namn1;
  getline(cin, namn1);
  
  
  cout << "L�senord: ";
  string losen;
  getline(cin, losen);
  
  if (namn1 == "Mia" && losen == "hemligt")
  {
    cout << "\nHej Mia\n";
  }
  else 
  {
    cout << "\nFelaktigt namn eller l�senord\n";
  }
  return 0;
}
