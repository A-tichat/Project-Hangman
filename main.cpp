#include "random.h"
#include "screen.h"
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include "clear.h" //use ClearScreen() to clear screen
#include "death.h"
#include <time.h>
#include <cctype>
using namespace std;

int e=1;
int line;
bool checkline=true;
set<char> alphabet;
char c;


int main(){
	string textline;
	Home();
//	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);

	srand(time(0));
	cout<<"\nPlease select mode: ";
	
//	PlaySound(TEXT("mode.wav"), NULL, SND_SYNC);
//	PlaySound(TEXT("mode2.wav"), NULL, SND_SYNC);
	
	int selectmode=0;
	cin>>selectmode;
	switch (selectmode){  //select mode
		case 1:practicemode=true;
			normalmode=false;
			timemode=false;
			break;
		case 2:practicemode=false;
			normalmode=true;
			timemode=false;
			break;
		case 3:practicemode=false;
			normalmode=false;
			timemode=true;
			break;
	}
//Menu 2
	selection();
	cout << "\nPlease select type of word: ";
	int typeofword=0;
	cin>>typeofword;
		ifstream fin1("animal.txt");
		ifstream fin2("country.txt");
		ifstream fin3("fruits.txt");
	switch(typeofword){
		case 1:getline(fin1,textline);break;
		case 2:getline(fin2,textline);break;
		case 3:getline(fin3,textline);break;
	}
	//ifstream fin("Exam.txt");

	line=atoi(textline.c_str());
	
	vector<int> list=ranlist(line);
	vector<string> vocab;
	
	while(checkline){
		switch(typeofword){
			case 1:checkline=getline(fin1,textline);break;
			case 2:checkline=getline(fin2,textline);break;
			case 3:checkline=getline(fin3,textline);break;
		}
		vocab.push_back(textline);
	}
	
//start game
	int round=0;
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
			e=1;
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
				PlaySound(TEXT("wrong.wav"), NULL, SND_ASYNC);
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
			cout << "\n";
			cout << setw(20) << left << " " ;
			for (int i=0;i<vocab[log].size();i++) cout << vocab[log][i] << "  ";
			addScore();
			cout << "\n\n";

		}while(vocabcheck2!=b);
		
		round++;
	}
	return 0;
}


