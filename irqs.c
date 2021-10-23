#INT_EXT
void interrupcion_ext()
{
   
   mode ++;
   if (mode>8){mode=0;}
}

