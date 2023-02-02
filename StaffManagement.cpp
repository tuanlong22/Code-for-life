#include<iostream>
#include<string>
using namespace std;
// l?p nhân viên s?a ?ng nu?c
class NhanVienSuaOngNuoc{
  private:
     string hoten;
     int tuoi;
     string gioi_tinh;
     string dia_chi;
     string sdt;
     float chieu_cao;
     float can_nang;
     float so_h_sua;
  public:
     void Nhap();
     void Xuat();
     float Tinh_Tien_Luong();
      NhanVienSuaOngNuoc();
     ~NhanVienSuaOngNuoc();
};

// hàm nh?p thông tin nhân viên s?a ?ng nu?c
void NhanVienSuaOngNuoc::Nhap(){
    cout<<"\nNhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout<<"\nNhap tuoi: ";
    cin >> tuoi;
    cout<<"\nNhap gioi tinh: ";
    cin.ignore();
    getline(cin,gioi_tinh);
     cout<<"\nNhap dia chi: ";
     cin.ignore();
    getline(cin,dia_chi);
     cout<<"\nNhap so dien thoai: ";
     cin.ignore();
    getline(cin,sdt);
    cout<<"\nNhap chieu cao: ";
    cin>>chieu_cao;
    cout<<"\nNhap can nang: ";
    cin>>can_nang;
    cout<<"\nNhap so gio sua: ";
    cin>>so_h_sua;
    }
void NhanVienSuaOngNuoc::Xuat(){
    cout<<"\nHo ten: "<<hoten;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nGioi tinh: "<<gioi_tinh;
     cout<<"\nDia chi: "<<dia_chi;
     cout<<"\nSo dien thoai: "<<sdt;
    cout<<"\nChieu cao: "<<chieu_cao;
    cout<<"\nCan nang: "<<can_nang;
    cout<<"\nSo gio sua: "<<so_h_sua;
    cout<<"\nTien Luong: "<<(size_t)Tinh_Tien_Luong();
    }
float NhanVienSuaOngNuoc::Tinh_Tien_Luong(){
    return so_h_sua*50000;
}
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc(){}
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc(){}
//l?p nhân viên giao hàng
class NhanVienGiaoHang{
  private:
     string hoten;
     int tuoi;
     string gioi_tinh;
     string dia_chi;
     string sdt;
     float chieu_cao;
     float can_nang;
     int so_hang_giao;
  public:
     void Nhap();
     void Xuat();
     float Tinh_Tien_Luong();
     
     NhanVienGiaoHang();
     ~NhanVienGiaoHang();
};

// hàm nh?p thông tin nhân viên s?a ?ng nu?c
void NhanVienGiaoHang::Nhap(){
    cout<<"\nNhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout<<"\nNhap tuoi: ";
    cin >> tuoi;
    cout<<"\nNhap gioi tinh: ";
    cin.ignore();
    getline(cin,gioi_tinh);
     cout<<"\nNhap dia chi: ";
     cin.ignore();
    getline(cin,dia_chi);
     cout<<"\nNhap so dien thoai: ";
     cin.ignore();
    getline(cin,sdt);
    cout<<"\nNhap chieu cao: ";
    cin>>chieu_cao;
    cout<<"\nNhap can nang: ";
    cin>>can_nang;
    cout<<"\nNhap so hang giao: ";
    cin>>so_hang_giao;
    }
void NhanVienGiaoHang::Xuat(){
    cout<<"\nHo ten: "<<hoten;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nGioi tinh: "<<gioi_tinh;
     cout<<"\nDia chi: "<<dia_chi;
     cout<<"\nSo dien thoai: "<<sdt;
    cout<<"\nChieu cao: "<<chieu_cao;
    cout<<"\nCan nang: "<<can_nang;
    cout<<"\nSo hang giao: "<<so_hang_giao;
    cout<<"\nTien Luong: "<<(size_t)Tinh_Tien_Luong();
    }   
float NhanVienGiaoHang::Tinh_Tien_Luong(){
    return so_hang_giao*33500;
}    
NhanVienGiaoHang::NhanVienGiaoHang(){}
NhanVienGiaoHang::~NhanVienGiaoHang(){}
// l?p nhân viên xe ôm
class NhanVienXeOm{
  private:
     string hoten;
     int tuoi;
     string gioi_tinh;
     string dia_chi;
     string sdt;
     float chieu_cao;
     float can_nang;
     float so_km;
  public:
     void Nhap();
     void Xuat();
     float Tinh_Tien_Luong();
     
     NhanVienXeOm();
     ~NhanVienXeOm();
};

// hàm nh?p thông tin nhân viên s?a ?ng nu?c
void NhanVienXeOm::Nhap(){
  cout<<"\nNhap ho ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout<<"\nNhap tuoi: ";
    cin >> tuoi;
    cout<<"\nNhap gioi tinh: ";
    cin.ignore();
    getline(cin,gioi_tinh);
     cout<<"\nNhap dia chi: ";
     cin.ignore();
    getline(cin,dia_chi);
     cout<<"\nNhap so dien thoai: ";
     cin.ignore();
    getline(cin,sdt);
    cout<<"\nNhap chieu cao: ";
    cin>>chieu_cao;
    cout<<"\nNhap can nang: ";
    cin>>can_nang;
    cout<<"\nNhap so km: ";
    cin>>so_km;
    }
void NhanVienXeOm::Xuat(){
    cout<<"\nHo ten: "<<hoten;
    cout<<"\nTuoi: "<<tuoi;
    cout<<"\nGioi tinh: "<<gioi_tinh;
     cout<<"\nDia chi: "<<dia_chi;
     cout<<"\nSo dien thoai: "<<sdt;
    cout<<"\nChieu cao: "<<chieu_cao;
    cout<<"\nCan nang: "<<can_nang;
    cout<<"\nSo km chay duoc: "<<so_km;
    cout<<"\nTien Luong: "<<(size_t)Tinh_Tien_Luong();
    }    
float NhanVienXeOm::Tinh_Tien_Luong(){
    return so_km*10000;
}    
NhanVienXeOm::NhanVienXeOm(){}
NhanVienXeOm::~NhanVienXeOm(){}
// hàm tính t?ng ti?n luong
double Tong_tien_luong_nv_ong_nuoc(NhanVienSuaOngNuoc ds[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}
double Tong_tien_luong_nv_giao_hang(NhanVienGiaoHang ds[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}
double Tong_tien_luong_nv_xe_om(NhanVienXeOm ds[], int n){
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}

void Ham_hoan_vi_nhan_vien_ong_nuoc(NhanVienSuaOngNuoc &x, NhanVienSuaOngNuoc &y){
       NhanVienSuaOngNuoc hv;
       hv = x;
       x = y;
       y = hv;
}

void Ham_xuat_ds_nvongnuoc_giam_dan_theo_luong(NhanVienSuaOngNuoc ds[], int n){
    for(int i = 0;i < n-1; i++){
        for(int j = 1; j<n; j++){
            if(ds[i].Tinh_Tien_Luong()<ds[j].Tinh_Tien_Luong()){
                Ham_hoan_vi_nhan_vien_ong_nuoc(ds[i],ds[j]);
            }
        }
    }
    
    for(int i =0; i< n; i++){
        ds[i].Xuat();
        cout<<endl;
    }
}

void Ham_hoan_vi_nhan_vien_giao_hang(NhanVienGiaoHang &x, NhanVienGiaoHang &y){
       NhanVienGiaoHang hv;
       hv = x;
       x = y;
       y = hv;
}

void Ham_xuat_ds_nvgiaohang_giam_dan_theo_luong(NhanVienGiaoHang ds[], int n){
    for(int i = 0;i < n-1; i++){
        for(int j = 1; j<n; j++){
            if(ds[i].Tinh_Tien_Luong()<ds[j].Tinh_Tien_Luong()){
                Ham_hoan_vi_nhan_vien_giao_hang(ds[i],ds[j]);
            }
        }
    }
    
    for(int i =0; i< n; i++){
        ds[i].Xuat();
        cout<<endl;
    }
}

void Ham_hoan_vi_nhan_vien_xe_om(NhanVienXeOm &x, NhanVienXeOm &y){
       NhanVienXeOm hv;
       hv = x;
       x = y;
       y = hv;
}

void Ham_xuat_ds_nvxeom_giam_dan_theo_luong(NhanVienXeOm ds[], int n){
    for(int i = 0;i < n-1; i++){
        for(int j = 1; j<n; j++){
            if(ds[i].Tinh_Tien_Luong()<ds[j].Tinh_Tien_Luong()){
                Ham_hoan_vi_nhan_vien_xe_om(ds[i],ds[j]);
            }
        }
    }
    
    for(int i =0; i< n; i++){
        ds[i].Xuat();
        cout<<endl;
    }
}
void Menu(NhanVienSuaOngNuoc suaongnuoc[], NhanVienGiaoHang giaohang[],NhanVienXeOm xeom[], int l, int m, int n){
    int chuong_trinh;

    while(true){
          cout<<"\n\n\t\t =========Xin moi chon chuong trinh =========";
    cout<<"\n 1. Nhap thong tin nhan vien sua ong nuoc";
    cout<<"\n 2. Nhap thong tin nhan vien giao hang";
    cout<<"\n 3. Nhap thong tin nhan vien xe om";
    cout<<"\n 4. Xuat thong tin nhan vien sua ong nuoc";
    cout<<"\n 5. Xuat thong tin nhan vien giao hang";
    cout<<"\n 6. Xuat thong tin nhan vien xe om";
    cout<<"\n 7. Xuat tien luong cua nhan vien";
    cout<<"\n 8. Xuat danh sach nhan vien sua ong nuoc giam dan theo luong";
    cout<<"\n 9. Xuat danh sach nhan vien giao hang giam dan theo luong";
    cout<<"\n 10. Xuat danh sach nhan vien xe om giam dan theo luong";
    cout<<"\n 0. Ket thuc chuong trinh"<<endl;
     cout << "Xin moi nhap lua chon: "<<endl; cin>>chuong_trinh;
        if(chuong_trinh == 1){
            NhanVienSuaOngNuoc nv_ong_nuoc;
            cout<<"\n\n\t\t Xin moi nhap thong tin nhan vien sua ong nuoc"<<endl;
            nv_ong_nuoc.Nhap();
            suaongnuoc[l] = nv_ong_nuoc;
            l++;
        }
        
        else if(chuong_trinh == 2){
            NhanVienGiaoHang nv_giao_hang;
            cout<<"\n\n\t\t Xin moi nhap thong tin nhan vien giao hang"<<endl;
            nv_giao_hang.Nhap();
            giaohang[m] = nv_giao_hang;
            m++;
        }
        
        else if(chuong_trinh == 3){
            NhanVienXeOm nv_xe_om;
            cout<<"\n\n\t\t Xin moi nhap thong tin nhan vien xe om"<<endl;
            nv_xe_om.Nhap();
            xeom[n] = nv_xe_om;
            n++;
        }
        
         else if(chuong_trinh == 4){
             cout<<"\n\n\t\t Thong tin nhan vien sua ong nuoc"<<endl;
            for(int i=0;i<l;i++){
                suaongnuoc[i].Xuat();
                cout<<endl;
            }
            cout<<"Tong tien luong: "<< (size_t)Tong_tien_luong_nv_ong_nuoc(suaongnuoc, l);
            system("pause");
        }
        
        else if(chuong_trinh == 5){
            cout<<"\n\n\t\t Thong tin nhan vien giao hang"<<endl;
            for(int i=0;i<m;i++){
                giaohang[i].Xuat();
                cout<<endl;
            }
            cout<<"Tong tien luong: "<< (size_t)Tong_tien_luong_nv_giao_hang(giaohang, m);
            system("pause");
        }
        
        else if(chuong_trinh == 6){
            cout<<"\n\n\t\t Thong tin nhan vien xe om"<<endl;
            for(int i=0;i<n;i++){
                xeom[i].Xuat();
                cout<<endl;
            }
            cout<<"Tong tien luong: "<< (size_t)Tong_tien_luong_nv_xe_om(xeom, n);
            system("pause");
        }
        
        else if(chuong_trinh == 0){
            break;
        }
        
        else if(chuong_trinh == 7){
            cout<<"\n\n\t\t Tong tien cong ty tra luong hang thang: "<<(size_t)(Tong_tien_luong_nv_xe_om(xeom,n) + Tong_tien_luong_nv_ong_nuoc(suaongnuoc,l)+ Tong_tien_luong_nv_giao_hang(giaohang,m));
            system("pause");
        }
        
          else if(chuong_trinh == 8){
            cout<<"\n\n\t\t Danh sach nhan vien sua ong nuoc giam dan theo luong: "<<endl;
            Ham_xuat_ds_nvongnuoc_giam_dan_theo_luong(suaongnuoc,l);
            system("pause");
        }
        
         else if(chuong_trinh == 9){
            cout<<"\n\n\t\t Danh sach nhan vien giao hang giam dan theo luong: "<<endl;
            Ham_xuat_ds_nvgiaohang_giam_dan_theo_luong(giaohang,m);
            system("pause");
        }
        
         else if(chuong_trinh == 10){
            cout<<"\n\n\t\t Danh sach nhan vien xe om giam dan theo luong: "<<endl;
            Ham_xuat_ds_nvxeom_giam_dan_theo_luong(xeom,n);
            system("pause");
        }
        
        else{
            cout<<"\n\n\t\t Nhap sai xin moi nhap lai.";
    }
}
}

int main(){
    int l = 0; 
    int m= 0; 
    int n=0;
  NhanVienSuaOngNuoc suaongnuoc[100]; // m?ng nhân viên s?a ?ng nu?c
  NhanVienGiaoHang giaohang[100];
  NhanVienXeOm xeom[100];
    Menu(suaongnuoc,giaohang,xeom,l,m,n);
    
    
 
    return 0;
}

