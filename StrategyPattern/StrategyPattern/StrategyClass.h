#pragma once
//����ģʽ�������㷨�壬�ֱ��װ������������֮����Ի����滻����ģʽ���㷨�ı仯������ʹ���㷨�Ŀͻ�
class StrategyClass
{
public:
	StrategyClass() {};
	virtual ~StrategyClass() {};
	virtual int Operation(int Num1, int Num2) {
		return 0;
	};
};
class OperationAdd : public virtual StrategyClass
{
public:
	int Operation(int Num1, int Num2) override
	{
		return Num1 + Num2;
	}
};
class OperationSub : public virtual StrategyClass
{
public:
	int Operation(int Num1, int Num2) override
	{
		return Num1 - Num2;
	}
};
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