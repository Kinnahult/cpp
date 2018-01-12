// typomvandlingar
# include <iostream>
using namespace std;
int main()
{
    int tal1;
    cout << "Mata in ett heltal: ";
    cin >> tal1;
    double tal2;
    cout << "Mata in ett decimaltal: ";
    cin >> tal2;
    char tecken;
    cout << "Mata in en bokstav: ";
    cin >> tecken;
    cout << "Vanlig division: " << tal1/tal2 << endl;
    cout << "Typomvandlad division: " << tal1/tal2 << endl;
    cout << tecken << " har teckenkod " << (int)tecken << endl;
    return 0;
 }
    