#include <iostream>
using namespace std;
int main()
{
  int tal1, tal2, max;
  cout << "Mata in tv� heltal: ";
  cin >> tal1 >> tal2;
  max = tal1 < tal2 ? tal1 : tal2;
  cout << "det minsta talet �r " << max;
  return 0;
}
