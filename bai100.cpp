#include<bits/stdc++.h>
using namespace std;
class Phongthi
{
public:
   int sots;

    void nhap()
    {
        cin>>sots;
    }
    friend class Thisinh;
};
class Thisinh
{
    Phongthi x;
public:
    void xuat()
{
    for(int i=1;i++)
    {
        cout<<"+1";
    }
}

};
int main()
{
    Thisinh a;
    a.xuat();
    return 0;
}
