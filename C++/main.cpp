#include <iostream>
using namespace std;
void PrintName(string first, string last);
int main()
{
  PrintName("Indian", "Wizard");
  return 0;
}
void PrintName(string first, string last)
{
  string fullname = first + " " + last;
  cout << fullname << endl;
}
