#include <iostream>
using namespace std;
// switch-case, sidan 90
int main()
{
  int tal = 3;
  switch (tal) // heltal, (char, int)
  {
    case 1:
    cout << "tal �r 1" << endl;
    break;
    case 2:
    cout << "tal �r 2" << endl;
    break;
    case 3:
    cout << "tal �r 3" << endl;
    break;
    default:
    cout << "tal �r n�got annat" << endl;
  }
  // Hit
  /*
  if (tal==1) // N�got som g�r att utv�rdera sant/falskt
  {
    cout << "tal �r 1" << endl;
  }
  if (tal==2)
  {
    cout << "tal �r 2" << endl;
  }
  if (tal==3)
  {
    cout << "tal �r 3" << endl;
  }
  else
  {
    cout << "tal �r n�got annat" << endl;
  }
  */
  // Hit

  
    return 0;
}