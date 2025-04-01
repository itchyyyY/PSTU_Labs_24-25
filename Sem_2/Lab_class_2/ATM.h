#pragma once

class ATM
{
private:
	int ID;
	double balance;
	double maxSum;
public:
	ATM() : ID(0), balance(0), maxSum(0) {};
	ATM(int ID, double balance, double maxSum);
	ATM(const ATM& ATM);
	~ATM() {};
	void setID(int ID);
	int getID();
	void setBalance(double balance);
	double getBalance();
	void setMaxSum(double maxSum);
	double getMaxSum();
	void showInfo();
};