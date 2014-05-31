void enemyMovement(){
  
  if(!Dead){
  
  if(savedTime > totalTime){

    if(side == 0){
    if(ex < 8){
    ex += 1;
    }
    if( ex > 6){
      laser = true;
    }else{
      laser = false;
    }
   time = millis();
   
  }else if(side == 1){
    if(ex > 0){
      
    ex -= 1;
    }else{
      side = random(0,2);
    if(side == 0){
      ex = 0;
    }else if(side == 1){
      ex = 7;
    }
    }
   time = millis();
  }
  }
  
  }
  
}
