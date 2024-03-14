#include <iostream>
#include <string>
using namespace std;

class sophuc
{
private:
    float phanthuc;
    float phanao;

public:
    sophuc()
    {
        phanthuc = 1;
        phanao = 1;
    }

    sophuc(int thuc, int ao)
    {
        phanthuc = thuc;
        phanao = ao;
    }
};

class thoigian
{
private:
    float gio;
    float phut;
    float giay;

public:
    thoigian(int g, int p, int gi)
    {
        gio = g;
        phut = p;
        giay = gi;
    }

    thoigian(int g, int index)
    {
        gio = g;
        phut = 0;
        giay = 1;
    }
};

class hocsinh
{
private:
    string hoten;
    int tuoi;
    string diachi;
    int diemtoan;
    int diemly;
    int diemvan;

public:
    hocsinh()
    {
        hoten = "null";
        tuoi = 0;
        diachi = "null";
        diemtoan = 0;
        diemly = 0;
        diemvan = 0;
    }
    hocsinh(string name, int age, string address, int math_score, int physical_score, int literature_score)
    {
        hoten = name;
        tuoi = age;
        diachi = address;
        diemtoan = math_score;
        diemly = physical_score;
        diemvan = literature_score;
    }

    hocsinh(const hocsinh &hs1)
    {
        hoten = hs1.hoten;
        tuoi = hs1.tuoi;
        diachi = hs1.diachi;
        diemtoan = hs1.diemtoan;
        diemly = hs1.diemly;
        diemtoan = hs1.diemvan;
    }

    void xuat()
    {
        cout << " name: " << hoten << "\n";
        cout << " tuoi: " << tuoi << "\n";
        cout << " dia chi: " << diachi << "\n";
        cout << " diem toan: " << diemtoan << "\n";
        cout << " diem ly: " << diemly << "\n";
        cout << " diem van: " << diemvan << "\n";
    }
};


int main()
{
    sophuc sp;               // phần thực là 1 phần ảo là 1
    sophuc sp1(1, 2);        // phần thực bằng 1 , phần ảo bằng 2
    thoigian time1(3, 2, 1); // giờ bằng 3 phút bằng 2 giây bằng 1
    thoigian time2(4, 4);    // giờ bằng 4 , phút bằng 0, giây bằng 1
    hocsinh hs;
    hocsinh hs1("Ngo Trong Liem", 19, "Thai Binh ", 10, 10, 8);
    hocsinh hs2("Ngo Trong Liem 2", 20, "Thai Binh ", 10, 10, 10);

    hs1.xuat();
    cout << "--------------------------------------" << endl;
    hs2.xuat();
    system("pause");
    return 0;
}