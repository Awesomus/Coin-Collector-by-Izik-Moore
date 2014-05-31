void misc(){

    if(savedTime2 > totalTime2)
    {
      if(Xc == 0)
      {
        Xc = 1;
      }else if(Xc == 1)
      {
        Xc = 0;
      }
      
      time2 = millis();
    }
    
    if(savedTime3 > totalTime3)
    {
      if(oc == 0)
      {
        oc = 8;
      }else if(oc == 8)
      {
        oc = 0;
      }
      
      time3 = millis();
    }
  
}
