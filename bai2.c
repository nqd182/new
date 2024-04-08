#include<bits/stdc++.h>
using namespace std;
class Nguoi
{
protected:
    char hoten[30];
    int tuoi;
public:
    void nhap()
    {
        cout<<"nhap ho ten: ";fflush(stdin);gets(hoten);
        cout<<"nhap tuoi: ";fflush(stdin);gets(tuoi);
    }
    void xuat()
    {
        cout<<"ho ten: "<<hoten<<endl;
        cout<<" tuoi: "<<tuoi<<endl;
    }
};
class Benhvien
{
    char tenbv[30];
    char diachi[30];
    char giamdoc[30];
    friend class Benhnhan;
};
class Benhnhan:public Nguoi
{
    char ma[30];
    char ts[30];
    char cd[30];
    Benhvien x;
public:
    void nhap()
    {
    cout<<"ma benh nhan: ";fflush(stdin);gets(ma);
    cout<<"tien su: ";fflush(stdin);gets(ts);
    cout<<"chuan doan: ";fflush(stdin);gets(cd);
    cout<<"ten benh vien: ";fflush(stdin);gets(x.tenbv);
    cout<<"dia chi benh vien:";fflush(stdin);gets(x.diachi);
    cout<<"giam doc: ";fflush(stdin);gets(x.giamdoc);

    }
    void xuat()
    {
    cout<<"ma benh nhan: "<<ma<<endl;
    cout<<"tien su: "<<ts<<endl;
    cout<<"chuan doan: "<<cd<<endl;
    cout<<"ten benh vien: "<<x.tenbv<<endl;
    cout<<"dia chi benh vien:"<<x.diachi<<endl;
    cout<<"giam doc: "<<x.giamdoc);
    }
};
int main()
{
    int n;
    Benhnhan a[100];
    cout<<"nhap so benh nhan: ";cin>>n;
    for(int i=0;i<n;i++)
    a[i].nhap();
    for(int i=0;i<n;i++)
    a[i]
}

