#include <iostream>
#include <cstring>
using namespace std;

int Top = -1;
int Stack[10001];

void Push(int X)
{
	Stack[++Top] = X;
}

int empty()
{
	if (Top < 0)
		return 1;
	else
		return 0;

}

void Pop()
{
	if (empty() == 1)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << Stack[Top] << endl;
		Stack[Top--] = 0;	
	}
}

void size()
{
	cout << Top + 1 << endl;
}

void top()
{
	if (Top < 0)
	{
		cout << "-1" << endl;
	}
	else
		cout << Stack[Top] << endl;
}




int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char c[10];
		cin >> c;
		
		if (!strcmp(c, "push"))
		{
			int x;
			cin >> x;
			Push(x);
		}

		else if (!strcmp(c, "pop"))
		{
			Pop();
		}

		else if (!strcmp(c, "top"))
		{
			top();
		}
		else if (!strcmp(c, "size"))
		{
			size();
		}
		else if (!strcmp(c, "empty"))
		{
			cout << empty() << endl;
		}
	}
	return 0;
}
	
