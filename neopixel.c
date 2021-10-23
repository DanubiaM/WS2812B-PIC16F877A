//Método resposanvável pelo envio dos bits
void NeoBit (int1 Bit)
{
    if(Bit  == 1)
    { RA3 = 1; delay_cycles(4); RA3 = 0;  //Cada delay_cycles equivale a 200ns ou 0.2us ->Cristal 20MHz
    }else
    { RA3 = 1; delay_cycles(1); RA3 = 0;} //
}

//Método responsável por enviar o bit ao método neoBit
void NeoDraw (void)
{
    unsigned int8 NeoPixel;
    signed int8 BitCount;
    for(NeoPixel  = 0; NeoPixel < NUMPIXELS; NeoPixel++)
    {
        for(BitCount  = 7; BitCount >= 0; BitCount--)
            NeoBit(bit_test(NeoGreen[NeoPixel], BitCount) );
        for(BitCount  = 7; BitCount >= 0; BitCount--)
            NeoBit(bit_test(NeoRed[NeoPixel], BitCount) );
        for(BitCount  = 7; BitCount >= 0; BitCount--)
            NeoBit(bit_test(NeoBlue[NeoPixel], BitCount) );
    }

    //output_low(NeoPin);
    //RA3 = 0; //delay_cycles(1);
}


