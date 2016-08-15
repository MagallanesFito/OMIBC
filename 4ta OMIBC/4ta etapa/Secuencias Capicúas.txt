class program {

void cuenta(){
    if(nextToABeeper){
        pickbeeper();
        cuenta();
        if(!nextToABeeper){
            fin(0);
        }
        pickbeeper();
    }
    else
    {
        move();
        if(!nextToABeeper) fin(1);
        while(nextToABeeper) move();
        turnX(2);
        move();
    }
}
void veOrigen(){
    while(!facingWest) turnleft();
    iterate(2){
       while(frontIsClear) move();
    turnleft();
    }
    turnleft();
    move();
    turnX(3);
}
void turnX(n){
    iterate(n) turnleft();
}
void fin(a){
    veOrigen();
    turnX(3);
    move();
    if(!iszero(a)) turnX(2);
    turnoff();
}
program() {
    while(nextToABeeper){
        if(nextToABeeper) cuenta();
        if(nextToABeeper) fin(0);
        veOrigen();
        while(nextToABeeper) move();
        putbeeper();
        move();
        turnX(3);
        move();
        turnleft();
        if(!nextToABeeper) fin(1);
    }
    turnoff();
}

}
