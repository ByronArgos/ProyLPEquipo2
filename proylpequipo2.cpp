/*donde
hi:Horario de Ingreso */

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>



struct horario
{
 char dia[20];
 char semestre[20];
 char materia[20];
 char hini[5];
 char hfin [5];

};


int menu()
{
  int opc;
          do{
   cout<<".....---- menu----....."<<endl<<endl;
   cout<<"1.-Ingresar una nueva hora de clases"<<endl<<endl;
   cout<<"2.-Ver el horario " <<endl<<endl;
   cout<<"3.-Ver el horario de la semana"<<endl<<endl;
   cout<<"0.-Salir"<<endl<<endl;
    cin>>opc;
    return(opc);
    clrscr();

           }while (opc!=0);


}


void ingreso(hora_clase horario[], int last)
{


 hora_clase aux;
  char hora[2], cad[5];

       cout<<"ingrese su dia"<<i<<endl<<endl;
             cin>>aux.dia;
       cout<<"ingrese su semestre "<<endl<<endl;
           cin>>aux.semestre;
       cout<<"ingrese su materia"<<endl<<endl;
               cin>>aux.materia;
         cout<<"ingrese su hora inicial"<<endl<<endl;
           cin>>hora;
           int cad=int(hora)
          strftime(cad,80," %HH00",timeinfo)
           puts(cad)

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


   }
}while(op!=0);






   getch();
} //fin del programa
