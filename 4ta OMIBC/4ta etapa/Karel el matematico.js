    while(!facingWest) turnleft();
    iterate(2){
        while(frontIsClear) move();
        turnleft();
    }

}
void cuenta(){
    if(!nextToABeeper && frontIsClear){
        move();
        move();
        cuenta();
        putbeeper();
    }
    else
    {
        veOrigen();
    }
}
void iguales(){
    if(frontIsClear){
        move();
        iguales();
        putbeeper();
    }
    else
    {
        veOrigen();
    }
}
void verificaIguales(){
    while(!(leftIsBlocked)){
        subeEscalon();
    }
    if(frontIsBlocked){
        veOrigen();
        iguales();
        turnoff();
    }
    else
    {
        veOrigen();
        return();
    }
}
void limpia(){
    move();
    iterate(4){
        while(frontIsClear){
            if(nextToABeeper) pickbeeper();
            move();
        }
        turnleft();
    }
}
program() {
    verificaIguales();
    while(!(frontIsBlocked && leftIsBlocked) && !(frontIsBlocked && rightIsBlocked)){
        if(leftIsBlocked){
            putbeeper();
            turnX(3);
        }
        if(frontIsBlocked){
            putbeeper();
            turnleft();
        }
        subeEscalon();
    }
    veOrigen();
    cuenta();
    limpia();
    turnoff();
}

}