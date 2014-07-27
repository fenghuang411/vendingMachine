#include "State.h"
void Start::create(){
	my_efsm->change_state(1);
}
void Idle::card(){
	my_efsm->clear_attempt();
	my_efsm->my_op->A1();
	my_efsm->my_op->A2();
	my_efsm->my_op->A3();
	my_efsm->change_state(2);
}
void Check_Pin::incorrect_pin(int max){
	if (my_efsm->get_attempt() < max){
		my_efsm->attempt_incr();
		my_efsm->my_op->A4();
	}
	else{
		my_efsm->my_op->A4();
		my_efsm->my_op->A5();
		my_efsm->my_op->A6();
		my_efsm->change_state(1);
	}
}
void Check_Pin::correct_pin_below_min(){
	my_efsm->my_op->A7();
	my_efsm->change_state(4);
}
void Check_Pin::correct_pin_above_min(){
	my_efsm->my_op->A7();
	my_efsm->change_state(3);
}
void Ready::deposit_no_penalty(){
	my_efsm->my_op->A8();
}
void Ready::withdraw_with_penalty(){
	my_efsm->my_op->A12();
}
void Ready::withdraw_no_penalty(){
	my_efsm->my_op->A11();
}
void Ready::below_min(){
	my_efsm->change_state(4);
}
void Ready::balance(){
	my_efsm->my_op->A9();
}
void Ready::lock(){
	my_efsm->change_state(5);
	my_efsm->my_op->A13();
}
void Ready::exit(){
	my_efsm->my_op->A6();
	my_efsm->change_state(1);
}
void Overdrawn::deposit_no_penalty(){
	my_efsm->my_op->A8();
}
void Overdrawn::deposit_with_penalty(){
	my_efsm->my_op->A10();
}
void Overdrawn::above_min(){
	my_efsm->change_state(3);
}
void Overdrawn::balance(){
	my_efsm->my_op->A9();
}
void Overdrawn::lock(){
	my_efsm->change_state(5);
	my_efsm->my_op->A13();
}
void Overdrawn::exit(){
	my_efsm->my_op->A6();
	my_efsm->change_state(1);
}
void Locked::unlock_ready(){
	my_efsm->change_state(3);
	my_efsm->my_op->A14();
}
void Locked::unlock_overdrawn(){
	my_efsm->change_state(4);
	my_efsm->my_op->A14();
}
