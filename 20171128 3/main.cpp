#include <iostream>
using namespace std;
int main()
{
  double langd;
  cout << "Hur l�ngt blev slaget? ";
  cin >> langd;
  if (langd < 150 || langd > 190)
  {
    cout << "Grattis. Du lyckades.";
  }
  else
  {
    cout << "Det var ingen h�jdare.";
  }
  return 0;
}
