#include <iostream>
using namespace std;
int main()
{
  int tal1, tal2, max;
  cout << "Mata in två heltal: ";
  cin >> tal1 >> tal2;
  max = tal1 < tal2 ? tal1 : tal2;
  cout << "det minsta talet är " << max;
  return 0;
}
