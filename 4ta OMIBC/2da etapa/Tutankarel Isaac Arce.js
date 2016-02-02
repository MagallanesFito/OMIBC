class program
{
 void Llena()
  {
   if(notNextToABeeper)
    {
     RevisaParedes();
     iterate(4)
      {
       if(frontIsClear)
        {
         move();
         Llena();
         turnleft();
         turnleft();
         move();
         turnleft();
         turnleft();
        }
      turnleft();
      }
   }
 }

void RevisaParedes()
 {
  iterate(4)
   {
    if(frontIsClear)
     {
      putbeeper();
     }
    turnleft();
   }
 }

program() {
    ;
    Llena();
    turnoff();
}

}
