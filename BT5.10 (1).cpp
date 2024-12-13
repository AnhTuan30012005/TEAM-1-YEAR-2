#include <bits/stdc++.h>
using namespace std;
class Person{
	protected:
		string HoTen;
		int Tuoi;
	public:
		//---Ham tao
		Person(){
			HoTen = "";
			Tuoi = 0;
		}
		Person(string HoTen, int Tuoi){
			this -> HoTen = HoTen;
			this -> Tuoi = Tuoi;
		}
		//---Phuong thuc thiet lap va lay tt
		void setHoTen(string HoTen){
			this->HoTen = HoTen;
		}
		string getHoTen(){
			return HoTen;
		}
		void setTuoi(int Tuoi){
			this->Tuoi = Tuoi;
		}
		int getTuoi(){
			return Tuoi;
		}
		//----Qua tai toan tu >
		string getTen(){
			string Ten ="";
			int x = 0, n= HoTen.size();
			for (int i = 0;i<n; i++){
				if (HoTen[i] ==' ') x = i;
			}
			for (int i = x+1; i<n;i++){
				Ten = Ten + HoTen[i];
			}
			return Ten;
		}
		string getHoDem(){
			string HoDem ="";
			int x = 0, n= HoTen.size();
			for (int i = 0;i<n; i++){
				if (HoTen[i] ==' ') x = i;
			}
			for (int i =0 ; i<x;i++){
				HoDem = HoDem + HoTen[i];
			}
			return HoDem;
		}
		bool operator >(Person x){
			if (getTen()!=x.getTen()){
				return getTen()>x.getTen();
			} else return getHoDem() > x.getHoDem();
		}
		//-----Nhap du lieu
		void Nhap(){
			cout << "Nhap ho va ten: ";
			getline(cin,HoTen);
			cout<<"Nhap tuoi: ";
			cin >> Tuoi;
			cin.ignore();
		}
		void Xuat(){
			cout<<" "<<setw(28)<<HoTen<<setw(5)<<Tuoi;
		}
};
class Student: public Person{
	private:
		string MaSinhVien;
		string NganhDaoTao;
		double DiemTrungBinh;
	public:
		//----Ham tao
		//-k co tham so
		Student() : Person(){
			MaSinhVien = "";
			NganhDaoTao = "";
			DiemTrungBinh = 0;
		}
		//- co tham so
		Student(string HoTen, int Tuoi, string MaSinhVien, string NganhDaoTao, double DiemTrungBinh): Person(HoTen, Tuoi){
			this -> MaSinhVien = MaSinhVien;
			this -> NganhDaoTao = NganhDaoTao;
			DiemTrungBinh = 0;
		}
		//--Thiet lap lay thong tin
		void setMaSinHVien(string MaSinhVien){
			this -> MaSinhVien = MaSinhVien;
		}
		string getMaSinhVien(){
			return MaSinhVien;
		}
		void setNganhDaoTao(string NganhDaoTao){
			this -> NganhDaoTao = NganhDaoTao;
		}
		string getNganhDaoTao(){
			return NganhDaoTao;
		}
		void setDiemTrungBinh(double DiemTrungBinh){
			this -> DiemTrungBinh = DiemTrungBinh;
		}
		double getDiemTrungBinh(){
			return DiemTrungBinh;
		}
		//--Nhap du lieu
		void Nhap(){
			cout <<"Nhap ma sinh vien: ";
			getline(cin,MaSinhVien);
			Person::Nhap();
			cout<<"Nhap nganh dao tao: ";
			getline(cin,NganhDaoTao);
			cout<<"Nhap diem trung binh: ";
			cin >> DiemTrungBinh;
			cin.ignore();
		}
		string getXepLoai(){
			if (DiemTrungBinh >= 5) return "Dat"; else return "Khong dat";
			cout << endl;
		}
		void Xuat(){
			cout << " " <<setw(14) <<MaSinhVien;
			Person::Xuat();
			cout<<" "<<setw(30)<<NganhDaoTao << setw(7) << DiemTrungBinh << setw(10) <<getXepLoai()<< endl;
		}
		
};
int main(){
	int n;
	do{
		cout <<"Nhap so doi tuong: ";
		cin >> n;
		cin.ignore();
	} while (n>50||n<0);
	Student a[n];
	for (int i = 0; i<n;i++ ){
		a[i].Nhap();
	}
	
	//---Sap xep
	for (int i = 0; i < n; i++){
		for (int j=i+1;j<n;j++)
			if (a[i]>a[j]){
				Student Tam = a[i];
				a[i] = a[j];
				a[j] = Tam;
			}
	}
	cout<<"Danh sach sau khi sap xep la: "<<endl;
	cout <<setw(15)<<"Ma sinh vien"<<setw(29)<<"Ho ten"<<setw(5)<<"Tuoi"<<setw(31)<<"Nganh dao tao";
	cout <<setw(7)<<"DTB"<<setw(10)<<"Xep loai"<<endl;
	for (int i=0;i<n;i++) a[i].Xuat();
	//---Cac sinh vien co diem trung binh cao nhat
	double Max = 0;
	for (int i=0;i<n;i++){
		if (a[i].getDiemTrungBinh()>Max) Max = a[i].getDiemTrungBinh();
	}
	cout <<"Cac sinh vien co diem trung binh cao nhat la: "<<endl;
	cout <<setw(15)<<"Ma sinh vien"<<setw(29)<<"Ho ten"<<setw(5)<<"Tuoi"<<setw(31)<<"Nganh dao tao";
	cout <<setw(7)<<"DTB"<<setw(10)<<"Xep loai"<<endl;
	for (int i=0;i<n;i++){
		if (a[i].getDiemTrungBinh()==Max) a[i].Xuat();
	}
	//-----Tinh va in ra man hinh tuoi trung binh cua cac sinh vien xep loai Dat
	double TB = 0; int c=0;
	for (int i=0;i<n;i++){
		if (a[i].getXepLoai()=="Dat"){
			c++;
			TB = TB + a[i].getTuoi();
		} 
	}
	if (c>0) cout <<"Diem trinh binh cac sinh vien xep loai Dat la: "<<fixed <<setprecision(2)<<TB/c;
	else cout<<"Khong co sinh vien xep loai dat";
	cout << endl;
	
	string ndt;
	cout <<"Nhap chuoi ndt: ";
	getline(cin,ndt);
	cout << "Danh sach sau khi loai bo la: "<<endl;
	cout <<setw(15)<<"Ma sinh vien"<<setw(29)<<"Ho ten"<<setw(5)<<"Tuoi"<<setw(31)<<"Nganh dao tao";
	cout <<setw(7)<<"DTB"<<setw(10)<<"Xep loai"<<endl;
	for (int i=0;i<n;i++){
		if (a[i].getNganhDaoTao()!=ndt) a[i].Xuat();
	}
	return 0;
}
