#include <MeggyJrSimple.h>

/*
`~Coin Collector~`

You are the blue dot
Do not hit the moving, red enemies
Collect the yellow coins

 `~Instructions~`
 Press A to begin
 Use the D-Pad to move (the arrows)
 Use the A button to revive yourself (assuming that you died)
 Use the B button to mute the game or turn the sound back on
 
   ~Goal Of The Game~
 The goal of the game is to collect all 64 coins
 
 ~Levels~
 
 Need 8 coins to pass a level.
 
 Levels 1-3: Enemies from left
 Level 4: Boss
 Levels 5-7: Enemies from either side
 Level 8: Faster Boss

+-- Designed by Loading Games --+

*/

byte xc,yc;
byte ex,ey;
byte bx,by,bc;
byte cx,cy,Aux;
float time,savedTime,totalTime;
float time2,savedTime2,totalTime2;
float time3,savedTime3,totalTime3;
float time4,savedTime4,totalTime4;
byte pc,ec,cc,Xc,oc;
byte n;
byte wc01, wc02;
byte enemyY[3];
byte side;
byte blah;
byte score;

boolean Dead;
boolean GameStart;
boolean sound;
boolean hard;
boolean laser;
boolean bossLevel;
boolean next;
boolean champ;
boolean grid;

void setup(){
  MeggyJrSimpleSetup();
  xc = 5;
  yc = 5;
  ex = 0;
  ey = 4;
  time = millis();
  totalTime = 500;
  time2 = millis();
  totalTime2 = 50;
  time3 = millis();
  totalTime3 = 300;
  time4 = millis();
  totalTime4 = 200;
  cx = random(0,7);
  cy = 0;
  Aux = 1;
  EditColor(CustomColor1,15,3,0);
  EditColor(CustomColor9,5,13,5);
  EditColor(CustomColor8,15,0,2);
  pc = 5;
  ec = 1;
  cc = 17;
  n = 1;
  enemyY[0] = 4;
  wc01 = 5;
  wc02 = 12;
  GameStart = false;
  Dead = false;
  sound = true;
  Xc = 1;
  oc = 8;
  side = 0;
  hard = false;
  bx = 0;
  by = random(0,8);
  bc = 1;
  laser = false;
  bossLevel = false;
  blah = 4;
  score = 0;
  next = false;
  champ = false;
  grid = true;
}

void loop()
{
  
  if(GameStart == false)
  {
    
  Beginning();
  
  }else{
  
  SetAuxLEDs(Aux*2-1);
  
    side0();
    side1();
    
    if(!Dead){
    boss();
    }
  
  timeStuff();
  
   DrawPx(xc,yc,pc);
   DrawPx(cx,cy,cc);
   
  if(Dead == false)
  {
     
    
    controls();
    


 coinCollectionProcess();
 
  enemyMovement();
  
   }else if(Dead == true){
     
     dead();
     
     restart();
     
   }
   }
   
  death();
  
  misc();
  DisplaySlate();
  ClearSlate();
}
