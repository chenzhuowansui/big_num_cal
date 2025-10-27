#include <iostream>
#include <string>
#include "big_data_int.h"

int main() 
{
    cout<<"please input two numbers:"<<endl;
    string* s_a, *s_b;
    s_a = get_string();
    s_b = get_string();

    cout<<"Please input the operator(+,-,*,/,%):"<<endl;
    string op;
    cin>>op;

    big_data_int a(s_a), b(s_b), c;

    c = calc(a, b, op);

    cout <<"Result is:"<<endl<<c.data()<<endl;

    return 0;
}
