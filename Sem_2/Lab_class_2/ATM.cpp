#include <iostream>
#include "ATM.h"

using namespace std;

ATM::ATM(int ID, double balance, double maxSum)
{
	this->ID = ID;
	this->balance = balance;
	this->maxSum = maxSum;
}
ATM::ATM(const ATM& ATM)
{
	ID = ATM.ID;
	balance = ATM.balance;
	maxSum = ATM.maxSum;
}
void ATM::setID(int ID) { this->ID = ID; }
int ATM::getID() { return ID; }
void ATM::setBalance(double balance) { this->balance = balance; }
double ATM::getBalance(){ return balance; }
void ATM::setMaxSum(double maxSum) { this->maxSum = maxSum; }
double ATM::getMaxSum() { return maxSum; }
void ATM::showInfo()
{
	cout << "ID: " << ID << endl;
	cout << "Current balance: " << balance << endl;
	cout << "Maximum amount of money: " << maxSum << endl;
}