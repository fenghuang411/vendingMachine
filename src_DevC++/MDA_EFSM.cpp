#include "MDA_EFSM.h"
void MDA_EFSM::change_state(int x){
	if (x>=0 && x<=5)
	s = LS[x];
}
int MDA_EFSM::get_attempt(){
	return attempt;
}
void MDA_EFSM::clear_attempt(){
	attempt = 0;
}
void MDA_EFSM::attempt_incr(){
	attempt++;
}
MDA_EFSM::MDA_EFSM(){
	LS[0] = new Start(this);
	LS[1] = new Idle(this);
	LS[2] = new Check_Pin(this);
	LS[3] = new Ready(this);
	LS[4] = new Overdrawn(this);
	LS[5] = new Locked(this);
	s = LS[0];
} 
MDA_EFSM::~MDA_EFSM(){
	delete[] LS;
	delete my_op;
}
void MDA_EFSM::create(){
	s->create();
}
void MDA_EFSM::card(){
	s->card();
}
void MDA_EFSM::incorrect_pin(int max){
	s->incorrect_pin(max);
}
void MDA_EFSM::correct_pin_below_min(){
	s->correct_pin_below_min();
}
void MDA_EFSM::correct_pin_above_min(){
	s->correct_pin_above_min();
}
void MDA_EFSM::deposit_no_penalty(){
	s->deposit_no_penalty();
}
void MDA_EFSM::deposit_with_penalty(){
	s->deposit_with_penalty();
}
void MDA_EFSM::withdraw_no_penalty(){
	s->withdraw_no_penalty();
}
void MDA_EFSM::withdraw_with_penalty(){
	s->withdraw_with_penalty();
}
void MDA_EFSM::above_min(){
	s->above_min();
}
void MDA_EFSM::below_min(){
	s->below_min();
}
void MDA_EFSM::balance(){
	s->balance();
}
void MDA_EFSM::lock(){
	s->lock();
}
void MDA_EFSM::unlock_ready(){
	s->unlock_ready();
}
void MDA_EFSM::unlock_overdrawn(){
	s->unlock_overdrawn();
}
void MDA_EFSM::exit(){
	s->exit();
}
