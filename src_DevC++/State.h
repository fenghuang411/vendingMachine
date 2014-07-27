#ifndef _STATE_H
#define _STATE_H
#include "MDA_EFSM.h"
class MDA_EFSM;
// state pattern -- the decentralized version
class State{
protected:
	MDA_EFSM *my_efsm;
public:
	State(MDA_EFSM *e):my_efsm(e){}
	virtual void create(){}
	virtual void card(){}
	virtual void incorrect_pin(int max){}
	virtual void correct_pin_below_min(){}
	virtual void correct_pin_above_min(){}
	virtual void deposit_no_penalty(){}
	virtual void deposit_with_penalty(){}
	virtual void withdraw_with_penalty(){}
	virtual void withdraw_no_penalty(){}
	virtual void above_min(){}
	virtual void below_min(){}
	virtual void balance(){}
	virtual void lock(){}
	virtual void exit(){}
	virtual void unlock_ready(){}
	virtual void unlock_overdrawn(){}
};
class Start : public State{
public:
	Start(MDA_EFSM *e):State(e){}
	void create();
};
class Idle : public State{
public:
	Idle(MDA_EFSM *e):State(e){}
	void card();
};
class Check_Pin : public State{
public:
	Check_Pin(MDA_EFSM *e):State(e){}
	void incorrect_pin(int max);
	void correct_pin_below_min();
	void correct_pin_above_min();
};
class Ready : public State{
public:
	Ready(MDA_EFSM *e):State(e){}
	void deposit_no_penalty();
	void withdraw_with_penalty();
	void withdraw_no_penalty();
	void below_min();
	void balance();
	void lock();
	void exit();
};
class Overdrawn : public State{
public:
	Overdrawn(MDA_EFSM *e):State(e){}
	void deposit_no_penalty();
	void deposit_with_penalty();
	void above_min();
	void balance();
	void lock();
	void exit();
};
class Locked : public State{
public:
	Locked(MDA_EFSM *e):State(e){}
	void unlock_ready();
	void unlock_overdrawn();
};
#endif
