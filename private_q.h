#pragma once
#include "parent_q.h"

class private_q : private parent_q
{
public:
	void add(int user_value) { parent_q::add(user_value); }
	void calculate();
	void del() { parent_q::del(); }
	void print_q();
	void copy_q(private_q &op1);
	private_q *merge(private_q *op1);
	void sethead(el*val);
	void settail(el*val);
	el* gettail();
	el* gethead();
	int getnum();
};

