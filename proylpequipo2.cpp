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
 //time inicio;
 //time final;


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


void ingreso(horario hi[])
{
    int n;

      for (int i=1;i<=5;i++)
      {
do
{
       cout<<"ingrese su dia"<<i<<endl<<endl;
             cin>>hi[i].dia;
       cout<<"ingrese su semestre "<<endl<<endl;
            cin>>hi[i].semestre;
       cout<<"ingrese su materia"<<endl<<endl;
             cin>>hi[i].materia;
         /*cout<<"ingrese su hora inicial"<<endl<<endl;
            cin>>hi[i].inicio;
        cout<<"ingrese su hora final"<<endl<<endl;
            cin>>hi[i].final;
         */

         cout<<"quire seguir ingresando mas horas de clases"<<endl<<endl;
         cout<<"si desea pulse una tecla cualesquiera....__---__ caso contrario pulse 0  para abandonar el dia."<<endl<<endl;
         cin>>n;

 }while(n!=0);
       }




}

void impresion(horario hi[])
{    for  (int i=1;i<=5;i++)
     {
         cout<<"su dia"<<endl<<endl;
         cout<<hi[i].dia<<endl;
         cout<<"su semestre "<<endl<<endl;
         cout<<hi[i].semestre<<endl;
         cout<<"ingrese su materia"<<endl<<endl;
         cout<<hi[i].materia<<endl;
          /*cout<<"ingrese su hora inicial"<<endl<<endl;
         cin>>hi[i].inicio;
         cout<<"ingrese su hora final"<<endl<<endl;
         cin>>hi[i].final;
          */


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
}
