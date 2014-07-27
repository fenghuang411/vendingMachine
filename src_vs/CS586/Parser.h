#ifndef _PARSER_H
#define _PARSER_H
#include <iostream>
#include <limits>
#include "ATM.h"
class Parser{
public:
	virtual void start_atm()=0;
};
class Parser_1 : public Parser{
	void start_atm();
};
class Parser_2 : public Parser{
	void start_atm();
};
class Parser_3 : public Parser{
	void start_atm();
};
#endif
