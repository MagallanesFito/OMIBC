class program {

void turnX(n){
    iterate(n) turnleft();
}

void buscaPared(){
    if(frontIsClear){
        turnleft();
        if(frontIsClear){
            move();
        }
        else
        {
            turnleft();
        }
        if(rightIsBlocked){
            return();
        }
        else
        {
            turnX(2);
            move();
            turnleft();
            move();
        }
    }
    else
    {
         return();
    }
}
void buscaSalida(){
    while(rightIsClear) turnleft();
    while(rightIsBlocked){
        while(frontIsBlocked) turnleft();
        move();
    }
    if(frontIsClear)move();
    else
    {
        turnX(3);
        move();
        turnoff();
    }
    if(rightIsBlocked){
       turnX(2);
       move();
       turnleft();
       move();
    }
    else
    {
        turnX(2);
        move();
        turnX(2);
    }
    turnoff();
}
program() {
    while(iszero(0)){
         buscaPared();
         if(frontIsBlocked){
             turnleft();
             buscaSalida();
         }
         if(rightIsBlocked){
             buscaSalida();
         }
    }
    turnoff();
}


}
