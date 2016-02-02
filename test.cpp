#include <iostream>
#include <string>
#include "big_data_int.h"

int main() 
{
    cout<<"please input two numners:"<<endl;
    string s_a, s_b;
    cin>>s_a;
    cin>>s_b;

    big_data_int a(s_a), b(s_b), c;

    c = a / b;

    cout <<"Result is:"<<endl<<c.data()<<endl;

    return 0;
}
