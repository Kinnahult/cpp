#include <iostream>
using namespace std;
int main()
{
  double langd;
  cout << "Hur långt blev slaget? ";
  cin >> langd;
  if (langd < 150 || langd > 190)
  {
    cout << "Grattis. Du lyckades.";
  }
  else
  {
    cout << "Det var ingen höjdare.";
  }
  return 0;
}
