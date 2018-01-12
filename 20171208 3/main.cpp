#include <iostream>
using namespace std;
int main()
{
 
  
  int hastighet[50];
  int antal = 0;
  
  // Låt användaren mata in hur många värden hon vill använda:
  cout << "Antal värden: ";
  cin >> antal;
  // Genomför inmatningen:
  for ( int n = 0 ; n < antal ; n++ )
  {
    cout << "Ange tal " << n << ": ";
    cin >> hastighet[n];
  }
  
  // Finn det största värdet:
  int max = hastighet[0];
  for ( int n = 0 ; n < antal ; n++ )
  {
    if ( max < hastighet[n] ) max = hastighet[n];
  }
  
  // Beräkna summan:
  double summa = 0;
  for ( int n = 0 ; n < antal ; n++ )
  {
    summa = summa + hastighet[n];
  }
  
  // Skriv ut resultaten:
  cout << endl;
  cout << "Största värdet: " << max << endl;
  cout << "Medelvärdet: " << (summa/antal) << endl;
  
  return 0;
}

