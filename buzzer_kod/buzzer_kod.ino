int DO=0;
int re=0;
int mi=0;
int fa=0;
int sol=0;
int la=0;
int si=0;
int solD=0;//sol# notası

void setup() {
  pinMode(12,OUTPUT);//12.pini çıkış pini olarak tanımlar

}
 //HAYAT BAYRAM OLSA :) 
void loop() { 
  // c=do
  // d=re
  // e=mi
  // f=fa
  // g=sol
  // a=la
  // b=si
  // gs=sol#
 
  
  //notaların frekans değerleri
 DO=523;
  re=587;
  mi=659;
  fa=698;
  sol=784; 
  la=440;
  si=494;
  solD=415;
  
//mi
  tone(12,659);/* pasif buzzerlerde ses elde etmek için tone komutu kullanılır ve 
  çağrı frekansını ayarlar*/
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
  tone(12,587);
  delay(200);
  tone(12,523);
  
   delay(500);
     
    tone(12,659);
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
  tone(12,587);
  delay(200);
  tone(12,523);
  
   delay(500);
  
    tone(12,659);
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
  tone(12,587);
  delay(200);
  tone(12,523);
  delay(500);
   tone(12,494);
  delay(1000);
 //re 
  tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
  
  delay(500);
  
  tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
   delay(500);
  
    tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
  
  delay(500);
  tone(12,440);
  delay(1000);
  //mi
  tone(12,659);
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
    tone(12,587);
  delay(200);
  tone(12,523);
  delay(500);
  
    tone(12,659);
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
    tone(12,587);
  delay(200);
  tone(12,523);
  delay(500);
  
    tone(12,659);
  delay(500);
  tone(12,698);
  delay(200);
  tone(12,659);
  delay(500);
    tone(12,587);
  delay(200);
  tone(12,523);
  delay(500);
  //re
  tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
  
  delay(500);
  
  tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
   delay(500);
  
    tone(12,587);
  delay(500);
  tone(12,659);
  delay(200);
  tone(12,587);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,494);
  delay(500);  
  
  tone(12,440);
  delay(700);
  tone(12,440);
  delay(200);
  tone(12,440);
  delay(200);
  tone(12,494);
  delay(200);
//do  
  tone(12,523);
  delay(500);
  tone(12,523);
  delay(200);
  tone(12,523);
  delay(200);
   tone(12,523);
  delay(200);
  tone(12,494);
  delay(500);
  tone(12,440);
  delay(500);
  
  tone(12,523);
  delay(200);
  tone(12,523);
  delay(200);
  tone(12,494);
  delay(500);
  tone(12,440);
  delay(500);
  
  
  tone(12,523);
  delay(200);
  tone(12,494);
  delay(200);
   tone(12,523);
  delay(200);
   tone(12,587);
  delay(500);
   tone(12,523);
  delay(200);
   tone(12,494);
  delay(500);
  
  
  delay(600);
  tone(12,415);
  delay(200);
  tone(12,415);
  delay(200);
  tone(12,440);
  delay(500);
  
  tone(12,494);
  delay(500);
  tone(12,494);
  delay(200);
  tone(12,494);
  delay(200);
  tone(12,494);
  delay(200);
  tone(12,440);
  delay(500);
  tone(12,415);
  delay(500);
  
   tone(12,494);
  delay(500);
  tone(12,494);
  delay(200);
   tone(12,440);
  delay(500);
  tone(12,415);
  delay(500);
  
   tone(12,494);
  delay(200);
   tone(12,440);
  delay(200);
    tone(12,494);
  delay(200);
    tone(12,523);
  delay(500);
   tone(12,494);
  delay(200);
   tone(12,440);
  delay(500);
  
 
  noTone(12);// tonun üretilmesinin durdurulacağı Arduino pini.
  delay(600);
  
  
  }
