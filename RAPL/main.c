#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <sys/time.h>

#include "rapl.h"

#define RUNTIME 1


int main (int argc, char **argv) 
{ 
  char command[500]="",language[500]="", test[500]="";
  const char path[500] = "../../results.csv";
  int  ntimes = 10;
  int  core = 0;
  int  i=0;

#ifdef RUNTIME
  //clock_t begin, end;
  double time_spent;
  struct timeval tvb,tva;
#endif
  
  FILE * fp;

  //Run command
//  strcpy(command, "./" );
  strcat(command,argv[1]);
  //Language name


  strcpy(language,argv[2]);
  //Test name
  strcpy(test,argv[3]);

  //ntimes = atoi (argv[2]);
 

  fp = fopen(path,"a");

  rapl_init(core);

  //fprintf(fp,"Language;benchmark-name;PKG (Joules);CPU (J);GPU (J);DRAM (J);Time (ms)\n");
  
  for (i = 0 ; i < ntimes ; i++)
    {  
 
    	fprintf(fp,"%s;",language);
    	fprintf(fp,"%s;",test);
 	
	      
		#ifdef RUNTIME
		        //begin = clock();
				gettimeofday(&tvb,0);
		#endif
	
	rapl_before(fp,core);
	
  int status = system(command);

	rapl_after(fp,core);

  if (status != 0) {
    fprintf(stderr, "Benchmark error, non 0 exit status for %s %s\n", language, test);
  }

		#ifdef RUNTIME
			//end = clock();
			//time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
			gettimeofday(&tva,0);
			time_spent = (tva.tv_sec-tvb.tv_sec)*1000000 + tva.tv_usec-tvb.tv_usec;
			time_spent = time_spent / 1000;
		#endif
			

		#ifdef RUNTIME	
			fprintf(fp,"%G\n",time_spent);
		#endif	
    }
    

  fclose(fp);
  fflush(stdout);

  return 0;
}



