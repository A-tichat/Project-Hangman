#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <set>
#include "random.h"
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include "clear.h"
#include <time.h>
#include <cctype>
using namespace std;

int round=0;
int typeofword=0,selectmode=0;
string vocabcheck2;
int line;
bool checkline=true;
bool practicemode=true,normalmode=false,timemode=false;
set<char> alphabet;
char c;
string textline;
int deathcount=0;
double score;
bool lose = false, win=false ,checktoaddpoint=true;
vector<string> yourName;
vector<int> yourScore;
string name;
vector<int> list;
vector<string> vocab;
	
void Home(){
	cout << "\n";
	cout << "  H      H    A A    N      N  GGGGGG    M       M    A A    N      N  SSSSSSS\n";
	cout << "  H      H   A   A   NN     N  G    G    MM     MM   A   A   NN     N  S      \n";
	cout << "  H      H  A     A  N N    N  G         M M   M M  A     A  N N    N  S      \n";
	cout << "  HHHHHHHH  AAAAAAA  N  N   N  G  GGG    M  M M  M  AAAAAAA  N  N   N  SSSSSSS\n";
	cout << "  H      H  A     A  N   N  N  G    G    M   M   M  A     A  N   N  N        S\n";
	cout << "  H      H  A     A  N    N N  G    G    M       M  A     A  N    N N        S\n";
	cout << "  H      H  A     A  N     NN  GGGGGG    M       M  A     A  N     NN  SSSSSSS\n";
//menu selection mode game
	cout << "\n\t\t\t  Mode for play:\n\n";
	cout << "\t\t\t    (1)Mode Practice\n" ;
	cout << "\t\t\t    (2)Mode Normal\n\n\n" ;
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |----" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |   |" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |   0" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |  /|\\" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |  / \\" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |     " ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << "---    \n\n" ; 
	
	//start game
//	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
	
//	PlaySound(TEXT("mode.wav"), NULL, SND_SYNC);
//	PlaySound(TEXT("mode2.wav"), NULL, SND_SYNC);

	

		cout<<"\nPlease select mode: ";
		cin>>selectmode;
		switch (selectmode){  //select mode
		case 1:practicemode=true;
			normalmode=false;
			break;
		case 2:practicemode=false;
			normalmode=true;
			
			break;
		}
	
	
}

void selection(){
	cout << "\n";
	cout << "  H      H    A A    N      N  GGGGGG    M       M    A A    N      N  SSSSSSS\n";
	cout << "  H      H   A   A   NN     N  G    G    MM     MM   A   A   NN     N  S      \n";
	cout << "  H      H  A     A  N N    N  G         M M   M M  A     A  N N    N  S      \n";
	cout << "  HHHHHHHH  AAAAAAA  N  N   N  G  GGG    M  M M  M  AAAAAAA  N  N   N  SSSSSSS\n";
	cout << "  H      H  A     A  N   N  N  G    G    M   M   M  A     A  N   N  N        S\n";
	cout << "  H      H  A     A  N    N N  G    G    M       M  A     A  N    N N        S\n";
	cout << "  H      H  A     A  N     NN  GGGGGG    M       M  A     A  N     NN  SSSSSSS\n";
	
//menu selection vocabulaly
	cout << "\n\t\t\t  Vocabulary about: \n\n";
	cout << "\t\t\t    (1)Animal\n"; 
	cout << "\t\t\t    (2)Body\n"; 
	cout << "\t\t\t    (3)Country\n";
	cout << "\t\t\t    (4)Fruit\n";
	cout << "\t\t\t    (5)Job\n";
	cout << "\t\t\t    (6)Sport\n";
//end menu
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |----" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |   |" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |   0" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |  /|\\" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |  / \\" ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << " |     " ;
	cout << "\n";
	
	for(int i=0; i<=32; i++) cout << " ";
	cout << "---    \n" ;
	
//selection vocabfile
	cout << "Please select type of word: ";
	cin>>typeofword;
		ifstream fin0("Exam.txt");
		ifstream fin1("animal.txt");
		ifstream fin2("body.txt");
		ifstream fin3("country.txt");
		ifstream fin4("fruits.txt");
		ifstream fin5("job.txt");
		ifstream fin6("sport.txt");
	switch(typeofword){
		case 0:getline(fin0,textline);break;
		case 1:getline(fin1,textline);break;
		case 2:getline(fin2,textline);break;
		case 3:getline(fin3,textline);break;
		case 4:getline(fin4,textline);break;
		case 5:getline(fin5,textline);break;
		case 6:getline(fin6,textline);break;
	}

	line=atoi(textline.c_str());
	
	list=ranlist(line);
	while(checkline){
		switch(typeofword){
			case 0:checkline=getline(fin0,textline);break;
			case 1:checkline=getline(fin1,textline);break;
			case 2:checkline=getline(fin2,textline);break;
			case 3:checkline=getline(fin3,textline);break;
			case 4:checkline=getline(fin4,textline);break;
			case 5:checkline=getline(fin5,textline);break;
			case 6:checkline=getline(fin6,textline);break;
		}
		vocab.push_back(textline);
	}
}

void newTurn()
{
	checktoaddpoint=true;
	if (practicemode) {
		deathcount=7;
	}else{
		deathcount=0;	
	}
	
	lose = false;
}

void showScore(int myScore){
	cout << "\n";
	cout << setw(60) << " " 				<<"SCORE"<<"\n";
	if(myScore>=1000)cout<< setw(59) << " " << " " << myScore <<"\n";
	else if(myScore>=100)cout<< setw(59) << " " << "  " << myScore <<"\n";
	else if(myScore>=10)cout<< setw(59) << " " << "   0" << myScore <<"\n";
	else cout<< setw(59) << " " 			<< "   00" << myScore <<"\n";
	cout << "\n";
}

void drawScene7Lifes()
{
	cout << 								"\t\t\t\t _______________________"<< "\n";
	cout <<									"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|      ___________      |"<< "\n";
	if(deathcount>=1){cout << 				"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(deathcount>=2)cout << 				"\t\t\t\t|     |           O     |"<< "\n";
		else cout <<						"\t\t\t\t|     |                 |"<< "\n";
	if(deathcount>=5){cout << 				"\t\t\t\t|     |          /|\\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         / | \\   |"<< "\n";
	}else if(deathcount>=4){cout << 		"\t\t\t\t|     |          /|     |"<< "\n";
					cout << 				"\t\t\t\t|     |         / |     |"<< "\n";
	}else if(deathcount>=3){cout << 		"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(deathcount>=7){cout << 				"\t\t\t\t|     |          / \\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         /   \\   |"<< "\n";
	}else if(deathcount>=6){cout << 		"\t\t\t\t|     |          /      |"<< "\n";
					cout << 				"\t\t\t\t|     |         /       |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	cout << 								"\t\t\t\t|     |                 |"<< "\n";
	cout << 								"\t\t\t\t|     |                 |"<< "\n";
	cout << 								"\t\t\t\t|    _|_                |"<< "\n";
	cout << 								"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|_______________________|"<< "\n";
	if(deathcount == 7 ) 
	{
		if (selectmode>1)
		lose = true;
	}
}

void addScore()
{
	if(lose){
		cout << "\n";
		cout << setw(5) << left << " " << "------------------------------------------------------------------------" << "\n";
		cout << setw(5) << left << " " << "|                                                                      |" << "\n";
		cout << setw(5) << left << " " << "|       Y     Y   OO     U    U    L        OO     SSSSSS  EEEEEE      |" << "\n";
		cout << setw(5) << left << " " << "|        Y   Y   O  O    U    U    L       O  O    S       E           |" << "\n";
		cout << setw(5) << left << " " << "|         Y Y   O    O   U    U    L      O    O   S       E           |" << "\n";
		cout << setw(5) << left << " " << "|          Y   O      O  U    U    L     O      O  SSSSSS  EEEEEE      |" << "\n";
		cout << setw(5) << left << " " << "|          Y    O    O   U    U    L      O    O        S  E           |" << "\n";
		cout << setw(5) << left << " " << "|          Y     O  O    U    U    L       O  O         S  E           |" << "\n";
		cout << setw(5) << left << " " << "|          Y      OO      UUUU     LLLLLL   OO     SSSSSS  EEEEEE      |" << "\n";
		cout << setw(5) << left << " " << "|                                                                      |" << "\n";
		cout << setw(5) << left << " " << "------------------------------------------------------------------------" << "\n\n\n";
		cout << "Input your name: ";
		cin >> name;
		yourName.push_back(name);
		yourScore.push_back(score);
		cout << setw(20) << left << " " << setw(20) << left << "Name" << "Score" << "\n";
		for(int i=0;i<yourName.size();i++)
		{
		cout << setw(20) << left << " " << setw(20) << left << yourName[i] << yourScore[i] << "\n";
		}
		cout << "Enter to continues: ";
		cin.ignore();
		getline(cin,name);
	}
	
	if(win){
		cout << "\n";
		cout << setw(5) << left << " " << "-----------------------------------------------------------------------" << "\n";
		cout << setw(5) << left << " " << "|                                                                     |" << "\n";
		cout << setw(5) << left << " " << "|       Y     Y   OO     U    U    W       W  IIIIIII  N      N       |" << "\n";
		cout << setw(5) << left << " " << "|        Y   Y   O  O    U    U    W       W     I     NN     N       |" << "\n";
		cout << setw(5) << left << " " << "|         Y Y   O    O   U    U    W       W     I     N N    N       |" << "\n";
		cout << setw(5) << left << " " << "|          Y   O      O  U    U    W   W   W     I     N  N   N       |" << "\n";
		cout << setw(5) << left << " " << "|          Y    O    O   U    U    W  W W  W     I     N   N  N       |" << "\n";
		cout << setw(5) << left << " " << "|          Y     O  O    U    U    W W   W W     I     N    N N       |" << "\n";
		cout << setw(5) << left << " " << "|          Y      OO      UUUU     WW     WW  IIIIIII  N     NN       |" << "\n";
		cout << setw(5) << left << " " << "|                                                                     |" << "\n";
		cout << setw(5) << left << " " << "-----------------------------------------------------------------------" << "\n\n\n";
		cout << "Input your name: ";
		cin >> name;
		yourName.push_back(name);
		yourScore.push_back(score);
		cout << setw(20) << left << " " << setw(20) << left << "Name" << "Score" << "\n";
		for(int i=0;i<yourName.size();i++)
		{
		cout << setw(20) << left << " " << setw(20) << left << yourName[i] << yourScore[i] << "\n";
		}
		cout << "Enter to continues: ";
		cin.ignore();
		getline(cin,name);
	}
}

void showAlphabet(set<char> mySet){
	cout << setw(20) << left << " " << "Worded: "; 
	set<char>::iterator j;
	for (j = mySet.begin(); j!=mySet.end() ;j++){
		cout << *j << " ";
	}	

	cout << "\n";
}

void addpoint(){
	if(normalmode) score += (8-deathcount)*5*vocabcheck2.size();
}

void playGame(){
	while (round<line) {
		alphabet.clear();	
		newTurn();
		int log=list[round];
		char b[vocab[log].size()];
		
		vocabcheck2=vocab[log];
		for (int i=0;i<vocab[log].size();i++){
			vocabcheck2[i]=toupper(vocabcheck2[i]);
			vocabcheck2[vocab[log].size()]='\0';
		}

		showScore(score);
		drawScene7Lifes();
		cout << "\n";
		showAlphabet(alphabet);
		cout << "\n";
		cout << setw(20) << left << " " ;
		for(int i=0;i<vocabcheck2.size();i++){
			b[i]='_';
			b[vocabcheck2.size()]='\0';
			cout << b[i] << "  ";
		}
		cout << "\n\n";
		
		do{
			checktoaddpoint=true;
			cout << "input your character: ";
			cin >> c;
			c=toupper(c);
			cout << "\n";
	
			for(int i=0;i<vocabcheck2.size();i++){
				if(c==vocabcheck2[i]) {
					b[i]=c;
					checktoaddpoint=false;
					addpoint();
				}
			}
			
			if (checktoaddpoint) {
			//	PlaySound(TEXT("wrong.wav"), NULL, SND_ASYNC);
				alphabet.insert(c);
				deathcount++;
			}
		
			showScore(score);
			drawScene7Lifes();
			cout << "\n";
		
			showAlphabet(alphabet);
		
			cout << "\n";
			cout << setw(20) << left << " " ;
			for (int i=0;i<vocab[log].size();i++) cout << b[i] << "  ";
			if (typeofword==0){
				cout << "\n";
				cout << setw(20) << left << " " ;
				for (int i=0;i<vocab[log].size();i++) cout << vocab[log][i] << "  ";
			}
			addScore();
			cout << "\n\n";

		}while(vocabcheck2!=b);
		
		round++;
	}
	win=true;
	addScore();
}
