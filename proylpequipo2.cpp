#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <time.h>






//cambiar a entero y dar formato de hora en cadena "07H00"
  //cad =  "07H00";
  aux.hini = cad;
  cout<<"ingrese la hora final"<<endl<<endl;
  cin>>hora;
  int cad=int(hora)
  strftime(cad,80," %HH00",timeinfo)
  puts(cad)
  //cambiar a entero y dar formato de hora en cadena "07H00"
  //cad =  "07H00";
  aux.final= cad;


  last = last +1;
  horario[last] = aux;
}

 }while(n!=0);
       }




}

void impresionStruct(hora_clase var) {
  cout<<"Dia:"<<endl<<endl;
  cout<<var.dia<<endl;
  cout<<"Semestre: "<<endl<<endl;
  cout<<var.semestre<<endl;
  cout<<"Materia: "<<endl<<endl;
  cout<<var.materia<<endl;
  cout<<"hora inicio: "<<endl<<endl;
  cout<<var.inicio<<endl<<endl;
  cout<<"hora fin: "<<endl<<endl;
  cout<<var.final<<endl<<endl;
}
char[] getDia() {
  time_t rawtime;
  struct tm * timeinfo;
  char cad [80];
  // char hour[80];
  time (&rawtime);

  timeinfo = localtime (&rawtime);
  strftime (cad,80,"%A",timeinfo);
  //strftime (hour,80,"%H",timeinfo);
  //agregar la funcion para sacar los 3 caracteres inciales.
  //cad=strcad(cad,3);
  return cad;
}


///////  CUERPO PRINCIPAL /////////

int main () {
  int lastindex = -1;
  int op;
  char dia[3];
  hora_clase horario[50];
  //lectura del archivo.
  // todos los datos del archivo asignar al vector.
  // y setear lastindex al ultimo valor.
  // cierran

  do {
    op = menu();
    switch (op) {
      case 1: {
        ingreso(horario,lastindex);
        break;
      }
      case 2: {
        dia = getDia();
        // getDia(dia);
        getHorarioDia(horario,lastindex,dia);
        break;
      }
      case 3: {
        getHorario(horario,lastindex);
        break;
      }
      case 0: {
        // archivo archivo, vaciar todos lo elementos.
        //recorrer el vector y cada elemento guardar en el archivo binario
        //cerrar el archivo.
        break;
      }
    }
  } while(op!=0);
  getch();
} //fin del programa

