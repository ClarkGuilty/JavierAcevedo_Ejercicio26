#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793

int main( int argc, char *argv[] )  {

   if( argc != 4 ) {
		printf("La entrada debe ser de la forma %s archivo.txt cuenta.txt tiempo.txt \n", argv[0]);
		exit(0);
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
    
	FILE *output = fopen("sample.dat", "w+");
	for(i=0;i<N;i+=1){
            fprintf(output, "%f\n",arreglo[i]*sigma+mu); 
			}
	fclose(output);
    output = fopen("stan.dat", "w+");
    fprintf(output,"%d\n",N); 
    fprintf(output,"%d\n",mu); 
    fprintf(output,"%d\n",sigma); 
    fclose(output);
    
    
}
	
