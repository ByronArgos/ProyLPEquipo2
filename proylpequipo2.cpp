#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct hora_clase  {
  char dia[20];
  char semestre[20];
  char materia[20];
  char hini[5];
  char hfin[5];
};

int menu() {
  clrscr();
	int opc;
     cout<<".....---- menu----....."<<endl<<endl;
     cout<<"1.-Ingresar una nueva hora de clases"<<endl<<endl;
     cout<<"2.-Ver el horario del dia" <<endl<<endl;
     cout<<"3.-Ver el horario de la semana"<<endl<<endl;
     cout<<"0.-Salir"<<endl<<endl;
     cin>>opc;
     return opc;
}

void ingreso(hora_clase horario[], int last) {
  hora_clase aux;
  char hora[2], cad[5];
  int hor;

  cout<<"ingrese el dia: "<<endl<<endl;
  cin>>aux.dia;
  cout<<"ingrese el semestre: "<<endl<<endl;
  cin>>aux.semestre;
  cout<<"ingrese la materia: "<<endl<<endl;
  cin>>aux.materia;
  do {
    cout<<"ingrese la hora inicio"<<endl<<endl;
    cin>>hor;
    if ((hor >=0 )  && (hor <=9)){
    	itoa(hor,hora,2);
    	strcat(cad,"0");
    	strcat(cad,hora);
    	strcat(cad,"H00");
    }
   	if ((hor >=10 )  && (hor <=23)) {
      itoa(hor,hora,2);
    	strcat(cad,"0");
    	strcat(cad,hora);
    	strcat(cad,"H00");
    }
  } while ((hor <=0) && (hor >= 23));
  strcat(aux.hini,cad);

  do {
    cout<<"ingrese la hora fin"<<endl<<endl;
    cin>>hor;
    if ((hor >=0 )  && (hor <=9)){
    	itoa(hor,hora,2);
    	strcat(cad,"0");
    	strcat(cad,hora);
    	strcat(cad,"H00");
    }
   	if ((hor >=10 )  && (hor <=23)) {
        itoa(hor,hora,2);
    	strcat(cad,"0");
    	strcat(cad,hora);
    	strcat(cad,"H00");
    }
  } while ((hor <=0) && (hor >= 23));
  strcat(aux.hfin,cad);

  // Aqui coloque codigo ara determinar cruces..


  last = last + 1;
  horario[last] = aux;


}

void impresionStruct(hora_clase var) {
  cout<<"Dia:"<<endl<<endl;
  cout<<var.dia<<endl;
  cout<<"Semestre: "<<endl<<endl;
  cout<<var.semestre<<endl;
  cout<<"Materia: "<<endl<<endl;
  cout<<var.materia<<endl;
  cout<<"hora inicio: "<<endl<<endl;
  cout<<var.hini<<endl<<endl;
  cout<<"hora fin: "<<endl<<endl;
  cout<<var.hfin<<endl<<endl;
}

void getDia(char dia[], char hora[]) {
  time_t rawtime;
  struct tm * timeinfo;
  char cad [10];
  char cad1 [10];
  time (&rawtime);

  timeinfo = localtime (&rawtime);
  strftime (cad,10,"%A",timeinfo);
  strftime (cad1,10,"%H",timeinfo);
  dia = cad;
    // cortar a tres carateres iniciale a cad
  hora = cad1;
}

void getHorarioDia(hora_clase horario[],int num,char dia[])
{
  int i, j, k=-1, n;
  hora_clase select[10], aux;
  char d[10], hora[5], hor[2]; //debe ser 3 caracteres
  int hor1, hor2;
  //  sacar las horas clase de un dia
  for (i = 0; i<=num; i++) {
    strcat(d,horario[i].dia);
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  //ordenamos
  for (i = 0; i<k; i++) {
    for (j = 1; j<=k; j++) {
      strcat(hora,select[i].hini); 
     //hora inicial del registro 1
      for(n = 0; n < 2; n++)   //toma los dos primeros caracteres
      {
        hor[n] = hora[n];
      }
      hor1 = int(hor);    //convierto a numero 

      strcat(hora, select[j].hini);
      for(n = 0; n < 2; n++)    //toma los dos primeros caracteres
      {
        hor[n] = hora[n];
      }
      hor2 = int(hor);


      if (hor1 > hor2) {
        aux = select[i];
        select[i] = select[j];
        select[j] = aux;
      }
    }
  }
  //impresion
  for (i = 0; i<=k; i++) {
    aux = select[i];
    impresionStruct(aux);
  }
}

// impresion del horario de la semana
void getHorario(hora_clase horario[],int num){
  int i,n,k=-1;
  char dia[3],dia1[10], d[3];
  hora_clase select[10];
  strcat(dia, "MON");
  for (i = 0; i<=num; i++) {
    strcat(dia1,horario[i].dia);
    for(n = 0; n < 3; n++)  {   //toma los dos primeros caracteres
        d[n] = dia1[n];
    }
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  getHorarioDia(select,k,dia);
  strcat(dia,"TUE");
  for (i = 0; i<=num; i++) {
    strcat(dia1,horario[i].dia);
    for(n = 0; n < 3; n++)  {   //toma los dos primeros caracteres
        d[n] = dia1[n];
    }
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  getHorarioDia(select,k,dia);
  strcat(dia,"WED");
  for (i = 0; i<=num; i++) {
    strcat(dia1,horario[i].dia);
    for(n = 0; n < 3; n++)  {   //toma los dos primeros caracteres
        d[n] = dia1[n];
    }
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  getHorarioDia(select,k,dia);
  strcat(dia,"THU");
  for (i = 0; i<=num; i++) {
    strcat(dia1,horario[i].dia);
    for(n = 0; n < 3; n++)  {   //toma los dos primeros caracteres
        d[n] = dia1[n];
    }
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  getHorarioDia(select,k,dia);
  strcat(dia,"FRY");
  for (i = 0; i<=num; i++) {
    strcat(dia1,horario[i].dia);
    for(n = 0; n < 3; n++)  {   //toma los dos primeros caracteres
        d[n] = dia1[n];
    }
    if (strcmp(d,dia) == 0) {
      k++;
      select[k] = horario[i];
    }
  }
  getHorarioDia(select,k,dia);



}

int main () {
  int lastindex = -1;
  int op,i=0;
  char dia[10],hora[5];
  hora_clase horario[50];

  //carga los datos del archivo al vector  horario[]

  clrscr();
  do {

    op = menu();
    switch (op) {
      case 1: {
        clrscr();
        cout<<"INGRESO DE HORA CLASE"<<endl<<endl;
        ingreso(horario,lastindex);
        for (i = 1; i<= lastindex; i++)      {
            impresionStruct(horario[i]);
        }
       break;
      }
      case 2: {
        clrscr();
        cout<<"Impresion de horario dia Actual"<<endl<<endl;
        getDia(dia, hora);
        getHorarioDia(horario,lastindex,dia);
        break;
      }
      case 3: {
        clrscr();
        cout<<"Impresion de horario semana"<<endl<<endl;
        getHorario(horario,lastindex);
        break;
      }
      case 0: {
        op = 0;
        //guardamos todos los registros del vector horario al archivo
        break;
      }
    }
    getch();
  } while(op!=0);
 return 0;
} //fin del programav
