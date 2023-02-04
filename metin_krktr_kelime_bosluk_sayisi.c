#include <stdio.h>
// klavyeden girilen metnin karakter sayısını,kelime sayısını ve boşluk sayısını hesapla

int main()

{
 
  int KelimeSayisi = 1; // eğer 0'dan başlatırsan input olarak 1 kelime girildiğinde output: 0 kelime vardır 
  
  int KarakterSayisi =  0;
  
  int i = 0 ;
  
  char metin[100];
  
  puts("bir metin girin:");   
  gets(metin);
  
 while(metin[i] != '\0')  // metin[i] elemanı boşluk olmadığı müddetçe... 
 {
    
  if(metin[i] == ' ') 
  {
   KelimeSayisi++ ;  // metin[i] elemanı boşluğa eşitse KelimeSayisi 1 arttırılır.
  }  

  KarakterSayisi++ ;
  
  i++ ;   
 }  

  int BoslukSayisi = KelimeSayisi - 1; // boşluk sayısı = (kelime sayısı - 1)  bir metinde 3 kelime var ise 2 boşluk vardır.
  
  printf("metinde %d tane karakter vardir.\n",KarakterSayisi);
  
  printf("metinde %d tane kelime vardir.\n",KelimeSayisi);
  
  printf("metinde %d tane bosluk vardir.",BoslukSayisi);

  return 0;
  
}