#include "Tubes.h"

using namespace std;

int main()
{
listDosen LD;
listProdi LP;

createListProdi(LP);
creatListDosen(LD);
string nama, akred, ketua;
int tahunBerdiri;
string namaD, matkul, jk, Prod;
int y;
int x;
string anjay,awiwu;
adrProdi FF;
int glob;
string BACK;

while(x!=101&&BACK!="no"){
    cout<<"Apa yang ingin anda lakukan?"<<endl;
    cout<<"1. Input Dosen"<<endl;
    cout<<"2. Input Program Pendidikan"<<endl;
    cout<<"3. Lihat Semua Prodi"<<endl;
    cout<<"4. Lihat Semua Dosen"<<endl;
    cout<<"5. Lihat List Dosen Dari Sebuah Prodi"<<endl;
    cout<<"6. Pecat Dosen"<<endl;
    cout<<"7. Keluar Dari Program"<<endl;
    cout<<"99. Otomasi"<<endl<<endl;
    cout<<"Jumlah Dosen Terdaftar : "<<countDosen(LD)<<endl;
    cout<<"Prodi Terdaftar : "<<endl;
    showminiprodi(LP,LD);
    cout<<endl<<"Pilih Menu : ";
    cin>>x;


switch(x){

case 1 :{
    cout<<"Jumlah Dosen Yang Akan Di Input : ";
    cin>>glob;
    for(int i=0;i<glob;i++){
    cout<<"Nama Dosen : ";
    cin>>namaD;
    cout<<"Mata Kuliah Dosen : ";
    cin>>matkul;
    cout<<"Jenis Kelamin Dosen : ";
    cin>>jk;
    cout<<"Program Pendidikan Dosen : ";
    cin>>Prod;
    cout<<endl<<endl;
    insertLastDosen(LD,LP,createElementDosen(namaD,matkul,jk,Prod),Prod);
    }
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 2 :{
    cout<<"Jumlah Prodi Yang Akan Di Input : ";
    cin>>glob;
    for(int i=0;i<glob;i++){
    cout<<"Masukan Nama Prodi : ";
    cin>>nama;
    cout<<"Masukan Akreditasi Prodi : ";
    cin>>akred;
    cout<<"Masukan Nama Ketua Prodi : ";
    cin>>ketua;
    cout<<"Masukan Tahun Berdiri Prodi : ";
    cin>>tahunBerdiri;
    cout<<endl<<endl;
    insertFirstProdi(LP,createElementProdi(nama, akred, ketua, tahunBerdiri));
    }
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 3 :{
    showProdi(LP);
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 4 :{
    cout<<"Jumlah Dosen Yang Terdaftar : "<<countDosen(LD)<<endl<<endl;
    showDosen(LD);
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 5 :{
    cout<<"Berikut nama prodi yang tersedia"<<endl;
    FF = first(LP);
    while(FF!=NULL){
        cout<<info(FF).nama<<endl;
        FF=next(FF);
    }
    cout<<endl<<"Masukan nama Prodi yang ingin dilihat (case sensitive) : ";
    cin>>anjay;
    cout<<endl;
    showDosenDariProdi(LP,LD,anjay);
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 6 :{
    cout<<"Jumlah Dosen Yang Akan Di PECAT !! : ";
    cin>>glob;
    for(int i=0;i<glob;i++){
    cout<<"Masukan nama dosen yang akan dipecat (case sensitive) : ";
    cin>>awiwu;
    deleteDosen(LD,awiwu);
    cout<<endl<<"Terpecat !!"<<endl;
    }
    cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
case 7 :{
    cout<<"Terima kasih !"<<endl<<endl;
    cout<<"Kevin Yoel Bernhard 1303210087"<<endl;
    cout<<"Alvie Dharia Safaraz 1303210068"<<endl;
    cout<<"IT-45-04"<<endl;
    x=101;
    break;
}break;
case 99:{
insertFirstProdi(LP,createElementProdi("IT","Unggul","Alvie",2022));
insertFirstProdi(LP,createElementProdi("IF","Unggul","Kevin",2019));

insertLastDosen(LD,LP,createElementDosen("Anjay","STD","P","IF"),"IF");
insertLastDosen(LD,LP,createElementDosen("Anung","MLTI","L","IT"),"IT");
insertLastDosen(LD,LP,createElementDosen("Yudi","STD","P","IT"),"IT");
insertLastDosen(LD,LP,createElementDosen("Mamat","PTP","L","IF"),"IF");
insertLastDosen(LD,LP,createElementDosen("Asmoro","PTP","L","IF"),"IF");
insertLastDosen(LD,LP,createElementDosen("Clara","KTI","P","IT"),"IT");
cout<<"Kembali? : (yes/no)";
    cin>>BACK;
    system("CLS");
}break;
default :
    cout<<"Ngetik apasih?"<<endl<<endl;
    system("CLS");
 }
}
cout<<"Terima kasih !"<<endl<<endl;
    cout<<"Kevin Yoel Bernhard 1303210087"<<endl;
    cout<<"Alvie Dharia Safaraz 1303210068"<<endl;
    cout<<"IT-45-04"<<endl;
return 0;
}
