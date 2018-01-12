// Exempel 6.2, sidan 74
#include<iostream>
using namespace std;
int main()
{
  float tal1;
  float tal2;
  
  cout << "Ange tal 1"; // Läs in två tal, tal1 tal2
  cin >> tal1;
  cout << "Ange tal 2";
  cin >> tal2;
  // Om tal1 är större än tal2
  // skriv ut tal1
  // annars 
  // skriv ut tal2
  if (tal1 > tal2) // Pseudokad rad 11 och 12
  {
    cout << tal1 << endl;
  }
  else // Pseudokad rad 13 och 14
  {
    cout << tal2 << endl;
  }
  
  
  return 0;
}