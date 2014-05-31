void Beginning(){
  
  DrawPx(2,7,Orange);
  DrawPx(3,7,Orange);
  DrawPx(4,7,Orange);
  DrawPx(5,7,Orange);
  DrawPx(5,6,Orange);
  DrawPx(6,6,Orange);
  DrawPx(6,5,Orange);
  DrawPx(7,5,Orange);
  DrawPx(7,4,Orange);
  DrawPx(7,3,Orange);
  DrawPx(7,2,Orange);
  DrawPx(6,2,Orange);
  DrawPx(6,1,Orange);
  DrawPx(5,1,Orange);
  DrawPx(5,0,Orange);
  DrawPx(4,0,Orange);
  DrawPx(3,0,Orange);
  DrawPx(2,0,Orange);
  DrawPx(2,1,Orange);
  DrawPx(1,1,Orange);
  DrawPx(1,2,Orange);
  DrawPx(0,2,Orange);
  DrawPx(0,3,Orange);
  DrawPx(0,4,Orange);
  DrawPx(0,5,Orange);
  DrawPx(1,5,Orange);
  DrawPx(1,6,Orange);
  DrawPx(2,6,Orange);
  
  DrawPx(3,6,DimYellow);
  DrawPx(4,6,DimYellow);
  DrawPx(2,5,Red);
  DrawPx(3,5,Red);
  DrawPx(4,5,Red);
  DrawPx(5,5,Red);
  DrawPx(1,4,DimYellow);
  DrawPx(2,4,Red);
  DrawPx(3,4,DimYellow);
  DrawPx(4,4,DimYellow);
  DrawPx(5,4,DimYellow);
  DrawPx(6,4,DimYellow);
  DrawPx(1,3,DimYellow);
  DrawPx(2,3,Red);
  DrawPx(3,3,DimYellow);
  DrawPx(4,3,DimYellow);
  DrawPx(5,3,DimYellow);
  DrawPx(6,3,DimYellow);
  DrawPx(2,2,Red);
  DrawPx(3,2,Red);
  DrawPx(4,2,Red);
  DrawPx(5,2,Red);
  DrawPx(3,1,DimYellow);
  DrawPx(4,1,DimYellow);
  
  CheckButtonsPress();
  
  if(Button_A)
  {
    Tone_Start(65000,300);
    Tone_Start(1500,400);
    GameStart = true;
  }
}
