#include <iostream>
using namespace std;
class PhanSo
{
private:
    int tuso, mauso;
public:
    void Nhap();
    void Xuat();
    PhanSo Cong (PhanSo a);
    PhanSo Tru (PhanSo a);
    PhanSo Nhan(PhanSo a);
    PhanSo Chia(PhanSo a);
};
void PhanSo :: Nhap()
{
    cin>> tuso;
    cin>> mauso;
}
void PhanSo :: Xuat()
{
    cout<< tuso;
    cout<<"/"<< mauso<<"\n";
}
PhanSo PhanSo:: Cong (PhanSo a)
{
    PhanSo c;
    c.mauso = a.mauso * mauso;
    c.tuso = tuso* a.mauso + a.tuso* mauso;
    return c;
}
PhanSo PhanSo:: Tru (PhanSo a)
{
    PhanSo c;
    c.mauso = mauso * a.mauso;
    c.tuso = tuso * a.mauso - a.tuso *mauso;
    return c;
}
PhanSo PhanSo :: Nhan(PhanSo a)
{
    PhanSo c;
    c.tuso = tuso * a.tuso;
    c.mauso = mauso * a.mauso;
    return c;
}
PhanSo PhanSo:: Chia (PhanSo a)
{
    PhanSo c;
    c.tuso = tuso * a.mauso;
    c.mauso = mauso * a.tuso;
    return c;
}
int main ()
{
    PhanSo a;
    a.Nhap();
    a.Xuat();
    PhanSo b;
    b.Nhap();
    b.Xuat();
    PhanSo c = a.Cong(b);
    c.Xuat();
    PhanSo d = a.Tru(b);
    d.Xuat();
    PhanSo e = a.Nhan(b);
    e.Xuat();
    PhanSo f = a.Chia(b);
    f.Xuat();
    return 0;
}
