#include <iostream>
#include <string>
using namespace std;
int main()
{
  cout << "Användarnamn: ";
  string namn1;
  getline(cin, namn1);
  
  
  cout << "Lösenord: ";
  string losen;
  getline(cin, losen);
  
  if (namn1 == "Mia" && losen == "hemligt")
  {
    cout << "\nHej Mia\n";
  }
  else 
  {
    cout << "\nFelaktigt namn eller lösenord\n";
  }
  return 0;
}
