#pragma once
#include "parent_q.h"

class public_q : public parent_q
{
public:
	void add(int user_value) { parent_q::add(user_value); }
	void del() { parent_q::del(); }
	void print_q();
	void copy_q(public_q &op1);
	public_q *merge(public_q *op1);
	void calculate();
	void sethead(el*val);
	void settail(el*val);
};

