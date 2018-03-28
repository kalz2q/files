//char.cpp
#include <iostream>
using namespace std;
int main()
{
  char c = 'A';
  cout << "c = "<< c << ", int(c) = " << int(c) << endl;
  c = 't';
  cout << "c = "<< c << ", int(c) = " << int(c) << endl;
  c = '\t';
  cout << "c = "<< c << ", int(c) = " << int(c) << endl;
  c = '!';
  cout << "c = "<< c << ", int(c) = " << int(c) << endl;
}

// c = A, int(c) = 65
// c = t, int(c) = 116
// c = 	, int(c) = 9
// c = !, int(c) = 33
