#include "StrategyClass.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv)
{
	Calculator CalculatorObj;
	OperationAdd* OperationAddObj = new OperationAdd;
	int NumberA = 100,NumberB = 50;
	CalculatorObj.SetOperation(dynamic_cast<StrategyClass*>(OperationAddObj));
	cout<<"Add Result:"<<CalculatorObj.Operation(NumberA, NumberB)<<endl;

	OperationSub* OperationSubObj = new OperationSub;
	CalculatorObj.SetOperation(dynamic_cast<StrategyClass*>(OperationSubObj));
	cout << "Sub Result:" << CalculatorObj.Operation(NumberA, NumberB) << endl;
	char exit;
	cin >> exit;
	delete OperationAddObj;
	delete OperationSubObj;
	return 1;
}