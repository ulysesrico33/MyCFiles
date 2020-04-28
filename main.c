#include <stdio.h>

int main(void) {
    
    printf("Comienza archivo...\n");
    //Preparar archivo
    FILE* miArchivo=NULL;
    char* nombreArchivo="Data.txt";
    
    for(int i=0;i<3;i++)
    {
      if(i==0){

         //Abrir archivo por primera vez
         miArchivo=fopen(nombreArchivo,"w");
         fprintf(miArchivo,"Primera línea\n");
         fclose(miArchivo);

      }else{

        //Añadir algún texto al archivo
        miArchivo=fopen(nombreArchivo,"a");
        fprintf(miArchivo,"Línea %d...\n",i);
        fclose(miArchivo);

      }
    }
   
     printf("Terminó archivo...");


    return 0;
}

