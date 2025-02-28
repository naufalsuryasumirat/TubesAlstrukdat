#ifndef MAP_H
#define MAP_H

#include "boolean.h"
#include "point.h"

#define MaxEl 100 //pake MaxEl dulu (masih awal awal) nanti kalau mau diganti bebas

#define BrsMin 0
#define BrsMax 99
#define KolMin 0
#define KolMax 99

#define M_PI 3.14159

// -1 definisi id dari struct ElType bukan bangunan (bisa berupa -, *)

typedef int indeks; //masih belom tau dipake apa engga nanti

typedef char keytype;
typedef int infotype;

typedef struct {
    keytype type;
    infotype id;
} MAP_ElType;

typedef struct {
    MAP_ElType Mem[MaxEl][MaxEl];
    POINT Player;
    int NBrs;
    int NKol;
    //catatan untuk POINT Player
    //titik origin (0,0) berada pada indeks matriks MAP (0,0), yang berarti berada di atas kiri MAP
} MAP;

/* Selektor */
#define Type(E) (E).type //Select type dari struct ElType
#define Info(E) (E).id //Select id dari struct ElType
#define NbElement(M) (M).NbElement // Select ukuran dimensi dari M (NbElement X NbElement)
#define NBrs(M) (M).NBrs
#define NKol(M) (M).NKol
#define Player(M) (M).Player //Select POINT (Lokasi) Player pada MAP
#define Elmt(M, i, j) (M).Mem[(i)][(j)] //Select struct ElType pada MAP
#define TypeElmt(M, i, j) ((M).Mem[(i)][(j)]).type //Select type dari struct ElType pada MAP indeks baris i dan kolom j
#define TypeElmtAtP(M, x, y) ((M).Mem[(y)][(x)]).type
#define InfoElmt(M, i, j) ((M).Mem[(i)][(j)]).id //Select id dari struct ElType pada MAP indeks baris i dan kolom j
#define InfoElmtAtP(M, x, y) ((M).Mem[(y)][(x)]).id

// typedef struct MAP_Node* MAP_Address;
// typedef struct {
//                 MAP Map;
//                 MAP_Address Prev;
//                 MAP_Address Next; 
//                 } MAP_Node;

// /* *** Notasi Akses: Selektor GRAPH *** */

// #define Prev(P) (P).Prev
// #define Next(P) (P).Next
// #define Nil -1

// /* *** DEFINISI PROTOTIPE PRIMITIF *** */

// /* *** KONSTRUKTOR *** */

// MAP_Node CreateEmpty (MAP_Address * P);
// /* Membentuk node baru,  */


void MakeEmptyMAP(MAP *M);
void LoadMap(MAP *M, char fileName[]);
void Move(MAP *M, char X, char* message[]);
void DrawMap(MAP M, char message[]);
void DrawMapInfo(MAP M);
int GetObject(MAP *M, char O);
POINT GetObjectP(MAP *M, char O);

#endif