#include "Tubes.h"

void insertFirstProdi(listProdi &LP, adrProdi P){
    if(first(LP)==NULL){
        first(LP)=P;
    } else {
        next(P)=first(LP);
        first(LP)=P;
    }
}
void createListProdi (listProdi &LP){
    first(LP)=NULL;
}

adrProdi createElementProdi (string nama, string akred, string ketua, int tahun){
    adrProdi P = new elementProdi;
    info(P).nama=nama;
    info(P).akred=akred;
    info(P).ketua=ketua;
    info(P).tahunBerdiri=tahun;
    next(P)=NULL;
    return P;
}
adrProdi searchProdi(listProdi LP, string nama){
    if(first(LP)==NULL){
        cout<<"List Prodi Kosong";
        return NULL;
    } else {
        adrProdi P = first(LP);
        while(P!=NULL &&info(P).nama!=nama){
            P = next(P);
            if(P==NULL){
                cout<<"Tidak ditemukan Prodi"<<endl;
                return NULL;
            }
        } return P;
    }
}
void showProdi (listProdi LP){
    if(first(LP)==NULL){
        cout<<"List Kosong"<<endl;
    } else {
        adrProdi P = first(LP);
        while(next(P)!=NULL){
            cout<<"Nama Prodi: "<<info(P).nama<<endl;
            cout<<"Akreditasi: "<<info(P).akred<<endl;
            cout<<"Ketua Prodi: "<<info(P).ketua<<endl;
            cout<<"Tahun Berdiri: "<<info(P).tahunBerdiri<<endl<<endl;
            P = next(P);
        }   cout<<"Nama Prodi: "<<info(P).nama<<endl;
            cout<<"Akreditasi: "<<info(P).akred<<endl;
            cout<<"Ketua Prodi: "<<info(P).ketua<<endl;
            cout<<"Tahun Berdiri: "<<info(P).tahunBerdiri<<endl<<endl;
    }
}
void insertLastDosen (listDosen &LD, listProdi LP, adrDosen D, string Prod){
   adrProdi X=searchProdi(LP,Prod);
    if(first(LD)==NULL){
        first(LD)=D;
        prodi(D)=X;
    } else{
    adrDosen P = first(LD);
    while(next(P)!=NULL){
        P = next(P);
        }
    next(P)=D;
    prodi(D)=X;
    }
}
void creatListDosen (listDosen &LD){
    first(LD)=NULL;
}
adrDosen createElementDosen (string namaD, string matkul, string jk,string Prod){
    adrDosen D = new elementDosen;
    info(D).namaD=namaD;
    info(D).matkul=matkul;
    info(D).jk=jk;
    info(D).Prod=Prod;
    next(D)=NULL;
    prodi(D)=NULL;
    return D;
}
void showDosen (listDosen LD){
    adrDosen D = first(LD);
    if (D==NULL){
        cout<<"List Dosen Kosong"<<endl;
    } else {
        while(next(D)!=NULL){
            cout<<"Nama Dosen: "<<info(D).namaD<<endl;
            cout<<"Mata Kuliah: "<<info(D).matkul<<endl;
            cout<<"Jenis Kelamin: "<<info(D).jk<<endl;
            cout<<"Program Pendidikan Dosen: "<<info(D).Prod<<endl<<endl;
            D=next(D);
        }   cout<<"Nama Dosen: "<<info(D).namaD<<endl;
            cout<<"Mata Kuliah: "<<info(D).matkul<<endl;
            cout<<"Jenis Kelamin: "<<info(D).jk<<endl;
            cout<<"Program Pendidikan Dosen: "<<info(D).Prod<<endl<<endl;
    }
}
void deleteDosen(listDosen &LD, string namaD){
    if(first(LD)==NULL){
        cout<<"List Dosen Kosong"<<endl;
    } else {
        adrDosen D = first(LD);
        adrDosen F = next(first(LD));
        if(info(D).namaD==namaD){
            first(LD)=F;
            next(D)=NULL;
        }else{
            while(F!=NULL&&info(F).namaD!=namaD){
                D=next(D);
                F=next(F);
                }
                next(D)=next(F);
                }
            }
        }

void showDosenDariProdi (listProdi LP, listDosen LD, string namaP){
    if(first(LP)==NULL){
        cout<<"List Kosong"<<endl;
    } else {
        adrProdi Prodi = searchProdi(LP, namaP);
        adrDosen D = first(LD);
        cout<<"Menampilkan dosen-dosen dari Program Pendidikan "<<info(Prodi).nama<<endl<<endl;
        while(D!=NULL){
            if(prodi(D)==Prodi){
            cout<<"Nama Dosen: "<<info(D).namaD<<endl;
            cout<<"Mata Kuliah: "<<info(D).matkul<<endl;
            cout<<"Jenis Kelamin: "<<info(D).jk<<endl;
            cout<<"Prodi: "<<info(D).Prod<<endl<<endl;

            }
                D=next(D);
        }

    }
}

int countDosen(listDosen LD){
    int x;
    if(first(LD)==NULL){
        return 0;
    } else {
        adrDosen P = first(LD);
        while(P!=NULL){
            P=next(P);
            x++;
        }
        return x;
    }
}

void showminiprodi(listProdi LP, listDosen LD){
    if(first(LP)==NULL){
        cout<<"Tidak Ada Prodi Terdaftar"<<endl;
    } else{
        adrProdi P = first(LP);

        while(P!=NULL){
            cout<<"- "<<info(P).nama<<": "<<countDosenDariProdi(LD,LP,info(P).nama)<<endl;
            P=next(P);
        }
    }

}

int countDosenDariProdi(listDosen LD,listProdi LP, string x){
int anjay;
adrProdi tgt = searchProdi(LP,x);
adrDosen D = first(LD);

while(D!=NULL){
    if(prodi(D)=tgt){
        anjay++;
    }
    D=next(D);
}
return anjay;
}
