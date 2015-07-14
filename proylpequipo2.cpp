#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct  horario
 {
 char *dia[20];
 char *semestre[20];
 char *materia[20];
 char *h_inicio[20];
 char *h_final[20];


 };



 void generar_horario   ( horario horariocompleto[14])

       {


   horariocompleto [0].materia="Teoria electromagnetica";
   horariocompleto [0].semestre= " Tercer semestre";
   horariocompleto [0].dia="LUN";
   horariocompleto [0].h_inicio= "9";
   horariocompleto [0].h_final= "7";

   horariocompleto [1] .materia= "Lab. Instrumentacion";
   horariocompleto [1] .semestre= "Tercer semestre";
   horariocompleto [1].dia="LUN";
   horariocompleto [1].h_inicio= "09H00";
   horariocompleto [1].h_final= "11H00";

   horariocompleto [2] .materia= "Sis.Digitales II";
   horariocompleto [2] .semestre= "Tercer semestre";
   horariocompleto [2].dia="LUN";
   horariocompleto [2].h_inicio= "11H00";
   horariocompleto [2].h_final= "13H00";

   horariocompleto [3] .materia= "Teoria electromagnetica";
   horariocompleto [3] .semestre= "Tercer semestre";
   horariocompleto [3].dia="MAR";
   horariocompleto [3].h_inicio= "07H00";
   horariocompleto [3].h_final= "09H00";

   horariocompleto [4] .materia= "Lab. Instrumentacion";
   horariocompleto [4] .semestre= "Segundo semestre";
   horariocompleto [4].dia="MAR";
   horariocompleto [4].h_inicio= "09H00";
   horariocompleto [4].h_final= "11H00";

   horariocompleto [5] .materia= "Matematicas III";
   horariocompleto [5] .semestre= "Tercer semestre";
   horariocompleto [5].dia="MAR";
   horariocompleto [5].h_inicio= "11H00";
   horariocompleto [5].h_final= "13H00";

   horariocompleto [6] .materia= "Circuitos";
   horariocompleto [6] .semestre= "Tercer semestre";
   horariocompleto [6].dia="MIE";
   horariocompleto [6].h_inicio= "07H00";
   horariocompleto [6].h_final= "09H00";

   horariocompleto [7] .materia= "Programacion I";
   horariocompleto [7] .semestre= "Segundo semestre";
   horariocompleto [7].dia="MIE";
   horariocompleto [7].h_inicio= "09H00";
   horariocompleto [7].h_final= "11H00";

   horariocompleto [8] .materia= "Sis. Digitales I";
   horariocompleto [8] .semestre= "Segundo semestre";
   horariocompleto [8].dia="MIE";
   horariocompleto [8].h_inicio= "11H00";
   horariocompleto [8].h_final= "13H00";

   horariocompleto [9] .materia= "Programacion I";
   horariocompleto [9] .semestre= "Segundo semestre";
   horariocompleto [9].dia="JUE";
   horariocompleto [9].h_inicio= "07H00";
   horariocompleto [9].h_final= "09H00";

   horariocompleto [10] .materia= "Sistemas digitales II";
   horariocompleto [10] .semestre= "Tercer semestre";
   horariocompleto [10].dia="JUE";
   horariocompleto [10].h_inicio= "09H00";
   horariocompleto [10].h_final= "11H00";

   horariocompleto [11] .materia= "Circuitos";
   horariocompleto [11] .semestre= "Tercer semestre";
   horariocompleto [11].dia="JUE";
   horariocompleto [11].h_inicio= "11H00";
   horariocompleto [11].h_final= "13H00";

   horariocompleto [12] .materia= "Programacion II";
   horariocompleto [12] .semestre= "Tercer semestre";
   horariocompleto [12].dia="VIE";
   horariocompleto [12].h_inicio= "07H00";
   horariocompleto [12].h_final= "09H00";

   horariocompleto [13] .materia= "Programacion I";
   horariocompleto [13] .semestre= "Segundo semestre";
   horariocompleto [13].dia="VIE";
   horariocompleto [13].h_inicio= "09H00";
   horariocompleto [13].h_final= "11H00";

   horariocompleto [14] .materia= "Sis. Digitales I";
   horariocompleto [14] .semestre= "Segundo semestre";
   horariocompleto [14].dia="VIE";
   horariocompleto [14].h_inicio= "11H00";
   horariocompleto [14].h_final= "13H00";
   }

 void imprimir_horario (horario horariocompleto[100])
 {
  int i;
  for(i=0; i<=14; i++)
  {
   printf ("%s \n", horariocompleto[i].materia);
   printf ("%s \n", horariocompleto[i].semestre);
   printf ("%s \n", horariocompleto[i].dia);
   printf ("%s \n", horariocompleto[i].materia);
   printf ("%d \n", horariocompleto[i].h_inicio);
   printf ("%d \n", horariocompleto[i].h_final);
   }
  }


main()
{ int opc;
do{
cout<<".....---- menu----....."<<endl<<endl;
cout<<"1.-Ingresar una nueva hora de clases"<<endl<<endl;
cout<<"2.-Ver el horario de hoy" <<endl<<endl;
cout<<"3.-Ver el horario de la semana"<<endl<<endl;
cout<<"0.-Salir"<<endl<<endl;
cin>>opc;
clrscr();

 horario horariocompleto [14] ;
 horario p[14];

switch(opc)
     {
       case: 1
       {

       generar_horario(horariocompleto);

       break;
       case:2
       imprimir_horario (horariocompleto);

       }
     }
 }while (opc!=0);
 getch();
}



