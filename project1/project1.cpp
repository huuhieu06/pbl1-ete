#include <iostream>
#include <cstring>
using namespace std;

struct quan_ly_du_an{ // chua done cau truc 
	string name;
	float birth,id;

};

void nhap_du_lieu(quan_ly_du_an &n){     // chua qua tai nhap
	cout <<"Nhap vao du lieu cua ban : \n";
	cout <<"Ten nguoi dung : \n";
	getline(cin, n.name);
	cout <<"Ngay thang nam sinh : \n";
	cin >> n.birth;
	cout <<"Nhap id cua ban : \n ";
	cin >> n.id;

int main (){s
	nhap_du_lieu();
	return 0;
}