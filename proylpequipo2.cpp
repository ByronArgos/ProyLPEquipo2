/*donde
hi:Horario de Ingreso */

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <time.h>



struct horario
{
 char dia[20];
 char semestre[20];
 char materia[20];
 //time inicio;
 //time final;


};


int menu()
{
  int opc;
          do{
   cout<<".....---- menu----....."<<endl<<endl;
   cout<<"1.-Ingresar una nueva hora de clases"<<endl<<endl;
   cout<<"2.-Ver el horario del dia" <<endl<<endl;
   cout<<"3.-Ver el horario de la semana"<<endl<<endl;
   cout<<"0.-Salir"<<endl<<endl;
    cin>>opc;
    return(opc);
    clrscr();

           }while (opc!=0);


}


void ingreso(horario hi[])
{
    int n;
 for (int i=1;i<=5;i++)
      {
do{


for (int j=1;j<=10;j++)
{


       cout<<"ingrese su dia"<<i<<endl<<endl;
             cin>>hi[j].dia;
       cout<<"ingrese su semestre "<<endl<<endl;
            cin>>hi[j].semestre;
       cout<<"ingrese su materia"<<endl<<endl;
             cin>>hi[j].materia;
         /*cout<<"ingrese su hora inicial"<<endl<<endl;
            cin>>hi[j].inicio;
        cout<<"ingrese su hora final"<<endl<<endl;
            cin>>hi[j].final;
         */

         cout<<"quire seguir ingresando mas horas de clases"<<endl<<endl;
         cout<<"si desea seguir ingresando pulse 1....__---__ caso contrario pulse 0  para abandonar el dia."<<endl<<endl;
         cin>>n;
}

 }while(n!=0);
       }




}

void impresion(horario hi[])
{

  for  (int i=1;i<=5;i++)
     {

       for(int j=1;j<=10;j++)
       {
         cout<<"su dia"<<endl<<endl;
         cout<<hi[j].dia<<endl;
         cout<<"su semestre "<<endl<<endl;
         cout<<hi[j].semestre<<endl;
         cout<<"ingrese su materia"<<endl<<endl;
         cout<<hi[j].materia<<endl;
          /*cout<<"ingrese su hora inicial"<<endl<<endl;
         cin>>hi[j].inicio;
         cout<<"ingrese su hora final"<<endl<<endl;
         cin>>hi[j].final;
          */

        }
      }
}


void  hora()
 {

   // Declaracion de Variables
   time_t tiempo;
   char cad[80];
   struct tm * pTiempo;

   // Codigo del programa
   tiempo = time( NULL );
   pTiempo = localtime( &tiempo );
   strftime( cad, 80, "%H:%M.%S, %A de %B de %Y", pTiempo );

   printf( "La hora local es: %s\n", asctime(pTiempo) );
   printf( "La hora y fecha local es: %s\n", cad );

   getch();
}


///////  CUERPO PRINCIPAL /////////

 main ()


{

int op,opc;

   horario hi[5];

do{
         op=menu();


   switch (op)

   {

   case 1:
   ingreso (hi);
   break;
   case 2:
   impresion(hi);
   break;
   case 3:
   hora();



   }
}while(op!=0);






   getch();
} //fin del programa
