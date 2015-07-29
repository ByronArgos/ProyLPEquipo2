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
