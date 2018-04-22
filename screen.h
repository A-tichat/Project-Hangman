#include <iostream>
using namespace std;

void Home(){
	cout << "|"; for (int i=0;i<=76;i++)cout << "-"; cout << "|\n|";
	for(int i=0; i<=34; i++) cout << " ";
	cout << "Hangman" ; for(int i=0; i<=34; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=76; i++) cout << " ";
	cout << "|\n|";
//menu selection mode game
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(1)Mode Practice" ; for(int i=0; i<=58; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(2)Mode Normal" ; for(int i=0; i<=60; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(3)Mode Time" ; for(int i=0; i<=62; i++) cout << " ";
	cout << "|\n|";
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(4)Mode Advance" ; for(int i=0; i<=59; i++) cout << " ";
	cout << "|\n|";
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(5)Mode Develope" ; for(int i=0; i<=58; i++) cout << " ";
	cout << "|\n|";
	for(int i=0; i<=1; i++) cout << " ";
	cout << "(6)Quit game" ; for(int i=0; i<=62; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |----" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |   |" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |   0" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |  /|\\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |  / \\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |     " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << "---    " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" ;
	
	for(int i=0; i<=6; i++){
		cout << "\n" <<"|"; for(int i=0; i<=76; i++) cout << " ";
		cout << "|";
	}
	
	cout << "\n|"; for (int i=0;i<=76;i++)cout << "-"; cout << "|";
}

void selection(){
	cout << "|"; for (int i=0;i<=76;i++)cout << "-";
	cout << "|\n|";
	for(int i=0; i<=34; i++) cout << " ";
	cout << "Hangman" ; for(int i=0; i<=34; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=76; i++) cout << " ";
	cout << "|\n|";
//menu selection vocabulaly
	for(int i=0; i<=1; i++) cout << " ";
	cout << "Vocabulary about: " ; for(int i=0; i<=56; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=76; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=3; i++) cout << " ";
	cout << "(1)Animal" ; for(int i=0; i<=63; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=3; i++) cout << " ";
	cout << "(2)Country" ; for(int i=0; i<=62; i++) cout << " ";
	cout << "|\n|"; 
	for(int i=0; i<=3; i++) cout << " ";
	cout << "(3)Fruits" ; for(int i=0; i<=63; i++) cout << " ";
	cout << "|\n|";
	for(int i=0; i<=3; i++) cout << " ";
	cout << "(4)Body" ; for(int i=0; i<=65; i++) cout << " ";
	cout << "|\n|";
//end menu
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |----" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |   |" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |   0" ; for(int i=0; i<=7; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |  /|\\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |  / \\" ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << " |     " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|\n|";
	
	for(int i=0; i<=62; i++) cout << " ";
	cout << "---    " ; for(int i=0; i<=6; i++) cout << " ";
	cout << "|" ;
	
	for(int i=0; i<=6; i++){cout << "\n" <<"|"; for(int i=0; i<=76; i++) cout << " ";	cout << "|";}
	
	cout << "\n|"; for (int i=0;i<=76;i++)cout << "-"; cout << "|";
}
