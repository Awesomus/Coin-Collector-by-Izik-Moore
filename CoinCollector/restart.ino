void restart(){
  
  CheckButtonsPress();
  
  if(next){

     if(Button_A){
       if(Dead == true){
       ClearSlate();
       Dead = false;
       xc = 5;
       yc = 5;
       ex = 0;
       ey = 5;
       Aux = 1;
       cx = random(0,7);
       cy = 0;
       totalTime = 500;
       n = 1;
       side = 0;
       hard = false;
       bossLevel = false;
       score = 0;
       blah = 4;
       next = false;
       grid = true;
       if(champ){
         GameStart = false;
       }
     }
     }
  }
}
