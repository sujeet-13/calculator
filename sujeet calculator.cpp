#include<iostream>
using namespace std;
int a ,b;

void getdata()
{
    cout<<"enter two number";
    cin>>a>>b;
}
void cal()
{
    char op;
    cout<<+ - * /;
    cout<<"enter operator";
    cin>>op;

    switch(op)
    {
case '+'<<cout <<"result"=<<a+b;
break;
case '-'<<cout<<"result"=<<a-b;
break;
case '*'<<cout<<"result"=<<a*b;
break;
case '/'<<cout<<"result"=<<a/b
break;
return 0;
    }

