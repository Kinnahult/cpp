// switch-case
#include <iostream>
using namespace std;
int main()
{
  double tal1, tal2;
  char raknesatt;
  cout << "Ange uttrycket som ska beräknas: ";
  cin >> tal1 >> raknesatt >> tal2;
  switch (raknesatt)
  {
    case '+':
      cout << "Svar: " << tal1 + tal2;
      break;
    case '-':
      cout << "Svar: " << tal1 - tal2;
      break;
    case '*':
      cout << "Svar: " << tal1*tal2;
      break;
    case '/':
      cout << "svar: " << tal1/tal2;
      break;
   default:
     cout << "Felinmatning";
  }
  return 0;
}