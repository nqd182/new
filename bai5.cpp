#include<bits/stdc++.h>
using namespace std;
class SP
{
    float a,b;
public:
    SP();
    SP(float x,float y);
    SP operator+(SP y);

    friend ostream& operator<<(ostream& x, SP y);
};
SP::SP()
{
    a=b=0;
}
SP::SP(float x,float y)
{
    a=x;
    b=y;
}
SP SP::operator+(SP y)
{

    SP K;
    K.a=a+y.a;
    K.b=b+y.b;
    return K;
}

ostream& operator<<(ostream& x,SP y)
{
        x<<y.a<<"+ i*"<<y.b<<endl;
        return x;
}
SP SP::operator-(SP y)
{
    SP K;
    K.a=a-y.a;
    K.b=b-y.b;
    return K;
}
int main()
{
   
    SP c=a+b;

    cout<<a;

    cout<<b;
    c=a+b;
    cout<<"a+b= "<<c<<endl;
    return 0;
}
