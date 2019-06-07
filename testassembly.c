#include <stdio.h>
#include <xmmintrin.h>
#include <math.h>

#define D 23

/* float dist_2_asm(int d, float *x, int xi, float *y, int yi){
        float somma=0, differenza=0;
        for(int i=0;i<d;i++){
          differenza=x[xi+i]-y[yi+i];
          differenza*=differenza;
          somma+=differenza;
       }
       return somma;
    } */
extern float dist_2_asm(int, float*, int , float *, int );

float dist(int d, float *x, int xi, float *y, int yi){
    return sqrt(dist_2_asm(d,x,xi,y,yi));
}




int main (int argc, char** args){

    float v1[D]={1.5,-4.2,3,-1.5,1.0,1,1,0,1.5,4,-4.2,-1.5,1.0,1,1,0,1.5,-4.2,-1.5,1.0,1,1,10};
    float v2[D]={1.5,-4.2,2,-1.5,1.0,1,1,0,1.5,2,-4.2,-1.5,1.0,1,1,0,1.5,-4.2,-1.5,1.0,1,1,0};
    

    printf("distanza=%f\n",dist(D,v1,0,v2,0));

}