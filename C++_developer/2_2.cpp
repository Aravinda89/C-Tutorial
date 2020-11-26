# game

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS =100;


int main(){

  bool player1Turn = true;
  bool gameOver = false;

  int chipsInPile = 0;
  int chipsTaken = 0;

  srand(time(0));

  chipsInPile = (rand() % MAX_CHIPS) + 1;
  cout << "This round will start with " << chipsInPile << endl;

  return 0;
}