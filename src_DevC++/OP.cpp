#include "OP.h"
	// store pin
void A1_1::A1(Data_Store *ds){
	((DS_atm1 *)ds)->pin = ((DS_atm1 *)ds)->temp_pin;
}
void A1_2::A1(Data_Store *ds){
	((DS_atm2 *)ds)->pin = ((DS_atm2 *)ds)->temp_pin;
}
void A1_3::A1(Data_Store *ds){
	((DS_atm3 *)ds)->pin = ((DS_atm3 *)ds)->temp_pin;
}
	// store balance
void A2_1::A2(Data_Store *ds){
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->temp_balance;
}
void A2_2::A2(Data_Store *ds){
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->temp_balance;
}
void A2_3::A2(Data_Store *ds){
	((DS_atm3 *)ds)->balance = ((DS_atm3 *)ds)->temp_balance;
}
	// prompt for pin
void A3_1::A3(Data_Store *ds){
	std::cout<<"ATM-1: please input pin ..."<<std::endl;
}
void A3_2::A3(Data_Store *ds){
	std::cout<<"ATM-2: please input pin ..."<<std::endl;
}
void A3_3::A3(Data_Store *ds){
	std::cout<<"ATM-3: please input pin ..."<<std::endl;
}
	// incorrect pin message
void A4_1::A4(Data_Store *ds){
	std::cout<<"ATM-1: incorrect pin ..."<<std::endl;
}
void A4_2::A4(Data_Store *ds){
	std::cout<<"ATM-2: incorrect pin ..."<<std::endl;
}
void A4_3::A4(Data_Store *ds){
	std::cout<<"ATM-3: incorrect pin ..."<<std::endl;
}
	// too many attempts message
void A5_1::A5(Data_Store *ds){
	std::cout<<"ATM-1: too many attempts ..."<<std::endl;
}
void A5_2::A5(Data_Store *ds){
	std::cout<<"ATM-2: too many attempts ..."<<std::endl;
}
void A5_3::A5(Data_Store *ds){
	std::cout<<"ATM-3: too many attempts ..."<<std::endl;
}
	// eject card
void A6_1::A6(Data_Store *ds){
	std::cout<<"ATM-1: card ejected ..."<<std::endl;
}
void A6_2::A6(Data_Store *ds){
	std::cout<<"ATM-2: card ejected ..."<<std::endl;
}
void A6_3::A6(Data_Store *ds){
	std::cout<<"ATM-3: card ejected ..."<<std::endl;
}
	// display menu
void A7_1::A7(Data_Store *ds){
	std::cout<<"ATM-1: pin correct, Welcome Back !"<<std::endl;
}
void A7_2::A7(Data_Store *ds){
	std::cout<<"ATM-2: pin correct, Welcome Back !"<<std::endl;
}
void A7_3::A7(Data_Store *ds){
	std::cout<<"ATM-3: pin correct, Welcome Back !"<<std::endl;
}
	// make deposit no penalty
void A8_1::A8(Data_Store *ds){
	std::cout<<"ATM-1: deposit "<<((DS_atm1 *)ds)->deposit<<" to balance "<<((DS_atm1 *)ds)->balance<<std::endl;
	((DS_atm1 *)ds)->balance = ((DS_atm1 *)ds)->balance + ((DS_atm1 *)ds)->deposit; 
}
void A8_2::A8(Data_Store *ds){
	std::cout<<"ATM-2: deposit "<<((DS_atm2 *)ds)->deposit<<" to balance "<<((DS_atm2 *)ds)->balance<<std::endl;
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->balance + ((DS_atm2 *)ds)->deposit; 
}
void A8_3::A8(Data_Store *ds){
	std::cout<<"ATM-3: deposit "<<((DS_atm3 *)ds)->deposit<<" to balance "<<((DS_atm3 *)ds)->balance<<std::endl;
	((DS_atm3 *)ds)->balance = ((DS_atm3 *)ds)->balance + ((DS_atm3 *)ds)->deposit; 
}
	// display balance
void A9_1::A9(Data_Store *ds){
	std::cout<<"ATM-1: balance = "<<((DS_atm1 *)ds)->balance <<std::endl;
}
void A9_2::A9(Data_Store *ds){
	std::cout<<"ATM-2: balance = "<<((DS_atm2 *)ds)->balance <<std::endl;
}
void A9_3::A9(Data_Store *ds){
	std::cout<<"ATM-3: balance = "<<((DS_atm3 *)ds)->balance <<std::endl;
}
	//  make deposit with penalty
void A10_1::A10(Data_Store *ds){
	std::cout<<"ATM-1: deposit "<<((DS_atm1 *)ds)->deposit<<" to balance "<<((DS_atm1 *)ds)->balance<<" , penalty="<<ds->penalty<<std::endl;
	((DS_atm1 *)ds)->balance = ((DS_atm1 *)ds)->balance + ((DS_atm1 *)ds)->deposit - ds->penalty; 
}
void A10_2::A10(Data_Store *ds){
	std::cout<<"ATM-2: deposit "<<((DS_atm2 *)ds)->deposit<<" to balance "<<((DS_atm2 *)ds)->balance<<" , penalty="<<ds->penalty<<std::endl;
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->balance + ((DS_atm2 *)ds)->deposit - ds->penalty; 
}
void A10_3::A10(Data_Store *ds){
	std::cout<<"ATM-3: deposit "<<((DS_atm3 *)ds)->deposit<<" to balance "<<((DS_atm3 *)ds)->balance<<" , penalty="<<ds->penalty<<std::endl;
	((DS_atm3 *)ds)->balance = ((DS_atm3 *)ds)->balance + ((DS_atm3 *)ds)->deposit - ds->penalty; 
}
	// withdraw no penalty
void A11_1::A11(Data_Store *ds){
	std::cout<<"ATM-1: withdraw = "<<((DS_atm1 *)ds)->withdraw <<std::endl;
	((DS_atm1 *)ds)->balance = ((DS_atm1 *)ds)->balance - ((DS_atm1 *)ds)->withdraw;
}
void A11_2::A11(Data_Store *ds){
	std::cout<<"ATM-2: withdraw = "<<((DS_atm2 *)ds)->withdraw <<std::endl;
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->balance - ((DS_atm2 *)ds)->withdraw;
}
void A11_3::A11(Data_Store *ds){
	std::cout<<"ATM-3: withdraw = "<<((DS_atm3 *)ds)->withdraw <<std::endl;
	((DS_atm3 *)ds)->balance = ((DS_atm3 *)ds)->balance - ((DS_atm3 *)ds)->withdraw;
}
	// withdraw with penalty
void A12_1::A12(Data_Store *ds){
	std::cout<<"ATM-1: withdraw = "<<((DS_atm1 *)ds)->withdraw <<" with penalty="<<ds->penalty<<std::endl;
	((DS_atm1 *)ds)->balance = ((DS_atm1 *)ds)->balance - ((DS_atm1 *)ds)->withdraw - ds->penalty;
}
void A12_2::A12(Data_Store *ds){
	std::cout<<"ATM-2: withdraw = "<<((DS_atm2 *)ds)->withdraw <<" with penalty="<<ds->penalty<<std::endl;
	((DS_atm2 *)ds)->balance = ((DS_atm2 *)ds)->balance - ((DS_atm2 *)ds)->withdraw - ds->penalty;
}
void A12_3::A12(Data_Store *ds){
	std::cout<<"ATM-3: withdraw = "<<((DS_atm3 *)ds)->withdraw <<" with penalty="<<ds->penalty<<std::endl;
	((DS_atm3 *)ds)->balance = ((DS_atm3 *)ds)->balance - ((DS_atm3 *)ds)->withdraw - ds->penalty;
}
	// lock
void A13_1::A13(Data_Store *ds){
	std::cout<<"ATM-1: Locked"<<std::endl;
}
void A13_2::A13(Data_Store *ds){
	// left blank
}
void A13_3::A13(Data_Store *ds){
	std::cout<<"ATM-3: Locked"<<std::endl;
}
	// unlock
void A14_1::A14(Data_Store *ds){
	std::cout<<"ATM-1: unLocked"<<std::endl;
}
void A14_2::A14(Data_Store *ds){
	// left blank
}
void A14_3::A14(Data_Store *ds){
	std::cout<<"ATM-3: unLocked"<<std::endl;
}
A1C *Concrete_Factory_1::create_a1(){
	return new A1_1(); 
}
A2C *Concrete_Factory_1::create_a2(){
		return new A2_1(); 
}
A3C *Concrete_Factory_1::create_a3(){
	return new A3_1(); 
}
A4C *Concrete_Factory_1::create_a4(){
	return new A4_1(); 
}
A5C *Concrete_Factory_1::create_a5(){
	return new A5_1(); 
}
A6C *Concrete_Factory_1::create_a6(){
	return new A6_1(); 
}
A7C *Concrete_Factory_1::create_a7(){
	return new A7_1(); 
}
A8C *Concrete_Factory_1::create_a8(){
	return new A8_1(); 
}
A9C *Concrete_Factory_1::create_a9(){
	return new A9_1(); 
}
A10C *Concrete_Factory_1::create_a10(){
	return new A10_1(); 
}
A11C *Concrete_Factory_1::create_a11(){
	return new A11_1(); 
}
A12C *Concrete_Factory_1::create_a12(){
	return new A12_1(); 
}
A13C *Concrete_Factory_1::create_a13(){
	return new A13_1(); 
}
A14C *Concrete_Factory_1::create_a14(){
	return new A14_1(); 
}
A1C *Concrete_Factory_2::create_a1(){
	return new A1_2(); 
}
A2C *Concrete_Factory_2::create_a2(){
	return new A2_2(); 
}
A3C *Concrete_Factory_2::create_a3(){
	return new A3_2(); 
}
A4C *Concrete_Factory_2::create_a4(){
	return new A4_2(); 
}
A5C *Concrete_Factory_2::create_a5(){
	return new A5_2(); 
}
A6C *Concrete_Factory_2::create_a6(){
	return new A6_2(); 
}
A7C *Concrete_Factory_2::create_a7(){
	return new A7_2(); 
}
A8C *Concrete_Factory_2::create_a8(){
	return new A8_2(); 
}
A9C *Concrete_Factory_2::create_a9(){
	return new A9_2(); 
}
A10C *Concrete_Factory_2::create_a10(){
	return new A10_2(); 
}
A11C *Concrete_Factory_2::create_a11(){
	return new A11_2(); 
}
A12C *Concrete_Factory_2::create_a12(){
	return new A12_2(); 
}
A13C *Concrete_Factory_2::create_a13(){
	return new A13_2(); 
}
A14C *Concrete_Factory_2::create_a14(){
	return new A14_2(); 
}
A1C *Concrete_Factory_3::create_a1(){
	return new A1_3(); 
}
A2C *Concrete_Factory_3::create_a2(){
	return new A2_3(); 
}
A3C *Concrete_Factory_3::create_a3(){
	return new A3_3(); 
}
A4C *Concrete_Factory_3::create_a4(){
	return new A4_3(); 
}
A5C *Concrete_Factory_3::create_a5(){
	return new A5_3(); 
}
A6C *Concrete_Factory_3::create_a6(){
	return new A6_3(); 
}
A7C *Concrete_Factory_3::create_a7(){
	return new A7_3(); 
}
A8C *Concrete_Factory_3::create_a8(){
	return new A8_3(); 
}
A9C *Concrete_Factory_3::create_a9(){
	return new A9_3(); 
}
A10C *Concrete_Factory_3::create_a10(){
	return new A10_3(); 
}
A11C *Concrete_Factory_3::create_a11(){
	return new A11_3(); 
}
A12C *Concrete_Factory_3::create_a12(){
	return new A12_3(); 
}
A13C *Concrete_Factory_3::create_a13(){
	return new A13_3(); 
}
A14C *Concrete_Factory_3::create_a14(){
	return new A14_3(); 
}
void OP::A1(){
	p1->A1(ds);
}
void OP::A2(){
	p2->A2(ds);
}
void OP::A3(){
	p3->A3(ds);
}
void OP::A4(){
	p4->A4(ds);
}
void OP::A5(){
	p5->A5(ds);
}
void OP::A6(){
	p6->A6(ds);
}
void OP::A7(){
	p7->A7(ds);
}
void OP::A8(){
	p8->A8(ds);
}
void OP::A9(){
	p9->A9(ds);
}
void OP::A10(){
	p10->A10(ds);
}
void OP::A11(){
	p11->A11(ds);
}
void OP::A12(){
	p12->A12(ds);
}
void OP::A13(){
	p13->A13(ds);
}
void OP::A14(){
	p14->A14(ds);
}
// init the OP attributes according to concrete factory passed in
void OP::init(Abstract_Factory *af){
	p1 = af->create_a1();
	p2 = af->create_a2();
	p3 = af->create_a3();
	p4 = af->create_a4();
	p5 = af->create_a5();
	p6 = af->create_a6();
	p7 = af->create_a7();
	p8 = af->create_a8();
	p9 = af->create_a9();
	p10 = af->create_a10();
	p11 = af->create_a11();
	p12 = af->create_a12();
	p13 = af->create_a13();
	p14 = af->create_a14();
	delete af;
}
