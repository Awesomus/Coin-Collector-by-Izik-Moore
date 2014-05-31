void death(){
  
  for(int i = 0; i < n; i++){ 
   
    if(!bossLevel){
  if(xc == ex && yc == enemyY[i]){
    
    dead();
     
    Dead = true;
  }
    }
  }
  
  if(score == 64){
    next = true;
    champ = true;
    Dead = true;
    dead();
  }
  
}
