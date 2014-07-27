#include "ATM.h"
/* ATM */
ATM::~ATM(){
	delete ds;
	delete m; // will delete op subsequentially
}
/* ATM1 */
void ATM1::create(){
	// init atm-dependent data
	max_attempt = 3;
	penalty = 10;
	min_balance = 1000;
	// create Data_Store object
	ds = new DS_atm1();
	ds->penalty = penalty;
	// create OP object and init it, op will be delete in MDA_EFSM
	OP *op = new OP();
	op->ds = ds;
	op->init(new Concrete_Factory_1());
	// create MDA_EFSM and init it
	m = new MDA_EFSM();
	m->my_op = op;
	m->create();
}
void ATM1::card(int x, std::string y){
	// store data to temp storage, for latter OP to use
	((DS_atm1 *)ds)->temp_balance = x;
	((DS_atm1 *)ds)->temp_pin = y;
	m->card();
}
void ATM1::pin(std::string x){
	if (((DS_atm1 *)ds)->pin == x){
		if (((DS_atm1 *)ds)->balance < min_balance)
			// go to overdrawn state
			m->correct_pin_below_min();
		else
			// go to ready state
			m->correct_pin_above_min();	
	}
	else
		m->incorrect_pin(max_attempt);
}
void ATM1::deposit(int d){
	// store desposit number to temp storage
	((DS_atm1 *)ds)->deposit = d;
	// decide if penalty involved
	if (((DS_atm1 *)ds)->balance + d > min_balance)
		m->deposit_no_penalty();
	else 
		m->deposit_with_penalty();
	// decide whether to move state to ready
	if (((DS_atm1 *)ds)->balance >= min_balance)
		m->above_min();
}
void ATM1::withdraw(int w){
	// store withdraw value to temp storage
	((DS_atm1 *)ds)->withdraw = w;
	// decide whether take the penalty
	if (((DS_atm1 *)ds)->balance - w >= min_balance)
		m->withdraw_no_penalty();
	else if (((DS_atm1 *)ds)->balance - w > 0 ){
		m->withdraw_with_penalty();
		// move to overdrawn state
		m->below_min();
	}
}
void ATM1::balance(){
	m->balance();
}
void ATM1::lock(std::string x){
	if (((DS_atm1 *)ds)->pin == x)
		m->lock();
}
void ATM1::unlock(std::string x){
	if (((DS_atm1 *)ds)->pin == x){
		// choose which state to go back according to balance
		if (((DS_atm1 *)ds)->balance >= min_balance)
			m->unlock_ready();
		else
			m->unlock_overdrawn();
	}
}
void ATM1::exit(){
	// back to Idle state
	m->exit();
}
/* ATM2 */
void ATM2::create(){
	// init atm-dependent data
	max_attempt = 2;
	penalty = 20;
	min_balance = 500;
	// create Data_Store object
	ds = new DS_atm2();
	ds->penalty = penalty;
	// create OP object and init it
	OP *op = new OP();
	op->ds = ds;
	op->init(new Concrete_Factory_2());
	// create MDA_EFSM and init it
	m = new MDA_EFSM();
	m->my_op = op;
	m->create();
}
void ATM2::CARD(float x, int y){
	// store data to temp storage, for latter OP to use
	((DS_atm2 *)ds)->temp_balance = x;
	((DS_atm2 *)ds)->temp_pin = y;
	m->card();
}
void ATM2::PIN(int x){
	if (((DS_atm2 *)ds)->pin == x){
		if (((DS_atm2 *)ds)->balance < min_balance)
			// go to overdrawn state
			m->correct_pin_below_min();
		else
			// go to ready state
			m->correct_pin_above_min();	
	}
	else
		m->incorrect_pin(max_attempt);
}
void ATM2::DEPOSIT(float d){
	// store desposit number to temp storage
	((DS_atm2 *)ds)->deposit = d;
	// decide if penalty involved
	if (((DS_atm2 *)ds)->balance + d > min_balance)
		m->deposit_no_penalty();
	else 
		m->deposit_with_penalty();
	// decide whether to move state to ready
	if (((DS_atm2 *)ds)->balance >= min_balance)
		m->above_min();
}
void ATM2::WITHDRAW(float w){
	// store withdraw value to temp storage
	((DS_atm2 *)ds)->withdraw = w;
	// decide whether take the penalty
	if (((DS_atm2 *)ds)->balance - w >= min_balance)
		m->withdraw_no_penalty();
	else if (((DS_atm2 *)ds)->balance - w > 0 ){
		m->withdraw_with_penalty();
		// move to overdrawn state
		m->below_min();
	}
}
void ATM2::BALANCE(){
	m->balance();
}
void ATM2::EXIT(){
	// back to Idle state
	m->exit();
}
/* ATM3 */
void ATM3::create(){
// init atm-dependent data
	max_attempt = 1;
	penalty = 0;
	min_balance = 100;
	// create Data_Store object
	ds = new DS_atm3();
	ds->penalty = penalty;
	// create OP object and init it
	OP *op = new OP();
	op->ds = ds;
	op->init(new Concrete_Factory_3());
	// create MDA_EFSM and init it
	m = new MDA_EFSM();
	m->my_op = op;
	m->create();
}
void ATM3::card(int x, int y){
	// store data to temp storage, for latter OP to use
	((DS_atm3 *)ds)->temp_balance = x;
	((DS_atm3 *)ds)->temp_pin = y;
	m->card();
}
void ATM3::pin(int x){
	if (((DS_atm3 *)ds)->pin == x){
		if (((DS_atm3 *)ds)->balance < min_balance)
			// go to overdrawn state
			m->correct_pin_below_min();
		else
			// go to ready state
			m->correct_pin_above_min();	
	}
	else
		m->incorrect_pin(max_attempt);
}
void ATM3::deposit(int d){
	// store desposit number to temp storage
	((DS_atm3 *)ds)->deposit = d;
	// decide if penalty involved
	if (((DS_atm3 *)ds)->balance + d > min_balance)
		m->deposit_no_penalty();
	else 
		m->deposit_with_penalty();
	// decide whether to move state to ready
	if (((DS_atm3 *)ds)->balance >= min_balance)
		m->above_min();
}
void ATM3::withdraw(int w){
	// store withdraw value to temp storage
	((DS_atm3 *)ds)->withdraw = w;
	// decide whether take the penalty
	if (((DS_atm3 *)ds)->balance - w >= min_balance)
		m->withdraw_no_penalty();
	else if (((DS_atm3 *)ds)->balance - w > 0 ){
		m->withdraw_with_penalty();
		// move to overdrawn state
		m->below_min();
	}
}
void ATM3::balance(){
	m->balance();
}
void ATM3::lock(){
	m->lock();
}
void ATM3::unlock(){
	// choose which state to go back according to balance
	if (((DS_atm1 *)ds)->balance >= min_balance)
		m->unlock_ready();
	else
		m->unlock_overdrawn();
}
void ATM3::exit(){
	// back to Idle state
	m->exit();
}

