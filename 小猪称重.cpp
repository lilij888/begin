#include<iostream>
using  namespace std;
int main()
{
	int arr[5] = { 300,350,200,150,100 };
	int i = 0, s = 1;
	for (i = 0; i <= 3; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			arr[i + 1] = arr[i];

		}
		else
		{
			s++;
		}
	}
	cout << "���ص�С��Ϊ��" << s << "ֻ" << endl;
	cout << "���ص�С������Ϊ" << arr[4] << endl;
	/*int arr[] = { 300,350,200,450,100 };*/
	//int max = 0,i=0,s=1;
	//for (; i <= 4; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//		s = i + 1;
	//	}
	//}
	//cout << "���ص�С��Ϊ��" << s << "ֻ" << endl;
	//cout << "���ص�С������Ϊ" << max << endl;
}