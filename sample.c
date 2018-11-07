/* para compilar es: cc sample.c -o sample.x  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char** argv){
    int N=atoi(argv[1]);
    int C=atoi(argv[2]);
    int S=atoi(argv[3]);
    srand(time(NULL));
    double *lista;
    lista =malloc(N*sizeof(double));
    FILE *in = fopen("sample.dat","w");
    int i;
    for( i = 0; i<N; i++){
        if (((double)rand()/(double)RAND_MAX)>0.5){
            lista[i] = (log((double)rand()/(double)RAND_MAX)*S)+C;
            fprintf(in,"%f\n",lista[i]);
        }
        else{
            lista[i] = (-log((double)rand()/(double)RAND_MAX)*S)+C;
            fprintf(in,"%f\n",lista[i]);
        }
    }
    fclose(in);
    return 0;
}
