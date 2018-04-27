#include<iostream>
using namespace std;

void Home(){
	cout << "|----------------------------------------|" << "\n" << "|";
	for(int i=0; i<=15; i++) cout << " ";
	cout << "Hangman" ; for(int i=0; i<=16; i++) cout << " ";
	cout << "|" << "\n" << "|"; 
	for(int i=0; i<=39; i++) cout << " ";
	cout << "|" << "\n" << "|";

	for(int i=0; i<=1; i++) cout << " ";
	cout << "[1]Practice" ; for(int i=0; i<=26; i++) cout << " ";
	cout << "|" << "\n" << "|"; 
	for(int i=0; i<=1; i++) cout << " ";
	cout << "[2]Normal" ; for(int i=0; i<=28; i++) cout << " ";
	cout << "|" << "\n" << "|"; 
	for(int i=0; i<=1; i++) cout << " ";
	cout << "[3]Time" ; for(int i=0; i<=30; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |----" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |   |" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |   0" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |  /|\\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |  / \\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << " |     " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" << "\n" << "|";
	
	for(int i=0; i<=25; i++) cout << " ";
	cout << "---    " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" ;
	
	for(int i=0; i<=2; i++){
		cout << "\n" <<"|"; for(int i=0; i<=39; i++) cout << " ";
		cout << "|";
	}
	
	cout << "\n" << "|----------------------------------------|";
}




