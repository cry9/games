/*****************	
 *	Bryan Ripley *
 *	Week 06 Hw   *
 *	CIS 246 	 *
 *****************/
 
#include <iostream>
#include <cstdlib> 
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Game.h"

using namespace std;

static void find_winner(string, string);
static void find_winner(int, int);
//for extra credit

int main(){
	
	Player plyr;
	Player opp;
	//create two objects
	
	int choice;
	//for extra credit
	
	string str;
	//creates a string variable
	
	cout << "\nWelcome to Rock Paper Scissors\n";
	//displays the title of the program to user
	
	cout << "\n1. Play by typing out the words";
	cout << "\n2. Play by typing numbers";
	cout << "\n3. Exit\n";
	cout << "\nWhat is your choice? ";
	cin >> choice;
	//extra credit
	
	if (choice == 1){
		
		cout << "\n";
		//new line
		
		cout << "\nType rock, paper, or scissors: ";
		//prompts the user
		
		cin >> str;
		//take input
		
		plyr.setPlay(str);
		//set the play
		
		srand(time(0));
		//seed random number
	
		int random_number = 1 + (rand() % 3);
		//generates a random number between 1 and 3
	
		opp.setPlay(random_number);
		//the overloaded set function with int parameter
		
		find_winner(plyr.returnPlay(), opp.returnPlay());
		//call find_winner and pass the strings returned from the header file
	}
	
	else if (choice == 2){
		
		cout << "\n";
		//new line
		
		cout << "\nType 1 for rock, 2 for paper, 3 for scissors: ";
		//prompts the user for their move
		
		cin >> choice;
		//take input
		
		plyr.setPlay(choice);
		//set the play for the player
		
		srand(time(0));
		//seed random number
	
		int random_number = 1 + (rand() % 3);
		//generates a random number between 1 and 3
	
		opp.setPlay(random_number);
		//the overloaded set function with int parameter 
		
		find_winner(plyr.getPlay(), opp.getPlay());
		//call find_winner and pass the appropriate functions that return integers
	}
	
	else{
		
		exit(1);
		//exit
	}

}

static void find_winner(int playr, int comptr){
//extra credit overloaded function with integer arguments
	int winner;
	
	if (playr == comptr){//if the computer has the same move as player
		
		winner = 1;
		//its a tie
		
	}
	
	else if (playr==1&&comptr==3||playr==2&&comptr==1||playr==3&&comptr==2){
	// if the player has a winning move versus the computer
		  	
		winner = 2;
		//player wins
	}
	
	else {// if the computer has a winning match
	
		winner = 3;
		//computer wins
	}
	
	string play, computer;
	//to print each move	
	
	switch(playr){
	//in order to display player's move	
	
		case 1:
			
			play = "rock";
			break;
		
		case 2:
			
			play = "paper";
			break;
		
		case 3:
			
			play = "scissors";
			break;
	}	
	
	switch(comptr){
	//in order to display player's move	
	
		case 1:
			
			computer = "rock";
			break;
		
		case 2:
			
			computer = "paper";
			break;
		
		case 3:
			
			computer = "scissors";
			break;
	}
	
	cout << "\nYou played: " << play;
	cout << "\nComputer played: " << computer;
	cout << "\n";
	//display the moves made by both player and computer
	
	switch(winner){	//Display results		
		
		case 1:
		//if a tie	
//			string a;
			cout << "\nIt's a tie\n";
//			cin >> a;
//			system("cls") ;
			main();
			
		case 2:
		//if player wins
//			string b;	
			cout << "\nPlayer wins\n";
//			cin >> b;
//			system("cls");
			main();
		
		case 3:
		//if computer wins
//			string c;	
			cout << "\nComputer wins\n";
//			cin >> c
//			system("cls");
			main();
	}        
}

static void find_winner(string playr, string comptr){
//extra credit overloaded function with string arguments	
	int winner;
	
	if (playr == comptr){//if the computer has the same move as player
		
		winner = 1;
		//its a tie
		
	}
	
	else if (playr=="rock"&&comptr=="scissors"||playr=="paper"&&comptr=="rock"||playr=="scissors"&&comptr=="paper"){
	// if the player has a winning move versus the computer
		  	
		winner = 2;
		//player wins
	}
	
	else {// if the computer has a winning match
	
		winner = 3;		
		//computer wins
	}	
		
	cout << "\nYou played: " << playr;
	cout << "\nComputer played: " << comptr;
	cout << "\n";
	//display the moves made by both player and computer
	
	switch(winner){	//Display results		
		
		case 1:
		//if a tie	
//			string a;
			cout << "\nIt's a tie\n";
//			cin >> a;
//			system("cls");
			main();
			
		case 2:
		//if player wins
//			string b;	
			cout << "\nPlayer wins\n";
//			cin >> b;
//			system("cls");
			main();
		
		case 3:
		//if computer wins
//			string c;	
			cout << "\nComputer wins\n";
//			cin >> c;
//			system("cls");
			main();
	}
	
}
