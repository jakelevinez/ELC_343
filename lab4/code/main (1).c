#include "project.h"
#include "stdio.h"

int main(void)
{
    CyGlobalIntEnable;
    //starting components
    VDAC8_Start();
    ADC_SAR_Start();
      
    int table [256] = {0,0,0,0,0,0,0,0,1,1,1,1,1,2,2,2,2,3,3,3,4,4,5,5,5,6,6,7,7,8,9,9,10,10,11,12,12,13,14,14,15,16,17,17,18,19,20,21,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,40,41,42,43,44,45,47,48,49,50,52,53,54,55,57,58,59,61,62,63,65,66,67,69,70,72,73,74,76,77,79,80,82,83,85,86,88,89,90,92,93,95,97,98,100,101,103,104,106,107,109,110,112,113,115,117,118,120,121,123,124,126,128,129,131,132,134,135,137,138,140,142,143,145,146,148,149,151,152,154,155,157,158,160,162,163,165,166,167,169,170,172,173,175,176,178,179,181,182,183,185,186,188,189,190,192,193,194,196,197,198,200,201,202,203,205,206,207,208,210,211,212,213,214,215,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,234,235,236,237,238,238,239,240,241,241,242,243,243,244,245,245,246,246,247,248,248,249,249,250,250,250,251,251,252,252,252,253,253,253,253,254,254,254,254,254,255,255,255,255,255,255,255};
    
    for(;;)
    {
       VDAC8_SetValue(table[ADC_SAR_GetResult16() >> 4]);
       
    }
}