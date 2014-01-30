#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define size 102

using namespace std;



int main(int argc, char *argv[])
{
    char string[size];
    char cari[12];
    char hasil[11];
    int i,y,z,w,jml;
    int pjg_cari;
    int pjg_str;
    int panjang;
    bool ada;
    
    cout<<"Masukkan kumpulan karakternya [maks 100] : ";
    fflush(stdin);cin.get(string, 100);
    
    cout<<"Masukan string yang dicari [maks 10 karakter] : ";
    fflush(stdin);cin.get(cari, 10);
    
    pjg_str = strlen(string);
    pjg_cari = strlen(cari);
    ada = false;
    jml=0;
    z=0;
    w=0;
    while(w!=pjg_str)
    {
        for(y=0;y<pjg_cari;y++)
        {
          if(cari[y] == string[w])
          {
               z++;   
          }
          w++;
        } 
        if(z == pjg_cari)
          {
               jml++;
          }
          z=0;       
        w = w - pjg_cari + 1;
    }
    cout<<endl;
    cout<<"Jumlah data yang di cari : "<<jml<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
