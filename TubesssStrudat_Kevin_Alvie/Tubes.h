#ifndef INCLUDE_TUBES_H
#define INCLUDE_TUBES_H

#include <iostream>
#include <stdlib.h>1
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define prodi(Q) (Q)->prodi

typedef struct elementProdi *adrProdi;
typedef struct elementDosen *adrDosen;
typedef struct dataProdi infotypeProdi;
typedef struct dataDosen infotypeDosen;

struct dataProdi {
     string nama, akred, ketua;
     int tahunBerdiri;
};

struct dataDosen {
    string namaD, matkul, jk, Prod;
};

struct elementDosen {
    infotypeDosen info;
    adrDosen next;
    adrProdi prodi;
};

struct elementProdi {
    infotypeProdi info;
    adrProdi next;
};

struct listProdi {
    adrProdi first;
};

struct listDosen{
    adrDosen first;
};

void insertFirstProdi(listProdi &LP, adrProdi P);
void createListProdi (listProdi &LP);
adrProdi createElementProdi (string nama, string akred, string ketua, int tahun);
adrProdi searchProdi(listProdi LP, string nama);
void showProdi (listProdi LP);
void insertLastDosen (listDosen &LD, listProdi LP, adrDosen D, string Prod);
void creatListDosen (listDosen &LD);
adrDosen createElementDosen (string namaD, string matkul, string jk, string Prod);
void showDosen (listDosen LD);
void deleteDosen (listDosen &LD, string namaD);
void showDosenDariProdi (listProdi LP, listDosen LD, string namaP);
int countDosen(listDosen LD);
void showminiprodi(listProdi LP, listDosen LD);
int countDosenDariProdi(listDosen LD, listProdi LP , string x);


#endif // INCLUDE_TUBES_H

// ini komen buat tugas WGTIK wkwkwk Kevin Yoel Bernhard 1303210087 IT4504
