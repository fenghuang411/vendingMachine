#ifndef _OP_H
#define _OP_H
#include "Data_Store.h"
#include <iostream>
/* A1 */
class A1C{
public:
	// store pin
	virtual void A1(Data_Store *ds)=0;
};
class A1_1 : public A1C{
public:
	void A1(Data_Store *ds);
};
class A1_2 : public A1C{
public:
	void A1(Data_Store *ds);
};
class A1_3 : public A1C{
public:
	void A1(Data_Store *ds);
};
/* A2 */
class A2C{
public:
	// store balance
	virtual void A2(Data_Store *ds)=0;
};
class A2_1 : public A2C{
public:
	void A2(Data_Store *ds);
};
class A2_2 : public A2C{
public:
	void A2(Data_Store *ds);
};
class A2_3 : public A2C{
public:
	void A2(Data_Store *ds);
};
/* A3 */
class A3C{
public:
	// prompt for pin
	virtual void A3(Data_Store *ds)=0;
};
class A3_1 : public A3C{
public:
	void A3(Data_Store *ds);
};
class A3_2 : public A3C{
public:
	void A3(Data_Store *ds);
};
class A3_3 : public A3C{
public:
	void A3(Data_Store *ds);
};
/* A4 */
class A4C{
public:
	// incorrect pin message
	virtual void A4(Data_Store *ds)=0;
};
class A4_1 : public A4C{
public:
	void A4(Data_Store *ds);
};
class A4_2 : public A4C{
public:
	void A4(Data_Store *ds);
};
class A4_3 : public A4C{
public:
	void A4(Data_Store *ds);
};
/* A5 */
class A5C{
public:
	// too many attempts message
	virtual void A5(Data_Store *ds)=0;
};
class A5_1 : public A5C{
public:
	void A5(Data_Store *ds);
};
class A5_2 : public A5C{
public:
	void A5(Data_Store *ds);
};
class A5_3 : public A5C{
public:
	void A5(Data_Store *ds);
};
/* A6 */
class A6C{
public:
	// eject card
	virtual void A6(Data_Store *ds)=0;
};
class A6_1 : public A6C{
public:
	void A6(Data_Store *ds);
};
class A6_2 : public A6C{
public:
	void A6(Data_Store *ds);
};
class A6_3 : public A6C{
public:
	void A6(Data_Store *ds);
};
/* A7 */
class A7C{
public:
	// display menu
	virtual void A7(Data_Store *ds)=0;
};
class A7_1 : public A7C{
public:
	void A7(Data_Store *ds);
};
class A7_2 : public A7C{
public:
	void A7(Data_Store *ds);
};
class A7_3 : public A7C{
public:
	void A7(Data_Store *ds);
};
/* A8 */
class A8C{
public:
	// make deposit no penalty
	virtual void A8(Data_Store *ds)=0;
};
class A8_1 : public A8C{
public:
	void A8(Data_Store *ds);
};
class A8_2 : public A8C{
public:
	void A8(Data_Store *ds);
};
class A8_3 : public A8C{
public:
	void A8(Data_Store *ds);
};
/* A9 */
class A9C{
public:
	// display balance
	virtual void A9(Data_Store *ds)=0;
};
class A9_1 : public A9C{
public:
	void A9(Data_Store *ds);
};
class A9_2 : public A9C{
public:
	void A9(Data_Store *ds);
};
class A9_3 : public A9C{
public:
	void A9(Data_Store *ds);
};
/* A10 */
class A10C{
public:
	// make deposit with penalty
	virtual void A10(Data_Store *ds)=0;
};
class A10_1 : public A10C{
public:
	void A10(Data_Store *ds);
};
class A10_2 : public A10C{
public:
	void A10(Data_Store *ds);
};
class A10_3 : public A10C{
public:
	void A10(Data_Store *ds);
};
/* A11 */
class A11C{
public:
	// withdraw no penalty
	virtual void A11(Data_Store *ds)=0;
};
class A11_1 : public A11C{
public:
	void A11(Data_Store *ds);
};
class A11_2 : public A11C{
public:
	void A11(Data_Store *ds);
};
class A11_3 : public A11C{
public:
	void A11(Data_Store *ds);
};
/* A12 */
class A12C{
public:
	// withdraw with penalty
	virtual void A12(Data_Store *ds)=0;
};
class A12_1 : public A12C{
public:
	void A12(Data_Store *ds);
};
class A12_2 : public A12C{
public:
	void A12(Data_Store *ds);
};
class A12_3 : public A12C{
public:
	void A12(Data_Store *ds);
};
/* A13 */
class A13C{
public:
	// lock
	virtual void A13(Data_Store *ds)=0;
};
class A13_1 : public A13C{
public:
	void A13(Data_Store *ds);
};
class A13_2 : public A13C{
public:
	void A13(Data_Store *ds);
};
class A13_3 : public A13C{
public:
	void A13(Data_Store *ds);
};
/* A14 */
class A14C{
public:
	// unlock
	virtual void A14(Data_Store *ds)=0;
};
class A14_1 : public A14C{
public:
	void A14(Data_Store *ds);
};
class A14_2 : public A14C{
public:
	void A14(Data_Store *ds);
};
class A14_3 : public A14C{
public:
	void A14(Data_Store *ds);
};
// abstract factory pattern -- attribute for operations defined by concrete factory 
class Abstract_Factory{
public:
	virtual A1C *create_a1()=0;
	virtual A2C *create_a2()=0;
	virtual A3C *create_a3()=0;
	virtual A4C *create_a4()=0;
	virtual A5C *create_a5()=0;
	virtual A6C *create_a6()=0;
	virtual A7C *create_a7()=0;
	virtual A8C *create_a8()=0;
	virtual A9C *create_a9()=0;
	virtual A10C *create_a10()=0;
	virtual A11C *create_a11()=0;
	virtual A12C *create_a12()=0;
	virtual A13C *create_a13()=0;
	virtual A14C *create_a14()=0;
};
class Concrete_Factory_1 : public Abstract_Factory{
public:
	 A1C *create_a1();
	 A2C *create_a2();
	 A3C *create_a3();
	 A4C *create_a4();
	 A5C *create_a5();
	 A6C *create_a6();
	 A7C *create_a7();
	 A8C *create_a8();
	 A9C *create_a9();
	 A10C *create_a10();
	 A11C *create_a11();
	 A12C *create_a12();
	 A13C *create_a13();
	 A14C *create_a14();
};
class Concrete_Factory_2 : public Abstract_Factory{
public:
	 A1C *create_a1();
	 A2C *create_a2();
	 A3C *create_a3();
	 A4C *create_a4();
	 A5C *create_a5();
	 A6C *create_a6();
	 A7C *create_a7();
	 A8C *create_a8();
	 A9C *create_a9();
	 A10C *create_a10();
	 A11C *create_a11();
	 A12C *create_a12();
	 A13C *create_a13();
	 A14C *create_a14();
};
class Concrete_Factory_3 : public Abstract_Factory{
public:
	 A1C *create_a1();
	 A2C *create_a2();
	 A3C *create_a3();
	 A4C *create_a4();
	 A5C *create_a5();
	 A6C *create_a6();
	 A7C *create_a7();
	 A8C *create_a8();
	 A9C *create_a9();
   A10C *create_a10();
	 A11C *create_a11();
	 A12C *create_a12();
	 A13C *create_a13();
	 A14C *create_a14();
};
// stragegy pattern -- operations replacable by changing attribute
class OP{
public:
	Data_Store *ds;
	A1C *p1;
	A2C *p2;
	A3C *p3;
	A4C *p4;
	A5C *p5;
	A6C *p6;
	A7C *p7;
	A8C *p8;
	A9C *p9;
	A10C *p10;
	A11C *p11;
	A12C *p12;
	A13C *p13;
	A14C *p14;
	void A1();
	void A2();
	void A3();
	void A4();
	void A5();
	void A6();
	void A7();
	void A8();
	void A9();
	void A10();
	void A11();
	void A12();
	void A13();
	void A14();		
	void init(Abstract_Factory *af);
};

#endif
