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



hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

huyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy
<<<<<<< HEAD

=======
void Date::XuatNgayThangNam(){
    cout<<"Thoi gian: "<<ngay<<"/"<<thang<<"/<<nam";
    cout<<"Lien khung";
}
>>>>>>> 057ff55dbb232313bc089dc47462e88bb398def3
