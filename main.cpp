#include "random.h"
#include "project_2.h"
#include <conio.h>
#include<Windows.h>
#include <mmsystem.h>
#include "clear.h" //use ClearScreen() to clear screen

using namespace std;

int n=0,deathcount=0,line;

int main(){
	string textline;
	cout<<"\nWelcome to Hangman game\n";
	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
	Home();
	bool checkline=true;
	bool practicemode=false,normalmode=false,timemode=false;
	srand(time(0));

	cout<<"\nPlease select mode \n";
	
	PlaySound(TEXT("mode.wav"), NULL, SND_SYNC);
	PlaySound(TEXT("mode2.wav"), NULL, SND_SYNC);
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
	
	cout<<"Please select type of word\n[1]animal\n[2]country\n[3]fruits\n";
	
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
		int log=list[round];
		char b[vocab[log].size()];
		for(int i=0;i<vocab[log].size();i++){
			b[i]='_';
			cout << b[i] << "  ";
		}
		cout << "\n";
		do{
			n=0;
			char c;
			cout << "input your letter: ";
			cin >> c;
			cout << "\n";
	
			for(int i=0;i<vocab[log].size();i++){
				if(c==vocab[log][i]) {
					b[i]=c;
					n++;
				}
				cout << b[i] << "  ";
			}
			
		if (n==0) {
			cout << "\n"<< "wrong!";
			PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
			deathcount++;
		}
		cout << "\n";
		
		}while(vocab[log]!=b);
		
		cout << "wrong is "<< deathcount <<" time.\n";
		round++;
		deathcount=0;
	}
	
	return 0;
}
