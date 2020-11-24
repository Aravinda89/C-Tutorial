#include <iostream>
// Hello World
using namespace std;

int main()
{
  string name;
  string food;

  cout << "Please Enter your name: " << endl;
  cin >> name;
  cout<< "Hello, "<< name << endl;

  cout << "Hello "<< name << ", Please Enter your favourite Food!: " << endl;
  cin >> food;
  cout << "My favourite Food is " << food << " too!" << endl;

  return 0;
}