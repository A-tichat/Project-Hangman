#include "random.h"
#include "screen.h"
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include "clear.h" //use ClearScreen() to clear screen
#include "HangmanPicture.h"
#include <time.h>

using namespace std;

int n=0,deathcount=0,line;
void addpoint();
int vocabcheck;
string vocabcheck2;
bool checktoaddpoint=true;
bool checktoaddpoint2=false;
bool checkline=true;
bool practicemode=false,normalmode=false,timemode=false;
vector<char> alphabet;
char c;



int main(){
	
  	
	string textline;
	Home();
//	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
	

	srand(time(0));

	cout<<"\nPlease select mode: ";
	
//	PlaySound(TEXT("mode.wav"), NULL, SND_SYNC);
//	PlaySound(TEXT("mode2.wav"), NULL, SND_SYNC);
	cout<<"\nPlease select type of word: ";
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
	selection();
	
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
		vocab.push_back(textline);
		switch(typeofword){
		case 1:checkline=getline(fin1,textline);break;
		case 2:checkline=getline(fin2,textline);break;
		case 3:checkline=getline(fin3,textline);break;
	}
		
	}
	
	int round=0;
	
	while (round<line) {
		newTurn();
		int log=list[round];
		char b[vocab[log].size()];
		
		for(int i=0;i<vocab[log].size();i++){
			b[i]='_';
			cout << b[i] << "  ";
		}
		cout << "\n";
		do{
			n=0;
			
			cout << "input your letter: ";
			cin >> c;
			cout << "\n";
	
			for(int i=0;i<vocab[log].size();i++){
				if(c==vocab[log][i]) {
					b[i]=c;
					rightAns=b[i];
					n++;
					 checktoaddpoint2=true;
				}
				vocabcheck2=vocab[log];
				
				
				
				cout << b[i] << "  ";
			}
			
		if (n==0) {
			cout << "\n"<< "wrong!\n";
			PlaySound(TEXT("wrong.wav"), NULL, SND_ASYNC);
			deathcount++;
		}
		
		checkAns(c);
		
		addpoint();
		alphabet.push_back(c);
		vocabcheck = alphabet.size();
		showScore(score);
		drawScene5Lifes(count);
		addScore();
		cout << "\n";
		bool checktoaddpoint2=false;
		}while(vocab[log]!=b);
		
		cout << "wrong is "<< deathcount <<" times.\n";
		round++;
		deathcount=0;
	}
	
	return 0;
}
void addpoint(){
	for(int i=0;i<vocabcheck;i++){
		if(c == alphabet[i]) checktoaddpoint=false;
	
		
	}
	if(checktoaddpoint and checktoaddpoint2) {
	
		if(normalmode) score += n*((6-count)*45*vocabcheck2.size());
	
		
	}
	checktoaddpoint=true;
	checktoaddpoint2=false;
}
