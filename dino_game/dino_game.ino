// dino game 
#include<LiquidCrystal.h>
int rs=12, en=11,d4=5,d5=4,d6=3,d7=2;
int trigger=9;
int echo =8;
float distanceIncm=100;
int timee=0;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int score=0;
int playerposition=1;
int obs1=15;
;
void setup()
{
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(6,0);
}

void loop()
{
  digitalWrite(trigger,HIGH);
  if(obs1==0 && playerposition ==0){
    increaseScore();
    }
    if(obs1==0 && playerposition ==1){
    gameOver();
    }
  delay(10);
  digitalWrite(trigger,LOW);
  float time=pulseIn(echo,HIGH);
  distanceIncm=time * 0.034 /2;
  
//  Serial.print("distance: ");
//  Serial.println(distanceIncm);

  UpdatePlayer();
  ResetScreen();
  UpdateScore();
  setPlayer();
  timee++;
  obstacle1();
      
    
    
  
}
void obstacle1(){
   lcd.setCursor(obs1,1);
     Serial.print("obj: ");
  Serial.println(obs1);
  Serial.println('\n');
  lcd.print("x");
  lcd.setCursor(obs1+1,1);
  lcd.print(" ");
  obs1--;
  if(obs1==-1){
    obs1=15;
    }

    
  delay(100);
}
void UpdatePlayer(){
  if(distanceIncm>25){
    playerposition=1;
    }else{
    playerposition=0;
     }
  }
void ResetScreen(){
  lcd.clear();
 
  
  }
void increaseScore(){
  score++;
  }
void UpdateScore(){
  lcd.setCursor(12,0);
  lcd.print("S:");
  lcd.setCursor(14,0);
  lcd.print(score);
 }
 void setPlayer(){
  
   lcd.setCursor(0,0);
   lcd.print(" ");
   lcd.setCursor(1,0);
   lcd.print(" ");
   lcd.setCursor(0,playerposition);
   lcd.print("s");
   lcd.setCursor(0,playerposition == 0 ? 1 : 0);
   lcd.print(" ");
  
  }
 
 void gameOver(){
  lcd.setCursor(0,0);
     lcd.print("GAME OVER");
     lcd.setCursor(0,1);
     lcd.print("SCORE:");
     lcd.setCursor(6,1);
     lcd.print(score);
    score=0;
    obs1=15;

    delay(5000);
    lcd.clear();
    
    
    
  }
