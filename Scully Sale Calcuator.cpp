#include <iostream>
using namespace std;

int main()
{
	int ss; //Variable for # of Scully's Specials Sold.
	int cod; //Vairable of # of Catch of the Day Sold.
	double ssmoney; //Variable for money earned from Scully's Specials.
	double codmoney; //Variable for money earned from Catch of the Day.
	double total; //Variable for total money earned from sales.
	double ttax; //Variable for total money with tax.

	cout << "Welcome to Scully's Fish and Chips Sales Calculator!\n\n" << endl;

	cout << "How many 'Scully's specials' were sold today?" << endl;
	cin >> ss; 
	cout << endl;

	cout << "How many 'Scully's Catch of the Day' were sold today?" << endl;
	cin >> cod;
	cout << endl;

	ssmoney = ss * 8.99; //price defined in assignment 
	codmoney = cod * 7.99; //price defined in assignment
	total = ssmoney + codmoney; //total value of sales
	ttax = total * 1.13; //total including tax

	cout << "That makes the total sales for the day:\t";
	cout << "$" << total << endl;
	cout << "\n\n\n";

}