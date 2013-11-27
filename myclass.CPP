#include <iostream.h>
#include <windows.h>

using namespace std;

int main()
{
SetConsoleOutputCP(1251);//подключение кириллицы
int P=1;
int n;
cout<<"Введите число для вычисления факториала==>"<<endl;
cin>>n;
//Вычисление факториала числа n
int i=n;
do
{
P*=i;
i--;
}
while (i>0)
cout<<"Факториал="<<P<<endl;
return 0 ;
}
