#include <iostream>
using namespace std;
int main()
{
  double tid;
  cout << "Hur mycket �r klockan?" << endl;
  cin >> tid;
  if (tid > 22)
  {
    cout << "g� och l�gg dig" << endl;
  }
  else
  {
    cout << "L�s en bok" << endl;
    cout << " och ta dig en kopp kaffe." << endl;
  }
  return 0;
}

