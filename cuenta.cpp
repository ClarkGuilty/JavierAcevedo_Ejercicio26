#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>


#define PI 3.141592653589793

using namespace std;

int main( int argc, char *argv[] ) {
int t1 = 0;
   int t12 = 0;
   int t123 = 0;
   int t1234 = 0;
   int t12345 = 0;
   string arch;
   
   if( argc != 4 ) {
		printf("La entrada debe ser de la forma %s archivo.txt cuenta.txt tiempo.txt \n", argv[0]);
        printf("%d\n",argc);
		exit(0);
   }
   

  string line;
  ifstream myfile ("Pi_2500000.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {   
//      cout << line << '\n';
      line << '\n';
      arch = line;
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
  cout << arch;
  

std::string s = "a_b_c";
s = arch;
size_t n = std::count(s.begin(), s.end(), '1');
size_t n = std::count(s.begin(), s.end(), '12');
size_t n = std::count(s.begin(), s.end(), '123');
size_t n = std::count(s.begin(), s.end(), '1234');
size_t n = std::count(s.begin(), s.end(), '12345');
/*



char tab2[10000];
strcpy(tab2, arch.c_str());

  int count;
  int i = 0;
//  for(int i =0;i<strlen(arch);i++){
while(tab2[i] != '\0')
    {
        if(tab2[i] == '1')
        {
            count++;
        }

        i++;
    }
    */
  
  return 0;
}


   
   
   
   
   
   
   
   
   
   
   
    
	
/*
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
  */  
    
