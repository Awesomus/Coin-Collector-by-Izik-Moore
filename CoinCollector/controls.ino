void controls(){
  
  CheckButtonsPress();
  
  
  
  if(Button_Down)
  {
    if (yc > 0){
      yc--;
    }
    DrawPx(xc,yc,pc);
    if(sound)
    {
    Tone_Start(50000,100);
    }
    delay(30);
    
    
  }else if(Button_Up)
  {
    if (yc < 7){
      yc++;
    }
    
    DrawPx(xc,yc,pc);
    if(sound)
    {
    Tone_Start(12500,100);
    }
    delay(30);
    
  }else if(Button_Right)
  {
    if (xc < 7){
      xc++;
    }
    
    DrawPx(xc,yc,pc);
    if(sound)
    {
    Tone_Start(25000,100);
    }
    delay(30);
    
    
  }else if(Button_Left)
  {
    if (xc > 0){
      xc--;
    }
    
    DrawPx(xc,yc,pc);
    if(sound)
    {
    Tone_Start(37500,100);
    }
    delay(30);
    
  }else if(Button_B)
  {
    if(sound)
    {
      sound = false;
    }else{
      sound = true;
    }
  }else if(Button_A)
  {
    if(xc == 7 && yc == 7){
      n = 3;
    }
  }
  
}
