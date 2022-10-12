#include<iostream>
#include<string>
using namespace std;

class Date{
        private:
    int ngay, thang, nam;

        public:
    void NhapNgayThangNam();
    void XuatNgayThangNam();

};
void Date::NhapNgayThangNam(){
    cout<<endl;
    cout<<"Nhap ngay: "<<endl;
    cin>>ngay;
    cout<<"Nhap thang: "<<endl;
    cin>>thang;
    cout<<"Nhap nam: "<<endl;
    cin>>nam;
}

