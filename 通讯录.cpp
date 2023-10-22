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
			cout << "������������\t";
			cin >> p[i].name;
			cout << endl << "�������Ա�\t";
			cin >> p[i].gender;
			cout << endl << "���������䣺\t";
			cin >> p[i].age;
			cout << endl << "��������ϵ�绰��\t";
			cin >> p[i].number;
			cout << endl << "�������ͥסַ��\t";
			cin >> p[i].home;
			cout << endl << "¼����ɡ�" << endl;;
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
			cout << "������" << p[i].name << "\t";
			cout << "�Ա�" << p[i].gender << "\t";
			cout << "���䣺" << p[i].age << "\t";
			cout << "��ϵ�绰��" << p[i].number << "\t";
			cout << "��ͥסַ��" << p[i].home << "\t" << endl;
			judge = 1;

		}
	}
	if (judge == 0)
	{
		cout << "��ϵ��Ϊ�գ�" << endl;;
	}
	system("pause");
	system("cls");
}
void del(inf p[], int len)
{
	string key;
	string che_name;
	int judge = 0;
	cout << "������Ҫɾ������ϵ�˵�������";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << "��ȷ���Ƿ�ɾ��(����y��ȷ��)��";
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
						cout << "ɾ����ɣ�" << endl;
					}
					else if (p[i].age > 0 && p[i + 1].age < 0)
					{
						p[i].age = -1;
						cout << "ɾ����ɣ�" << endl;
					}
				}
				break;
			}
		}
	}
	if (judge == 0)
	{
		cout << "����ϵ�˲����ڣ�" << endl;;
	}
	system("pause");
	system("cls");
}
void check(inf p[], int len)
{
	string che_name;
	int judge = 0;
	cout << "������Ҫ���ҵ���ϵ�˵�������";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << p[i].name << "����Ϣ���£�" << endl;
			cout << "������" << p[i].name;
			cout << "�Ա�" << p[i].gender;
			cout << "���䣺" << p[i].age;
			cout << "��ϵ�绰��" << p[i].number;
			cout << "��ͥסַ��" << p[i].home;
			judge = 1;
			break;
		}
	}
	if (judge == 0)
	{
		cout << "����ϵ�˲����ڣ�" << endl;;
	}
	system("pause");
	system("cls");
}
void change(inf p[], int len)
{
	string che_name;
	int judge = 0;
	cout << "������Ҫ�޸ĵ���ϵ�˵�������";
	cin >> che_name;
	for (int i = 0; i < len; i++)
	{
		if (che_name == p[i].name)
		{
			cout << "���������޸�" << p[i].name << "����Ϣ��" << endl;
			cout << "������������\t";
			cin >> p[i].name;
			cout << endl << "�������Ա�\t";
			cin >> p[i].gender;
			cout << endl << "���������䣺\t";
			cin >> p[i].age;
			cout << endl << "��������ϵ�绰��\t";
			cin >> p[i].number;
			cout << endl << "�������ͥסַ��\t";
			cin >> p[i].home;
			cout << endl << "�޸���ɡ�" << endl;;
			judge = 1;
			break;
		}
	}
	if (judge == 0)
	{
		cout << "����ϵ�˲����ڣ�";
	}
	system("pause");
	system("cls");
}
void clear(inf p[], int len)
{
	string key;
	cout << "��ȷ���Ƿ������ϵ��(����y��ȷ��)";
	cin >> key;
	if (key == "y")
	{
		for (int i = 0; i < len; i++)
		{
			p[i].age = -1;
		}
		cout << "�����ɣ�" << endl;;
	}
	system("pause");
	system("cls");
}
int main()
{
	string swi;
	int key;
	inf adress_book[MAX];
	cout << "�Ƿ��ͨѶ¼(y/n)��";
	cin >> swi;
	if (swi == "y")
	{
		while (1)
		{
			int len = sizeof(adress_book) / sizeof(adress_book[0]);

			cout << "**************************" << endl;
			cout << "*****  1.�����ϵ��  *****" << endl;
			cout << "*****  2.��ʾ��ϵ��  *****" << endl;
			cout << "*****  3.ɾ����ϵ��  *****" << endl;
			cout << "*****  4.������ϵ��  *****" << endl;
			cout << "*****  5.�޸���ϵ��  *****" << endl;
			cout << "*****  6.�����ϵ��  *****" << endl;
			cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
			cout << "**************************" << endl;
			cout << "��ѡ�����Ϲ���:" << endl;;
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
				cout << "ѡ�����������ѡ��";
				cout << endl;
			}
		}
	}
	else
	{
		exit(0);
	}

}