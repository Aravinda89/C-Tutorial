//game

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main(){

  bool player1Turn = true;
  bool gameOver = false;
  int chipsInPile = 0;
  int chipsTaken = 0;
  int maxPerTurn = 0;

  string playerName[2];
  cout << "Player 1 pls Enter your name:" << endl;
  cin >> playerName[0];
  cout << "Player 2 pls Enter your name:" << endl;
  cin >> playerName[1];
  cout << "Thanks and GoodLuck.";

  srand(time(0));

  chipsInPile = (rand() % MAX_CHIPS) + 1;
  cout << "This round will start with " << chipsInPile << " chips in pile."<<endl;
  // cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;
  maxPerTurn = (chipsInPile * MAX_TURN);
  cout << "You can take up to " << maxPerTurn << endl;
  chipsTaken = (rand() % maxPerTurn) + 1;
  cout << "Number Taken: " << chipsTaken << endl;

  return 0;
}