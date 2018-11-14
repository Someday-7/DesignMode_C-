#pragma once
//策略模式定义了算法族，分别封装起来，让他们之间可以互相替换，此模式让算法的变化独立于使用算法的客户

/**********************************************************************************************//**
 * \class	StrategyClass
 *
 * \brief	A strategy class.
 *
 * \author	Jingyu
 * \date	2018/11/14
 **************************************************************************************************/

class StrategyClass
{
public:
	StrategyClass() {};
	virtual ~StrategyClass() {};
	virtual int Operation(int Num1, int Num2) {
		return 0;
	};
};

/**********************************************************************************************//**
 * \class	OperationAdd
 *
 * \brief	An operation add.
 *
 * \author	Jingyu
 * \date	2018/11/14
 **************************************************************************************************/

class OperationAdd : public virtual StrategyClass
{
public:
	int Operation(int Num1, int Num2) override
	{
		return Num1 + Num2;
	}
};

/**********************************************************************************************//**
 * \class	OperationSub
 *
 * \brief	An operation sub.
 *
 * \author	Jingyu
 * \date	2018/11/14
 **************************************************************************************************/

class OperationSub : public virtual StrategyClass
{
public:
	int Operation(int Num1, int Num2) override
	{
		return Num1 - Num2;
	}
};

/**********************************************************************************************//**
 * \class	Calculator
 *
 * \brief	A calculator.
 *
 * \author	Jingyu
 * \date	2018/11/14
 **************************************************************************************************/

class Calculator
{
public:
	Calculator() {};
	void SetOperation(StrategyClass* StrategyInstance)
	{
		StrategyObj = StrategyInstance;
	}
	int Operation(int Num1, int Num2)
	{
		return StrategyObj->Operation(Num1 , Num2);
	}
private:
	StrategyClass* StrategyObj;
};