void coinCollectionProcess(){
  
  if(xc == cx && yc == cy)
 {
   score += 1;
   
   if(Aux*2-1 == 255)
   {
     
     n++;
     if(bossLevel){
       hard = true;
       blah = 5;
       n = 1;
       bossLevel = false;
     }
     if(n == 4){
       bossLevel = true;
       hard = false;
       n = 1;
     }
     totalTime = 500;
     Aux = 1;
     
   }else{
   Aux *= 2;
   totalTime -= 55;
   }
   
   cx = random(0,8);
   if(sound)
   {
   Tone_Start(65000,300);
   Tone_Start(1500,400);
   }
   if(cy == 7)
   {
     cy = 0;
   }else{
     cy = 7;
   }
 }
 
}
