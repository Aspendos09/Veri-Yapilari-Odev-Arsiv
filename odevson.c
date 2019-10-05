#include <stdio.h>
#include <string.h>
int main() {

  char puzzle[15][15]={{'G','S','L','N','F','R','N','P','R','E','N','D','P','O','R'},
                       {'N','A','N','F','D','K','U','O','L','M','K','I','A','C','N'},
                       {'I','F','V','A','C','S','F','P','T','A','A','S','R','O','H'},
                       {'L','E','P','I','I','S','I','N','R','S','T','N','T','A','A'},
                       {'I','S','R','L','I','R','L','N','M','I','Y','I','D','Y','D'},
                       {'A','B','T','L','A','I','D','G','S','O','S','R','T','E','R'},
                       {'W','U','E','N','G','T','N','A','F','I','S','I','D','G','R'},
                       {'G','N','A','H','E','I','N','S','H','S','V','S','M','O','O'},
                       {'C','H','T','O','N','V','I','E','C','A','P','S','S','T','B'},
                       {'L','O','A','I','U','B','R','A','C','K','E','T','E','O','R'},
                       {'W','I','A','D','E','T','N','U','O','M','R','R','L','T','O'},
                       {'R','T','G','E','R','M','S','E','U','E','I','E','I','H','W'},
                       {'E','F','S','H','A','D','R','I','E','F','E','P','T','E','N'},
                       {'A','S','W','I','T','C','H','T','D','P','L','A','Q','U','E'},
                       {'D','N','E','R','G','S','H','E','L','E','S','P','A','C','N'}};

char girdi[15];
char dummy_x[15];
char dummy_y[15];
char arrprt[15][15];

for (int z = 0; z < 15; z++) {

    for (int q = 0; q < 15; q++) {
       arrprt[z][q]='*';//bastirilacak array yildizla dolduruldu
    }
}

scanf("%s",girdi);
int girdi_uzunluk = strlen(girdi);

for (int y = 0; y < 15; y++) {//duseyde hareket


    for (int x = 0; x < 15; x++) {//yatayda hareket

      if (girdi[0]==puzzle[y][x]) {

        //dummy_x in kaydi
        for (int a = 0; a < 15-x; a++) {
          dummy_x[a]=puzzle[y][x+a];

        }

        //dummy_y nin kaydi
        for (int b = 0; b < 15-y; b++) {
          dummy_y[b]=puzzle[b+y][x];
        }

        if (strncmp(dummy_x,girdi,girdi_uzunluk)==0) {//dummy_x ile girdi karsilastirmasi

          for (int o=0 ; o < girdi_uzunluk ; o++) {
            arrprt[y][x+o]=dummy_x[o];
          }

            for(int q=0; q < 15; q++){//q=y

              for (int u = 0; u < 15; u++) {//u=x

                  printf("%c",arrprt[q][u]);
                  if (u%14==0&&u!= 0) {
                    printf("\n");
                  }
              }

            }
            return 0;//eger x yonunde bulunduysa programi bitir
        }//dummy_x girdi if sonu

     else if (strncmp(dummy_y,girdi,girdi_uzunluk)==0) {//dummy_y ile girdi karsilastirmasi

          for (int o=0 ; o < girdi_uzunluk ; o++) {
            arrprt[y+o][x]=dummy_y[o];
          }

            for(int q=0; q < 15; q++){//q=y

              for (int u = 0; u < 15; u++) {//u=x

                  printf("%c",arrprt[q][u]);
                  if (u%14==0&&u!=0) {
                    printf("\n");
                  }
              }

            }
            return 0;//eger y yonunde bulunduysa programi bitir
            //dummy_y girdi if sonu
        }

    } //ilk harf if sonu

}//yatay sonu
}//dusey sonu

{

  for(int q=0; q < 15; q++){//q=y

    for (int u = 0; u < 15; u++) {//u=x

        printf("%c",arrprt[q][u]);
        if (u%14==0&&u!=0) {
          printf("\n");
        }
    }
}
return 0;
}

  return 0;
}
