#include <iostream>
using namespace std;
// switch-case, sidan 90
int main()
{
  int tal = 3;
  switch (tal) // heltal, (char, int)
  {
    case 1:
    cout << "tal är 1" << endl;
    break;
    case 2:
    cout << "tal är 2" << endl;
    break;
    case 3:
    cout << "tal är 3" << endl;
    break;
    default:
    cout << "tal är något annat" << endl;
  }
  // Hit
  /*
  if (tal==1) // Något som går att utvärdera sant/falskt
  {
    cout << "tal är 1" << endl;
  }
  if (tal==2)
  {
    cout << "tal är 2" << endl;
  }
  if (tal==3)
  {
    cout << "tal är 3" << endl;
  }
  else
  {
    cout << "tal är något annat" << endl;
  }
  */
  // Hit

  
    return 0;
}