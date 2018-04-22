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
vector<string> yourName;
vector<int> yourScore;

string key;
string name;
double score;
int count;
char rightAns ;
bool ans;
bool win = false;
bool lose = false;
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


void newTurn()
{
	ans = false;
}

void checkAns(char key)
{
	if(key==rightAns) ans = true;
	if(ans==false) count++;
	
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

void drawScene5Lifes(int countDown)
{
	cout << 								"\t\t\t\t _______________________"<< "\n";
	cout <<									"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|      ___________      |"<< "\n";
	if(countDown>=1){cout << 				"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(countDown>=2)cout << 				"\t\t\t\t|     |           O     |"<< "\n";
		else cout <<						"\t\t\t\t|     |                 |"<< "\n";
	if(countDown>=5){cout << 				"\t\t\t\t|     |          /|\\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         / | \\   |"<< "\n";
	}else if(countDown>=4){cout << 			"\t\t\t\t|     |          /|     |"<< "\n";
					cout << 				"\t\t\t\t|     |         / |     |"<< "\n";
	}else if(countDown>=3){cout << 			"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(countDown>=7){cout << 				"\t\t\t\t|     |          / \\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         /   \\   |"<< "\n";
	}else if(countDown>=6){cout << 			"\t\t\t\t|     |          /      |"<< "\n";
					cout << 				"\t\t\t\t|     |         /       |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	cout << 								"\t\t\t\t|     |                 |"<< "\n";
	cout << 								"\t\t\t\t|    _|_                |"<< "\n";
	cout << 								"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|_______________________|"<< "\n";
	if(countDown == 7 ) 
	{
		lose = true;
	}
}

void showScore(int myScore)
{
	cout<< setw(30)<<"SCORE"<<"\n";
	if(myScore>=100)cout<< setw(29) << myScore <<"\n";
	else if(myScore>=10)cout<< setw(27) << "0" << myScore <<"\n";
	else cout<< setw(28) << "00" << myScore <<"\n";
}

void addName()
{
	cout << "Player name ?" << "\n";
	cin >> name;
}

void addScore()
{
	if(lose == true)
	{
		yourName.push_back(name);
		yourScore.push_back(score);
		loseScene();
	}
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

void loseScene()
{
	cout << "-----------------------" << "\n";
	cout << "|       You Lose      |" << "\n";
	cout << "-----------------------" << "\n";
	newPlayer();
}

void ScoreBoard()
{
	cout << "Name" << "\t" << "\t" << "Score" << "\n";
	for(int i=0;i<yourName.size();i++)
	{
		cout << yourName[i] << "\t" << "\t" << yourScore[i] << "\n";
	}
	newPlayer();
}





