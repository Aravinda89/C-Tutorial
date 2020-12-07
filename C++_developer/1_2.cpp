// Random number generator

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

  int dice = 0;

  // seed random num generator
  srand(time(0));

  dice = (rand() % 6) + 1;
  cout << "You rolled " << dice << endl;

  return 0;
}