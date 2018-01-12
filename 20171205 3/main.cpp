// jämföra strängar
#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Användarnamn: ";
  string namn;
  getline(cin, namn);
  cout << "Lösenord: ";
  string losen;
  getline(cin, losen);
  if (namn == "Mia" && losen == "hemligt")
  {
    cout << "\nHej Mia\n";
  }
  else
  {
    cout << "\nFelaktigt namn eller lösenord\n";
  }
  return 0;
}
