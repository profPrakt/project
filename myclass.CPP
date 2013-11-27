#include <iostream.h>
#include <windows.h>

using namespace std;

void main()
{
SetConsoleOutputCP(1251);//подключение кириллицы

int i;
int P=1;
int n;

cout<<"Введите число для вычисления факториала==>"<<endl;
cin>>n;
//Вычисление факториала числа n
for(i=n;i>0;i--)
P*=i;

cout<<"Факториал="<<P<<endl;
return 0 ;
}
