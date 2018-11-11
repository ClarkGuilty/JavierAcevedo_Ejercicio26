#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>

#define PI 3.141592653589793

using namespace std;

int main( int argc, char *argv[] ) {
    
    std::clock_t tiempo0 = clock();
      
   if( argc != 4 ) {
		printf("La entrada debe ser de la forma %s archivo.txt cuenta.txt tiempo.txt \n", argv[0]);
        printf("%d\n",argc);
		exit(0);
   }
   

  string line;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    getline (myfile,line);

    myfile.close();
  }
  else cout << "Unable to open file"; 

  


int n1=0;
int n12=0;
int n123=0;
int n1234=0;
int n12345=0;
char anterior1;
char anterior2;
char anterior3;
char anterior4;
for (int i = 0; i < line.size()-4; i++) 
    {
       if (line.at(i) == '1'){
        n1++;
        if(line.at(i+1) == '2'){
            n12++;
            if(line.at(i+2) == '3'){
                n123++;
                if(line.at(i+3) == '4'){
                    n1234++;
                    if(line.at(i+4) == '5'){
                            n12345++;
                        }
                    }
                }
            }
       }
    }
    
//Horrible forma de escribir esto, pero no tanto como vivir.
    
for(int i = line.size()-4; i<line.size()-3;i++){
    if (line.at(i) == '1'){
        n1++;
        if(line.at(i+1) == '2'){
            n12++;
            if(line.at(i+2) == '3'){
                n123++;
                if(line.at(i+3) == '4'){
                    n1234++;
                }
            }
        }
    }
}

for(int i = line.size()-3; i<line.size()-2;i++){
    if (line.at(i) == '1'){
        n1++;
        if(line.at(i+1) == '2'){
            n12++;
            if(line.at(i+2) == '3'){
                n123++;
            }
        }
    }
}

for(int i = line.size()-2; i<line.size()-1;i++){
    if (line.at(i) == '1'){
        n1++;
        if(line.at(i+1) == '2'){
            n12++;
        }
    }
}

for(int i = line.size()-1; i<line.size();i++){
    if (line.at(i) == '1'){
        n1++;
    }
}
  


FILE *output = fopen(argv[2], "w+");
    fprintf(output,"%d\n",n1); 
    fprintf(output,"%d\n",n12); 
    fprintf(output,"%d\n",n123); 
    fprintf(output,"%d\n",n1234); 
    fprintf(output,"%d\n",n12345); 
    fclose(output);

    output = fopen(argv[3], "w+");    
    double duration = ( std::clock() - tiempo0 ) / (double) CLOCKS_PER_SEC;
    fprintf(output,"%f\n",duration); 
    fclose(output);
    return 0;
}
    

    
