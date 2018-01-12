// manipulatorer
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double tal = 4.0/3;
   cout << "1.33333: " << tal << endl;
   cout << "1.33: " << setprecision(3) << tal << endl;
   cout << "1.333: " << fixed << setprecision(3) << tal << endl;
   return 0;
}