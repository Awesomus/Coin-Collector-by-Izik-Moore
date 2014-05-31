void side0(){
    
  for(int i = 0; i < n; i++)
  {
  if(side == 0){
if(ex < 8)
{
  
}else{
  
    enemyY[0] = random(1,7);
    enemyY[1] = random(1,7);
    enemyY[2] = random(1,7);
    
    if(enemyY[0] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[0] = random(enemyY[1]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[1]);
    }
    }
    if(enemyY[0] == enemyY[2]){
      if(enemyY[2] < 5){
        enemyY[0] = random(enemyY[2]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[2]);
    }
    }
    if(enemyY[2] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[2] = random(enemyY[1]+1,7);
      }else{
        enemyY[2] = random(1,enemyY[1]);
    }
    }
    if(enemyY[0] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[0] = random(enemyY[1]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[1]);
    }
    }
    if(enemyY[0] == enemyY[2]){
      if(enemyY[2] < 5){
        enemyY[0] = random(enemyY[2]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[2]);
    }
    }
    if(enemyY[2] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[2] = random(enemyY[1]+1,7);
      }else{
        enemyY[2] = random(1,enemyY[1]);
    }
    }
    if(enemyY[0] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[0] = random(enemyY[1]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[1]);
    }
    }
    if(enemyY[0] == enemyY[2]){
      if(enemyY[2] < 5){
        enemyY[0] = random(enemyY[2]+1,7);
      }else{
        enemyY[0] = random(1,enemyY[2]);
    }
    }
    if(enemyY[2] == enemyY[1]){
      if(enemyY[1] < 5){
        enemyY[2] = random(enemyY[1]+1,7);
      }else{
        enemyY[2] = random(1,enemyY[1]);
    }
    }
    
    
    if(xc == ex && yc == enemyY[i])
    {
     Dead = true; 
    }else{
      Dead = false;
    }
    
    if(hard){
    side = random(0,2);
    if(side == 0){
      ex = 0;
    }else if(side == 1){
      ex = 7;
    }
    }else{
      ex = 0;
    }
}
if(!bossLevel){
DrawPx(ex,enemyY[i],ec);
}
  }
  }
}
