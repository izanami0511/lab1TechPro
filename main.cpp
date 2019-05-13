#include <iostream>
#include <conio.h>
#include <windows.h>
#include "parent_q.h"
#include "private_q.h"
#include "public_q.h"
#include "protected_q.h"

using namespace std;

int main()
{
	parent_q *q1 = 0;
	private_q priv;
	private_q priv_copy;
	private_q *priv_merge = 0;
	public_q publ;
	public_q publ_copy;
	public_q *publ_merge = 0;
	protected_q prot;
	protected_q prot_copy;
	protected_q *prot_merge = 0;

	int user_value = 0;
	char menu_choise;
	char submenu_choise;
	
	do
	{
		system("cls");
		cout << "What do you want to do?" << endl;
		cout << "1.Add element to the Queue." << endl;
		cout << "2.Extract element from the Queue." << endl;
		cout << "3.Print Queue on the screen." << endl;
		cout << "4.Calculate amount of elements," << endl;
		cout << "larger than harmonic value." << endl;
		cout << "5.Create copy of the Queue." << endl; 
		cout << "6.Merge Queues (only if you do a copy!)." << endl;
		cout << "7. Exit" << endl;
		cout << ">";
		cin >> menu_choise;
	
		switch (menu_choise) {
		case '1':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				priv.add(user_value);
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				prot.add(user_value);
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				cout << "Enter value of element:" << endl;
				cout << ">";
				cin >> user_value;
				publ.add(user_value);
				break;
			default:
				break;
			}
			break;
		case '2':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				priv.del();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				prot.del();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				publ.del();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '3':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				priv.print_q();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				prot.print_q();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				publ.print_q();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '4':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				priv.calculate();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				prot.getnum();
				prot.calculate();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				publ.calculate();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '5':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				priv.copy_q(priv_copy);
				priv_copy.print_q();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				prot.copy_q(prot_copy);
				prot_copy.print_q();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				publ.copy_q(publ_copy);
				publ_copy.print_q();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '6':
			system("cls");
			cout << "Choose modifier." << endl;
			cout << "1.Private." << endl;
			cout << "2.Protected." << endl;
			cout << "3.Public." << endl;
			cout << ">";
			cin >> submenu_choise;
			switch (submenu_choise) {
			case '1':
				system("cls");
				priv.sethead(priv.gethead());
				priv.settail(priv.gettail());
				priv_merge = priv.merge(&priv_copy);
				priv_merge->print_q();
				system("Pause");
				break;
			case '2':
				system("cls");
				prot.sethead(prot.gethead());
				prot.settail(prot.gettail());
				prot_merge = prot.merge(&prot_copy);
				prot_merge->print_q();
				system("Pause");
				break;
			case '3':
				system("cls");
				publ.sethead(publ.gethead());
				publ.settail(publ.gettail());
				publ_merge = publ.merge(&publ_copy);
				publ_merge->print_q();
				system("Pause");
				break;
			default:
				break;
			}
			break;
		case '7':
			menu_choise = 7;
			break;
		default:
			break;
		}
		
	} while (menu_choise != 7);
	return 0;
}