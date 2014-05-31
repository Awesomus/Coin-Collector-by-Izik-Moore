void boss(){
  
  if(!Dead){
    
  if(bossLevel){
    
  DrawPx(bx,by,bc);
  bc += 1;
  
  if(laser){
    DrawPx(1,by,1);
    DrawPx(2,by,1);
    DrawPx(3,by,1);
    DrawPx(4,by,1);
    DrawPx(5,by,1);
    DrawPx(6,by,1);
    DrawPx(7,by,1);
    
    bossDeath();
    
  }else if(ex < blah){
    by = random(1,7);
  }
  }
  }
}
