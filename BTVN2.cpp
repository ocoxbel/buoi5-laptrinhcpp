#include <iostream>
#include <string>
using namespace std;
int main() {
    string Hoten;
    string Lop;
    cout <<"Nhap Ho Va Ten: ";
    getline(cin, Hoten);   
    cout <<"Nhap Lop cua ban: ";
    getline(cin, Lop); 
    cout <<"Xin chao ban "<< Hoten<<", ban dang hoc lop "<<Lop<<endl;
    return 0;
}