#include<string>
#include<iostream>
using namespace std;

#define MAX 1000

struct inf
{
	string name;
	string gender;
	int age;
	string number;
	string home;
};
void add(inf p[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (p[i].age < 0)
		{
			cout << "请输入姓名：\t";
			cin >> p[i].name;
			cout << endl << "请输入性别：\t";
			cin >> p[i].gender;
			cout << endl << "请输入年龄：\t";
			cin >> p[i].age;
			cout << endl << "请输入联系电话：\t";
			cin >> p[i].number;
			cout << endl << "请输入家庭住址：\t";
			cin >> p[i].home;
			cout << endl << "录入完成。" << endl;;
			break;
		}
	}
	system("pause");
	system("cls");

}
void display(inf p[], int len)
{
	int judge = 0;
	for (int i = 0; i < len; i++)
	{
		if (p[i].age < 0)
		{
			break;
		}
		else
		{
			cout << "姓名：" << p[i].name << "\t";
			cout << "性别：" << p[i].gender << "\t";
			cout << "年龄：" << p[i].age << "\t";
			cout << "联系电话：" << p[i].number << "\t";
			cout << "家庭住址：" << p[i].home << "\t" << endl;
			judge = 1;

		}
	}
	if (judge == 0)
	{
		cout << "联系人为空！" << endl;;
	}
	system("pause");
	system("cls");
}
void del(inf p[], int len)
{
	string key;
	string che_name;
	int judge = 0;
	cout << "请输入要删除的联系人的姓名：";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << "请确认是否删除(输入y以确认)：";
			cin >> key;
			judge = 1;
			if (key == "y")
			{
				for (int j = 0; j < len; j++)
				{
					if (p[i].age > 0 && p[i + 1].age > 0)
					{
						for (; i < len - 1; i++)
						{
							p[i].name = p[i + 1].name;
							p[i].gender = p[i + 1].gender;
							p[i].age = p[i + 1].age;
							p[i].number = p[i + 1].number;
							p[i].home = p[i + 1].home;
						}
						cout << "删除完成！" << endl;
					}
					else if (p[i].age > 0 && p[i + 1].age < 0)
					{
						p[i].age = -1;
						cout << "删除完成！" << endl;
					}
				}
				break;
			}
		}
	}
	if (judge == 0)
	{
		cout << "该联系人不存在！" << endl;;
	}
	system("pause");
	system("cls");
}
void check(inf p[], int len)
{
	string che_name;
	int judge = 0;
	cout << "请输入要查找的联系人的姓名：";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << p[i].name << "的信息如下：" << endl;
			cout << "姓名：" << p[i].name;
			cout << "性别：" << p[i].gender;
			cout << "年龄：" << p[i].age;
			cout << "联系电话：" << p[i].number;
			cout << "家庭住址：" << p[i].home;
			judge = 1;
			break;
		}
	}
	if (judge == 0)
	{
		cout << "该联系人不存在！" << endl;;
	}
	system("pause");
	system("cls");
}
void change(inf p[], int len)
{
	string che_name;
	int judge = 0;
	cout << "请输入要修改的联系人的姓名：";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << "现在正在修改" << p[i].name << "的信息：" << endl;
			cout << "请输入姓名：\t";
			cin >> p[i].name;
			cout << endl << "请输入性别：\t";
			cin >> p[i].gender;
			cout << endl << "请输入年龄：\t";
			cin >> p[i].age;
			cout << endl << "请输入联系电话：\t";
			cin >> p[i].number;
			cout << endl << "请输入家庭住址：\t";
			cin >> p[i].home;
			cout << endl << "修改完成。" << endl;;
			judge = 1;
			break;
		}
	}
	if (judge == 0)
	{
		cout << "该联系人不存在！";
	}
	system("pause");
	system("cls");
}
void clear(inf p[], int len)
{
	string key;
	cout << "请确认是否清空联系人(输入y以确认)";
	cin >> key;
	if (key == "y")
	{
		for (int i = 0; i < len; i++)
		{
			p[i].age = -1;
		}
		cout << "清空完成！" << endl;;
	}
	system("pause");
	system("cls");
}
int main()
{
	string swi;
	int key;
	inf adress_book[MAX];
	cout << "是否打开通讯录(y/n)：";
	cin >> swi;
	if (swi == "y")
	{
		while (1)
		{
			int len = sizeof(adress_book) / sizeof(adress_book[0]);

			cout << "**************************" << endl;
			cout << "*****  1.添加联系人  *****" << endl;
			cout << "*****  2.显示联系人  *****" << endl;
			cout << "*****  3.删除联系人  *****" << endl;
			cout << "*****  4.查找联系人  *****" << endl;
			cout << "*****  5.修改联系人  *****" << endl;
			cout << "*****  6.清空联系人  *****" << endl;
			cout << "*****  0.退出通讯录  *****" << endl;
			cout << "**************************" << endl;
			cout << "请选择以上功能:" << endl;;
			cin >> key;
			switch (key)
			{
			case 1:
				add(adress_book, len);
				cout << endl;
				break;
			case 2:
				display(adress_book, len);
				cout << endl;
				break;
			case 3:
				del(adress_book, len);
				cout << endl;
				break;
			case 4:
				check(adress_book, len);
				cout << endl;
				break;
			case 5:
				change(adress_book, len);
				cout << endl;
				break;
			case 6:
				clear(adress_book, len);
				cout << endl;
				break;
			case 0:
				system("pause");
				return 0;

			default:
				cout << "选择错误请重新选择：";
				cout << endl;
			}
		}
	}
	else
	{
		exit(0);
	}

}