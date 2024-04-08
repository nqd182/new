#include<bits/stdc++.h>
using namespace std;
class Maytinh;
class NhaSX
{
    char tennsx[30];
    char diachi[30];
public:
    friend class May;
    friend void In(Maytinh *a,int n);
    friend void Sapxep(Maytinh *a,int n);
    friend void Xoa(Maytinh *a, int &n);
};
class May
{
public:
    char nhanhieu[30];
    NhaSX x;
    float gia;
    void input()
    {
        cout<<"nhap nhan hieu: ";fflush(stdin);gets(nhanhieu);
        cout<<"ten nsx: ";fflush(stdin);gets(x.tennsx);
        cout<<"dia chi: ";fflush(stdin);gets(x.diachi);
        cout<<"nhap gia:";cin>>gia;
    }
    void output()
    {
        cout<<"nhan hieu: "<<nhanhieu<<endl;
        cout<<"ten nsx: "<<x.tennsx<<endl;
        cout<<"dia chi: "<<x.diachi<<endl;
        cout<<"gia= "<<gia<<endl;
    }
};
class Maytinh:public May
{
    float tocdo;
    float dlram;
    float dlhdd;
public:
    void input()
    {
        May::input();
        cout<<"nhap toc do: ";cin>>tocdo;
        cout<<"nhap dung luong ram: ";cin>>dlram;
        cout<<"nhap dung luong hdd: ";cin>>dlhdd;
    }
    void output()
    {
        May::output();
        cout<<"toc do: "<<tocdo<<endl;
        cout<<"dung luong ram: "<<dlram<<endl;
        cout<<"dung luong hdd: "<<dlhdd<<endl;
    }

};
    void In(Maytinh a[100],int n)
    {
        cout<<"_____May tinh Intel_____ "<<endl;
    for(int i=0;i<n;i++)
        if(strcmp(a[i].x.tennsx,"Intel")==0)
        a[i].output();
    }
    void Sapxep(Maytinh a[100],int n)
    {
         for(int i=0;i<n-1;i++)
         {
             for(int j=i+1;j<n;j++)
             {
                 if(a[i].gia<a[j].gia)
                 {
                     Maytinh tg=a[i];
                     a[i]=a[j];
                     a[j]=tg;
                 }
             }
         }
         cout<<"________Sau khi sap xep giam dan_____"<<endl;
         for(int i=0;i<n;i++)
         a[i].output();
    }
    void Xoa(Maytinh a[100], int &n)
    {
        for(int i=0;i<n;i++)
        {
            if(strcmp(a[i].x.tennsx,"IBM")==0)
            {
                for(int j=i;j<n-1;j++)
                a[j]=a[j+1];
                n--;
                i--;
            }
        }
        cout<<"_____Sau khi xoa_____"<<endl;
        for(int i=0;i<n;i++)
        a[i].output();
    }
int main()
{
    int n;
    cout<<"nhap so may tinh: ";cin>>n;
    Maytinh a[100];
    for(int i=0;i<n;i++)
    a[i].input();
    for(int i=0;i<n;i++)
    a[i].output();
    In(a,n);
    Sapxep(a,n);
    Xoa(a,n);
    return 0;
}
