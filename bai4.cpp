#include<bits/stdc++.h>
class Phieu;
using namespace std;
class Nhanvien
{
    char tennv[30];
    char chucvu[30];
    char tenph[30];
    char maph[30];
    char truongph[30];
public:
    void nhap()
    {
       cout<<"ten nhan vien: ";fflush(stdin);gets(tennv);
       cout<<"chuc vu: ";fflush(stdin);gets(chucvu);
       cout<<"kiem ke tai phong: ";fflush(stdin);gets(tenph);
       cout<<"ma phong: ";fflush(stdin);gets(maph);
       cout<<"truong phong";fflush(stdin);gets(truongph);

    }   
    void xuat()
    {
      cout<<"Nhan vien kiem ke: "<<tennv<<"\t"<<"Chuc vu: "<<chucvu<<endl;
      cout<<"Kiem ke tai phong: "<<tenph<<"\t"<<"Ma phong: "<<maph<<endl;
      cout<<"Truong phong: "<<truongph<<endl;
    }
    friend class Phieu;
};
class Taisan
{
    char tents[30];
    int solg;
    char tinhtrang[30];
public:
    void nhap()
    {
        cout<<"ten tai san: ";fflush(stdin);gets(tents);
        cout<<"so luong ";cin>>solg;
        cout<<"tinh trang: ";fflush(stdin);gets(tinhtrang);
    }
    void xuat()
    {
        cout<<setw(20)<<tents<<setw(20)<<solg<<setw(20)<<tinhtrang<<endl;
    }
    friend class Phieu;
    friend void Sua(Phieu a);
};
class Phieu
{
    char maphieu[30];
    char ngay[30];
    int n;
    Nhanvien x;
    Taisan y[100];
public:
    void nhap()
    {
        cout<<"nhap ma phieu: ";fflush(stdin);gets(maphieu);
        cout<<"nhap ngay kiem ke: ";fflush(stdin);gets(ngay);
        x.nhap();
        cout<<"nhap so tai san: ";cin>>n;
        for(int i=0;i<n;i++)
         y[i].nhap();
    }
    void xuat()
    {
        cout<<setw(30)<<"PHIEU KIEM KE TAI SAN"<<endl;
        cout<<"Ma phieu: "<<maphieu<<"\t"<<"Ngay kiem ke: "<<ngay<<endl;
        x.xuat();
        cout<<setw(20)<<"Ten tai san"<<setw(20)<<"So luong"<<setw(20)<<"Tinh trang"<<endl;
        for(int i=0;i<n;i++)
            y[i].xuat();
    }
    friend void Sua(Phieu a);
};
void Sua(Phieu a)
{
    for(int i=0;i<a.n;i++)
    {
        if(strcmp(a.y[i].tents,"May vi tinh")==0)
           a.y[i].solg=2;
    }
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    Sua(a);
    return 0;
}

/*
2
2
2
*/