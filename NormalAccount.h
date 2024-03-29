// Visual Studio 2019에서 작성된 코드입니다.

#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"
#include "String.h"

class NormalAccount : public Account
{
private:
	int interRate; // 이자율

public:
	NormalAccount(int ID, int money, String name, int rate)
		: Account(ID, money, name), interRate(rate)
	{}

	virtual void Deposit(int money)
	{
		Account::Deposit(money); // 원금 추가
		Account::Deposit(money * (interRate / 100.0)); // 이자 추가
	}
};

#endif