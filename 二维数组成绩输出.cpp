#include<iostream>
using namespace std;
int main()
{
	int arr_performance[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string arr_name[] = { "张三","李四","王五" };
	int mark = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mark += arr_performance[i][j];
		}
		cout << arr_name[i] << "的总成绩是：" <<mark<< endl;
		mark = 0;
	}
}