class program {
void Mide()
 {
  if(frontIsClear)
   {
    move();
    Mide();
    putbeeper();
   }
  else
   {
    turnleft();
    turnleft();
    while(frontIsClear)
     {
      move();
     }
    turnleft();
    if(frontIsClear)
     {
      move();
      turnleft();
      Mide();
     }
    else
     {
      turnleft();
      turnleft();
      while(frontIsClear)
       {
        move();
       }
     turnleft();
     turnleft();
     turnleft();
    }
  }
}
void PonFinal()
 {
  if(frontIsClear)
   {
    move();
    PonFinal();
    putbeeper();
   }
  else
   {
    turnleft();
    turnleft();
    while(frontIsClear)
     {
      move();
     }
   }
}
program() {
    ;
    Mide();
    while(notFacingEast)
     {
      turnleft();
     }
    PonFinal();
    putbeeper();
    turnoff();
}

}
