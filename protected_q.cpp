#include "protected_q.h"
#include <iostream>
using namespace std;


el* protected_q::gethead(void) {
	return parent_q::gethead();
}
el* protected_q::gettail(void) {
	return parent_q::gettail();
}
int protected_q::getnum(void) {
	return parent_q::getnum();
}

void protected_q::calculate() {

	double sum = 0;
	double chis = 0;
	double element_chis = 0;
	int res = 0;
	int n = 0;
	el*temp = gettail();

	while (temp != NULL){

		element_chis = 1.0 / temp->value;
		chis += element_chis;
		temp = temp->Previous;
		n++;
	}
	
	sum = n / chis;
	temp = gettail();

	while (temp->Previous != NULL) {
		if (temp->value > sum)
		{
			res++;
		}
		temp = temp->Previous;
	} 

	cout << "Elements which are more than average sum are: " << res << endl;
}

void protected_q::copy_q(protected_q &op1) {
	el*temp = gettail();
	int *mas = new int[getnum()];
	int k = getnum() - 1;
	for (int i = 0; i < getnum(); ++i)
	{
		mas[k--] = temp->value;
		temp = temp->Previous;
	}
	int n = getnum();
	for (k = 0; k < n; k++)
	{
		op1.add(mas[k]);
	}
	delete[] mas;
}

protected_q* protected_q::merge(protected_q *op1) {
	protected_q *res = new protected_q;
	el *temp = gettail();
	int num1 = getnum();
	int *mas_1 = new int[num1];
	int *mas_2 = new int[num1];
	int k = num1 - 1;
	for (int i = 0; i < num1; ++i)
	{
		mas_1[k--] = temp->value;
		temp = temp->Previous;
	}
	temp = op1->gettail();
	k = num1 - 1;
	for (int i = 0; i < num1; ++i)
	{
		mas_2[k--] = temp->value;
		temp = temp->Previous;
	}
	for (int i = 0; i < num1; ++i)
		res->add(mas_1[i]);
	for (int i = 0; i < num1; ++i)
		res->add(mas_2[i]);
	delete[] mas_1;
	delete[] mas_2;
	mas_1 = nullptr;
	mas_2 = nullptr;
	return res;
}

void protected_q::print_q() {
	el *temp = gettail();
	int *mas = new int[getnum()];
	int k = getnum() - 1;
	for (int i = 0; i < getnum(); ++i)
	{
		mas[k--] = temp->value;
		temp = temp->Previous;
	}
	for (int i = 0; i < getnum(); ++i)
	{
		i != getnum() - 1 ? cout << mas[i] << " << " : cout << mas[i] << endl;
	}
	delete[]  mas;
}

void protected_q::sethead(el*val) {
	parent_q::sethead(val);
}
void protected_q::settail(el*val) {
	parent_q::settail(val);
}
