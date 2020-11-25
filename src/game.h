#ifndef GAME_H
#define GAME_H

#include "wahana.h"
#include "map.h"
#include "jam.h"
#include "mesinkata.h"
#include "phase_prep.h"
#include "materials.h"
#include "arrayaction.h"

typedef struct {
    MAP map;
    char PName[25];
    tAddress wahanaType[10];
    int wahanaCount;
    WAHANA_Instance wahana[50];
    //int barangType;
    //int barang;
    int antrianData;
    int money;
    JAM time;
    int day; //penanda hari ke berapa
    TabMaterial MaterialList;
    ArrayAction_TabInt actions;
} GAME;


#define Map(G) (G).map
#define PName(G) (G).PName
#define WahanaType(G) (G).wahanaType
#define ElWahanaType(G,i) (G).wahanaType[i]
#define WahanaCount(G) (G).wahanaCount
#define Wahana(G) (G).wahana
#define Barang(G) (G).barangType
#define BarangData(G) (G).barang
#define AntrianData(G) (G).antrianData
#define Money(G) (G).money
#define Time(G) (G).time
#define MaterialList(G) (G).MaterialList // Harga dan Tipe Material dan Kuantitas yang dimiliki
#define Day(G) (G).day
#define Actions(G) (G).actions // Array action berisi durasi tiap action yang dilakukan

extern GAME gameInstance;

#define _map Map(gameInstance)
#define _name PName(gameInstance)
#define _time Time(gameInstance)
#define _wType(i) ElWahanaType(gameInstance,i) 
#define _wCount WahanaCount(gameInstance)
#define _money Money(gameInstance) //gua tambahin vin -Noler
#define _mlist MaterialList(gameInstance)
#define _actions Actions(gameInstance)

void GAME_Init();
void GAME_Save();
void GAME_Load();

#endif