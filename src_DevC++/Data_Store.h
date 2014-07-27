#ifndef _DATA_STORE_H
#define _DATA_STORE_H
#include <string>
class Data_Store{
public:
	int penalty;
};
class DS_atm1 : public Data_Store{
public:
	int balance;
	int temp_balance;
	std::string pin; 
	std::string temp_pin; 
	int deposit;
	int withdraw;
};
class DS_atm2 : public Data_Store{
public:
	float balance;
	float temp_balance;
	int pin; 
	int temp_pin; 
	float deposit;
	float withdraw;
};
class DS_atm3 : public Data_Store{
public:
	int balance;
	int temp_balance;
	int pin; 
	int temp_pin;
	int deposit;
	int withdraw;
};
#endif
