void explosion(){
  
  if(sound){
    
    Tone_Start(1,1);
    Tone_Start(65000,1);
    Tone_Start(30000,1);
    
  }
  
  ClearSlate;
  
    DrawPx(0,0,Xc);
    DrawPx(0,1,Xc);
    DrawPx(0,2,Xc);
    DrawPx(0,3,Xc);
    DrawPx(0,4,Xc);
    DrawPx(0,5,Xc);
    DrawPx(0,6,Xc);
    DrawPx(0,7,Xc);
    DrawPx(7,0,Xc);
    DrawPx(7,1,Xc);
    DrawPx(7,2,Xc);
    DrawPx(7,3,Xc);
    DrawPx(7,4,Xc);
    DrawPx(7,5,Xc);
    DrawPx(7,6,Xc);
    DrawPx(7,7,Xc);
    DrawPx(0,0,Xc);
    DrawPx(1,0,Xc);
    DrawPx(2,0,Xc);
    DrawPx(3,0,Xc);
    DrawPx(4,0,Xc);
    DrawPx(5,0,Xc);
    DrawPx(6,0,Xc);
    DrawPx(7,0,Xc);
    DrawPx(0,7,Xc);
    DrawPx(1,7,Xc);
    DrawPx(2,7,Xc);
    DrawPx(3,7,Xc);
    DrawPx(4,7,Xc);
    DrawPx(5,7,Xc);
    DrawPx(6,7,Xc);
    DrawPx(7,7,Xc);
    
    DrawPx(1,1,oc);
    DrawPx(1,2,oc);
    DrawPx(1,3,oc);
    DrawPx(1,4,oc);
    DrawPx(1,5,oc);
    DrawPx(1,6,oc);
    DrawPx(6,1,oc);
    DrawPx(6,2,oc);
    DrawPx(6,3,oc);
    DrawPx(6,4,oc);
    DrawPx(6,5,oc);
    DrawPx(6,6,oc);
    DrawPx(1,1,oc);
    DrawPx(2,1,oc);
    DrawPx(3,1,oc);
    DrawPx(4,1,oc);
    DrawPx(5,1,oc);
    DrawPx(6,1,oc);
    DrawPx(1,6,oc);
    DrawPx(2,6,oc);
    DrawPx(3,6,oc);
    DrawPx(4,6,oc);
    DrawPx(5,6,oc);
    DrawPx(6,6,oc);
    
    DrawPx(2,2,Xc);
    DrawPx(2,3,Xc);
    DrawPx(2,4,Xc);
    DrawPx(2,5,Xc);
    DrawPx(5,2,Xc);
    DrawPx(5,3,Xc);
    DrawPx(5,4,Xc);
    DrawPx(5,5,Xc);
    DrawPx(2,2,Xc);
    DrawPx(3,2,Xc);
    DrawPx(4,2,Xc);
    DrawPx(5,2,Xc);
    DrawPx(2,5,Xc);
    DrawPx(3,5,Xc);
    DrawPx(4,5,Xc);
    DrawPx(5,5,Xc);
    
    DrawPx(3,3,oc);
    DrawPx(3,4,oc);
    DrawPx(4,3,oc);
    DrawPx(4,4,oc);
    DrawPx(3,3,oc);
    DrawPx(4,3,oc);
    DrawPx(3,4,oc);
    DrawPx(4,4,oc);
    
    ClearSlate;
    
}
