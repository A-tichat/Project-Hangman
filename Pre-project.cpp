#include "random.h"
#include <conio.h>
#include<Windows.h>
#include <mmsystem.h>
using namespace std;

int n=0,deathcount=0,line;

int main(){
	string textline;
	srand(time(0));
	cout<<"Welcome to Hangman game";
	PlaySound("DownYonder.m4a", NULL, SND_SYNC);
	ifstream fin("Exam.txt");
	
	getline(fin,textline);
	line=atoi(textline.c_str());
	
	vector<int> list=ranlist(line);
	vector<string> vocab;
	while(getline(fin,textline)){
		vocab.push_back(textline);
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
