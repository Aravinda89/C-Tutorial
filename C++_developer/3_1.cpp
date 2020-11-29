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

  string playerName[2];

  srand(time(0));

  cout << "Player 1 pls Enter your name:" << endl;
  cin >> playerName[0];
  cout << "Player 2 pls Enter your name:" << endl;
  cin >> playerName[1];
  cout << "Thanks and GoodLuck.";

  chipsInPile = (rand() % MAX_CHIPS) + 1;
  cout << "This round will start with " << chipsInPile << " chips in pile."<<endl;
  if(player1Turn){
    cout << playerName[0] << "How many chips would you like?\n";
  }
  else{
    cout << playerName[1] << "How many chips would you like?\n";
  }

  cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;
  cin >> chipsTaken;

  return 0;
}