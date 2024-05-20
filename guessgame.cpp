#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Guessgame
{
	int targetnumber;
public:
	Guessgame()
	{
		srand(static_cast<unsigned int>(time(0)));
		targetnumber=rand()%100+1;
	}
	inline bool isCorrectGuess(int guess)
	{
		return guess==targetnumber;
	}
	void playGame()
	{
		int guess;
		int attempts=0;
		cout<<"welcome to the guess the number game!.."<<endl;
		cout<<"i'm thinking of a number between 1 to 100..."<<endl;
		do
		{
			cout<<"enter your guess:";
			cin>>guess;
			attempts++;
			if(isCorrectGuess(guess))
			{
				cout<<"Comgratulations! You gussed the correct number in "<<attempts<<"attempts"<<endl;
				return;
			}
			else if(guess<targetnumber)
			{
				cout<<"Too low! Try again.."<<endl;
			}
			else
			{
				cout<<"Too high! Try again.."<<endl;
			}
		}while(true);
	}
};
int main()
{
	Guessgame game;
	game.playGame();
	return 0;
}
