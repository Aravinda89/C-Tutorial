#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = 0.5;

int main()
{

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

while(gameOver == false){

  do
  {
  	if (player1Turn){
  		cout << playerName[0] << "How many chips would you like?\n";
  	}else
  	{
  		cout << playerName[1] << "How many chips would you like?\n";
  	}
  	cout << "you can take upto " << static_cast<int>(MAX_TURN * chipsInPile)<< endl;
  	cin >> chipsTaken;

  } while(chipsTaken >(static_cast<int>(MAX_TURN * chipsInPile) && (chipsInPile > 1)));

  	chipsInPile = chipsInPile - chipsTaken;
  	cout << "There are " << chipsInPile << " Left in pile\n";
  	if(chipsInPile == 0){
  		gameOver = true;
  	}
  	else{
  		   player1Turn != player1Turn;
  	}

   return 0;

}
  
 }

