#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<fstream>
using namespace std;

void newTurn();
void addName();
void addScore();
void checkAns(string);
void showScore(int);
void drawScene11Lifes(int);
void drawScene5Lifes(int);
void newPlayer();
void loseScene();
void ScoreBoard();


string key;


int count;
char rightAns ;

bool win = false;

int choose;

void writescore(){
	ofstream write("score.txt",ios::app);
	write << yourName[0] << " " << yourScore[0] << "\n";
}

void drawhangman(){
	addName();
	do{
		newTurn();
		cout << "Type 1 if you wanna win!" << "\n";
		cin >> key;
	//	checkAns(key);
		showScore(score);
		drawScene5Lifes(count);
		addScore();
		
	}while(choose!=3);
	
	
}


void drawScene11Lifes(int countDown)
{
	cout << 								" _______________"<< "\n";
	cout <<									"|               |"<< "\n";
	if(countDown>=8)cout << 				"|    _____      |"<< "\n";
		else cout << 						"|               |"<< "\n";
	if(countDown>=9)cout << 				"|   |     |	|"<< "\n";
		else if(countDown>=7) cout <<		"|         |     |"<< "\n";
		else cout << 						"|               |"<< "\n";
	if(countDown>=9)cout << 				"|   |     O	|"<< "\n";
		else if(countDown>=6)cout << 		"|         O     |"<< "\n";
		else cout << 						"|               |"<< "\n";
	if(countDown>=10)cout << 				"|   |	 /|\\	|"<< "\n";
		else if(countDown>=5) cout<<		"|        /|\\    |"<< "\n";
		else if(countDown>=4) cout<<		"|        /| 	|"<< "\n";
		else if(countDown>=3) cout<<		"|         | 	|"<< "\n";
		else cout << 						"|               |"<< "\n";
	if(countDown>=10)cout << 				"|   |    / \\	|"<< "\n";
		else if(countDown>=2) cout<<		"|        / \\    |"<< "\n";
		else if(countDown>=1) cout<<		"|        /  	|"<< "\n";
		else cout << 						"|               |"<< "\n";
	if(countDown>=11)cout<< 				"|  _|_	        |"<< "\n";
		else cout << 						"|               |"<< "\n";
	cout << 								"|               |"<< "\n";
	cout << 								"|_______________|"<< "\n";
	if(countDown == 11 ) 
	{
		lose = true;
	}
	
}

void addName()
{
	cout << "Player name ?" << "\n";
	cin >> name;
}

void newPlayer()
{
	do{
		cout << "Choose your action" << "\n";
		cout << "[1] Play again!" << "\n";
		cout << "[2] ScoreBoard" << "\n";
		cout << "[3] Exit" << "\n";
		cin >> choose;
		if(choose==1)
		{
			lose = false;
			count = 0;
			score = 0;
			addName();
		}
		else if(choose==2)
		{
			ScoreBoard();
		}
		else if(choose==3)
		{
			break;
		}
	}while(choose!=1&&choose!=2&&choose!=3);
}



void ScoreBoard()
{

	newPlayer();
}

