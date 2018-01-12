#include <iostream>
using namespace std;
int main()
{
  double tid;
  cout << "Hur mycket är klockan?" << endl;
  cin >> tid;
  if (tid > 22)
  {
    cout << "gå och lägg dig" << endl;
  }
  else
  {
    cout << "Läs en bok" << endl;
    cout << " och ta dig en kopp kaffe." << endl;
  }
  return 0;
}

