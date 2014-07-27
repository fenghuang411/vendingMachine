#ifndef _ATM_H
#define _ATM_H
#include "Data_Store.h"
#include "MDA_EFSM.h"
#include "OP.h"
#include <string>
class ATM{
protected:
	MDA_EFSM *m;
	Data_Store *ds;
	int max_attempt;
	int penalty;
	int min_balance;
public:
	~ATM();
};
class ATM1 : public ATM{
public:
	void create();
	void card(int x, std::string y);
	void pin(std::string x);
	void deposit(int d);
	void withdraw(int w);
	void balance();
	void lock(std::string x);
	void unlock(std::string x);
	void exit();
};
class ATM2 : public ATM{
public:
	void create();
	void CARD(float x, int y);
	void PIN(int x);
	void DEPOSIT(float d);
	void WITHDRAW(float w);
	void BALANCE();
	void EXIT();
};
class ATM3 : public ATM{
public:
	void create();
	void card(int x, int y);
	void pin(int x);
	void deposit(int d);
	void withdraw(int w);
	void balance();
	void lock();
	void unlock();
	void exit();
};
#endif
