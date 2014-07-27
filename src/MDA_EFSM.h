#ifndef _MDA_EFSM_H
#define _MDA_EFSM_H
#include "State.h"
#include "OP.h"
class State;
class MDA_EFSM{
private:
	State *s;
	State *LS[6];
	int attempt;
public:
	OP *my_op;
	void change_state(int x);
	int get_attempt();
	void clear_attempt();
	void attempt_incr();
	MDA_EFSM();
	~MDA_EFSM();
	void create();
	void card();
	void incorrect_pin(int max);
	void correct_pin_below_min();
	void correct_pin_above_min();
	void deposit_no_penalty();
	void deposit_with_penalty();
	void withdraw_no_penalty();
	void withdraw_with_penalty();
	void above_min();
	void below_min();
	void balance();
	void lock();
	void unlock_ready();
	void unlock_overdrawn();
	void exit();
};
#endif
