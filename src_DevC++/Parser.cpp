#include "Parser.h"
using namespace std;
void Parser_1::start_atm(){
	ATM1 *atm1 = new ATM1();
	atm1->create();
	cout << "ATM-1 created"<<endl;
	
	bool quit_flag = true; // quit when false, otherwise loop for input
	int x;
	int temp_int;
	string temp_str;
	do{
		cout << "\tMenu of Operations\n\
	1.card(int,string)\n\
	2.pin(string)\n\
	3.deposit(int)\n\
	4.withdraw(int)\n\
	5.balance()\n\
	6.lock(string)\n\
	7.unlock(string)\n\
	8.exit()\n\
	9.quit the demo\n";
		cout <<"Select Operation : \n>";
		cin >> x;
		switch(x){
		case 1:
			cout<<"selected : card(int x,string y)\ndefine balance x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			while (!(cin >> temp_int)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define balance x :\n>";
			};
			cout << "define pin y:\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,temp_str);
			atm1->card(temp_int,temp_str);
			quit_flag = true;
			break;
		case 2:
			cout<<"selected : pin(string x)\ninput pin x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,temp_str);
			atm1->pin(temp_str);
			quit_flag = true;
			break;
		case 3:
			cout<<"selected : deposit(int d)\ndefine amount d :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define amount d :\n>";
			};
      atm1->deposit(temp_int);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 4:
			cout<<"selected : withdraw(int w)\ndefine amount w :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define amount w :\n>";
			};
      atm1->withdraw(temp_int);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 5:
			cout<<"selected : balance()\n";
			atm1->balance();
			quit_flag = true;
			break;
		case 6:
			cout<<"selected : lock(string x)\nprovide pin :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,temp_str);
			atm1->lock(temp_str);
			quit_flag = true;
			break;
		case 7:
			cout<<"selected : unlock(string x)\nprovide pin :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,temp_str);
			atm1->unlock(temp_str);
			quit_flag = true;
			break;
		case 8:
			cout<<"selected : exit()\n>";
			atm1->exit();
			quit_flag = true;
			break;
		case 9:
			cout << "quit demo"<<endl;
			quit_flag = false;
			break;
		default :
			cout << "input error"<<endl;
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}while(quit_flag);
}
void Parser_2::start_atm(){
	ATM2 *atm2 = new ATM2();
	atm2->create();
	cout << "ATM-2 created"<<endl;
	
	bool quit_flag = true; // quit when false, otherwise loop for input
	int x;
	int temp_int;
	float temp_flt;
	do{
		cout << "\tMenu of Operations\n\
	1.CARD(float,int)\n\
	2.PIN(int)\n\
	3.DEPOSIT(float)\n\
	4.WITHDRAW(float)\n\
	5.BALANCE()\n\
	6.EXIT()\n\
	7.quit the demo\n";
		cout <<"Select Operation : \n>";
		cin >> x;
		switch(x){
		case 1:
			cout<<"selected : CARD(float x,int y)\ndefine balance x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_flt)){
				cout << " input float wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define balance x :\n>";
			};
			cout << "define pin y:\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define pin y :\n>";
			};
			atm2->CARD(temp_flt,temp_int);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 2:
			cout<<"selected : PIN(int x)\ninput pin x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define pin y :\n>";
			};
			atm2->PIN(temp_int);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 3:
			cout<<"selected : DEPOSIT(float d)\ndefine amount d :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_flt)){
				cout << " input float wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define pin y :\n>";
			};
      atm2->DEPOSIT(temp_flt);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 4:
			cout<<"selected : WITHDRAW(float w)\ndefine amount w :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_flt)){
				cout << " input float wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define pin y :\n>";
			};
      atm2->WITHDRAW(temp_flt);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 5:
			cout<<"selected : BALANCE()\n";
			atm2->BALANCE();
			quit_flag = true;
			break;
		case 6:
			cout<<"selected : EXIT()\n>";
			atm2->EXIT();
			quit_flag = true;
			break;
		case 7:
			cout << "quit demo"<<endl;
			quit_flag = false;
			break;
		default :
			cout << "input error"<<endl;
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}while(quit_flag);
}
void Parser_3::start_atm(){
	ATM3 *atm3 = new ATM3();
	atm3->create();
	cout << "ATM-3 created"<<endl;
	
	bool quit_flag = true; // quit when false, otherwise loop for input
	int x;
	int temp_int1;
	int temp_int2;
	do{
		cout << "\tMenu of Operations\n\
	1.card(int,int)\n\
	2.pin(int)\n\
	3.deposit(int)\n\
	4.withdraw(int)\n\
	5.balance()\n\
	6.lock(int)\n\
	7.unlock(int)\n\
	8.exit()\n\
	9.quit the demo\n";
		cout <<"Select Operation : \n>";
		cin >> x;
		switch(x){
		case 1:
			cout<<"selected : card(int x,int y)\ndefine balance x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			while (!(cin >> temp_int1)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define balance x :\n>";
			};
			cout << "define pin y:\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int2)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define pin y :\n>";
			};
			atm3->card(temp_int1,temp_int2);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 2:
			cout<<"selected : pin(int x)\ninput pin x :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int1)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"input pin x :\n>";
			};
			atm3->pin(temp_int1);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 3:
			cout<<"selected : deposit(int d)\ndefine amount d :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int1)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define amount d :\n>";
			};
      atm3->deposit(temp_int1);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 4:
			cout<<"selected : withdraw(int w)\ndefine amount w :\n>";
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!(cin >> temp_int1)){
				cout << " input int wrong"<<endl;
				cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
      	cout<<"define amount w :\n>";
			};
      atm3->withdraw(temp_int1);
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		case 5:
			cout<<"selected : balance()\n";
			atm3->balance();
			quit_flag = true;
			break;
		case 6:
			cout<<"selected : lock()\n";
			atm3->lock();
			quit_flag = true;
			break;
		case 7:
			cout<<"selected : unlock()\n";
			atm3->unlock();
			quit_flag = true;
			break;
		case 8:
			cout<<"selected : exit()\n>";
			atm3->exit();
			quit_flag = true;
			break;
		case 9:
			cout << "quit demo"<<endl;
			quit_flag = false;
			break;
		default :
			cout << "input error"<<endl;
			quit_flag = true;
			cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}while(quit_flag);
}

