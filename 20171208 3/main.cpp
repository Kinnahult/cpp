#include <iostream>
using namespace std;
int main()
{
 
  
  int hastighet[50];
  int antal = 0;
  
  // L�t anv�ndaren mata in hur m�nga v�rden hon vill anv�nda:
  cout << "Antal v�rden: ";
  cin >> antal;
  // Genomf�r inmatningen:
  for ( int n = 0 ; n < antal ; n++ )
  {
    cout << "Ange tal " << n << ": ";
    cin >> hastighet[n];
  }
  
  // Finn det st�rsta v�rdet:
  int max = hastighet[0];
  for ( int n = 0 ; n < antal ; n++ )
  {
    if ( max < hastighet[n] ) max = hastighet[n];
  }
  
  // Ber�kna summan:
  double summa = 0;
  for ( int n = 0 ; n < antal ; n++ )
  {
    summa = summa + hastighet[n];
  }
  
  // Skriv ut resultaten:
  cout << endl;
  cout << "St�rsta v�rdet: " << max << endl;
  cout << "Medelv�rdet: " << (summa/antal) << endl;
  
  return 0;
}

