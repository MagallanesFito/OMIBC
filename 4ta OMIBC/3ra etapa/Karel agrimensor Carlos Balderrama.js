class program {
void contar(n)
{
    if(frontIsClear)
    {
        move();
        contar(succ(n));
    }
    else
    {                           
        iterate(2)turnleft();
        while(frontIsClear)move();
        turnleft();
        if(frontIsClear)
        {
            move();
            turnleft();
            contar(succ(n));
        }
        else
        {
            iterate(2)turnleft();
            while(frontIsClear)move();
            iterate(n)putbeeper();
        }
    }
}
program() {
    contar(1);
    turnoff();
}

}
