// if-else if
#include <iostream>
using namespace std;
int main()
{
  double vikt, porto;
  cout << "Mata in brevets vikt: ";
  cin >> vikt;
  if (vikt <= 20)
  {
    porto = 5;
  }
  else if (vikt <= 100)
  {
    porto = 10;
  }
  else
  {
     porto = 20;
  }
  cout << "Ett brev som väger " << vikt << " gram kostar "
     << porto << " kronor.";
  return 0;
}