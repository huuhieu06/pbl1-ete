#include <iostream>
#include <cstring>
using namespace std;

struct quan_ly_du_an{
	string name;
	float birth,id;

};
void nhap_du_lieu(const quan_ly_du_an &n){
	cout <<"Nhap vao du lieu cua ban : \n";
	cout <<"Ten nguoi dung : \n";
	cin >> n.name;
	cout <<"Ngay thang nam sinh : \n";
	cin >> n.birth;
	cout <<"Nhap id cua ban : \n ";
	cin >> n.id;
}
int main (){
	nhap_du_lieu();
	return 0;
}