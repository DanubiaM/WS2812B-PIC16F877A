
void mode_SingleColor(int8 c)
{
    for(i = 0; i < NUMPIXELS; i++)
    {
        NeoRed[i] = rainbow[0][c];
        NeoGreen[i] = rainbow[1][c];
        NeoBlue[i] = rainbow[2][c];
    }

    NeoDraw();
    delay_ms(40);
}

//M?todo responsavel por apresentar as cores em RGB variando por tom, do mais forte ? cor e vice versa.
void mode_RGB()
{
    
    tempR = 0; tempG = 0; tempB = 0;
    
    //Primeiro la?o define o pixel
    for(int rgb  = 0; rgb < 3; rgb++){
    
         //Segundo la?o responsavel por indicar a cor 0-255
        for(int16 temp = 1; temp < 256; temp++)
        {
            if(rgb  == 0)
                tempR = temp;
            else 
                if(rgb == 1)
                    tempG = temp;
                else
                    tempB = temp;
            //passa a cor temporaria para cada led
            for(i = 0; i < NUMPIXELS; i++)
            {
                NeoRed[i] = tempR;
                NeoGreen[i] = tempG;
                NeoBlue[i] = tempB;
                //delay_ms(100);
            }

            NeoDraw();
            if(flag_break){
                break;
            }
            delay_ms(50);
        }
    } 
 
    for(int rgb2  = 0; rgb2 < 3; rgb2++)
        for(temp = 255; temp > 0; temp--) {
            if(rgb2  == 0)
                tempR = temp;
            else 
            if(rgb2 == 1)
                tempG = temp;
            else
                tempB = temp;
            for(i = 0; i < NUMPIXELS; i++) {
                NeoRed[i] = tempR;
                NeoGreen[i] = tempG;
                NeoBlue[i] = tempB;
                //delay_ms(100);
            }

            NeoDraw();
            if(flag_break) {
                break;
            }

            delay_ms(50);
        }
    
}
void iniciaLEDS(void){
  for(i = 0; i < NUMPIXELS; i++)
    {
        NeoRed[i] = rainbow[0][7];
        NeoGreen[i] = rainbow[1][7];
        NeoBlue[i] = rainbow[2][7];
    }

    NeoDraw();
    


}
