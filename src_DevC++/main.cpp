#include <iostream>
#include <stdio.h>
#include <limits>
#include "Parser.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void welcome_prompt();
int main(int argc, char** argv) {
	welcome_prompt();
	return 0;
}
void welcome_prompt(){
	cout << "     CS586 14F Project"<<endl;
	cout << "       MDA-EFSM-ATM  "<<endl;
	cout << "------------------------------\n\n\n\n"<<endl;
	int i;
	bool retry_flag = false;
	Parser *parser;
	do{
		cout << "select ATM-1, ATM-2, or ATM-3"<<endl;
		cout << " 1 = ATM-1\n 2 = ATM-2\n 3 = ATM-3"<<endl;
		cout << ">";
		i = 0;
		cin >> i;
		switch(i){
		case 1 :
			cout << "you selected ATM-1"<<endl;
			retry_flag = false;
			parser = new Parser_1();
			break;
		case 2 :
			cout << "you selected ATM-2"<<endl;
			retry_flag = false;
			parser = new Parser_2();
			break;
		case 3 :
			cout << "you selected ATM-3"<<endl;
			retry_flag = false;
			parser = new Parser_3();
			break;
		default :
			cout << "input error"<<endl;
			retry_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}while(retry_flag);
	
	parser->start_atm();
}
