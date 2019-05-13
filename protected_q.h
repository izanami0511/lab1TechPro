#pragma once
#include "parent_q.h"

class protected_q : protected parent_q
{
public:
	void add(int user_value) { parent_q::add(user_value); }
	void del() { parent_q::del(); }
	void print_q();
	void copy_q(protected_q &op1);
	protected_q *merge(protected_q *op1);
	void calculate();
	void sethead(el*val);
	void settail(el*val);
	el* gettail(void);
	el* gethead(void);
	int getnum(void);
};

