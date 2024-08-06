/*****************	
 *	Bryan Ripley *
 *	Week 06 Hw   *
 *	CIS 246 	 *
 *****************/

#include <string> 
 
class Player{

private:
	
	int play;
	
public:
	
	int getPlay() const{
	//for extra credit
		
		return play;
	}
	
	std::string returnPlay() const{
	//returns string value of play	
		switch(getPlay()){
			
			case 1:
			//1 = rock	
				return "rock";
				break;
			
			case 2:
			//2 = paper	
				return "paper";
				break;
			
			case 3:
			//3 = scissors	
				return "scissors";
				break;		
		}		
	}
	
	int setPlay(std::string str){
	//selection controlled overloaded set function
		bool check = false;
		while (check != true)
			if (str == "rock"){
			
				play = 1;
				check = true;
			}	
		
			else if (str == "paper"){
			
				play = 2;	
				check = true;
			}
		
			else if (str == "scissors"){
			
				play = 3;
				check = true;
			}
			else{
				std::cout << "Incorrect input, please type rock, paper, or scissors: ";
				std::cin >> str;
			}
	}
	
	void setPlay(int set) {
	//regular overloaded set function
		
		play = set;	
	}
	
};

