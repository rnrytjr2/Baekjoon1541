// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
#include <iostream>
#include <string>
using namespace std;
int main()
{
	collection;
	string equation = "";
	bool minuscheck = false;
	cin >> equation;
	int lastoperator = -1, answer = 0, valuelength = 1, value;
	equation += "=";
	for (int i = 0; i < equation.length(); i++)
	{
		if (!(equation[i] <= '9' && equation[i] >= '0'))
		{
			string tempequation = equation;
			string stringtemp = tempequation.substr(lastoperator + 1, valuelength - 1);
			value = stoi(stringtemp);
			lastoperator = i;
			valuelength = 0;
			if (minuscheck)
			{
				answer -= value;
			}
			else
			{
				answer += value;
			}
			if (equation[i] == '-')
			{
				minuscheck = true;
			}
		}
		valuelength++;
	}
	cout << answer;
}

