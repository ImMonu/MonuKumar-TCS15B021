#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

void token(string expression);

int main()
{
	string expression;
	cout << "enter the expression"<< endl;
	cin >> expression;
	//cout << expression;
	token (expression);	
}

void token(string expression)
{
	for (int i=0;i<expression.length();i++)
	{
		if (isdigit(expression[i]))
		{
			cout << "[Integer, "<< expression[i] << ']';
		}
		if (expression[i]=='+')
		{
			cout << "[Plus, +]";
		}
		
	    if (expression[i]=='-')
		{
			cout << "[Minus, -]";
		}
		if (!isdigit(expression[i]) && expression[i]!='+' &&expression[i]!='-')
		{
			cout << "invalid entry! try again";
			break;
		}
	}
}
