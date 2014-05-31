void dead(){
  if(!next){
    
    misc();
    
    explosion();
    
    CheckButtonsPress;
    
    if(Button_A){
      next = true;
    }
    }
  
  if(next){
    
ClearSlate();
       
      coinGrid();

      scoreCount();
      
    }
  }
