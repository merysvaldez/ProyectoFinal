

#include <iostream>  
 using namespace std;  
 int main()
 
 {    
 int a,b,op;
printf("Nombre:	        Matricula:      Seccion:  profesor:             materia: \n");
printf("Merys Valdez	15-SISM-1-007     0908    starlig germosen  programacion (c++)\n\n");
                                                                            
      
	  int c;
	  printf ("Bienvenido al proceso de sumatoria de notas!\n\n\n");
	  
	  char nombre[40];
      char calificaciones[10];
      float c1,c2,c3,c4,calif;  
      
      printf("Ingrese nombre del alumno: ");
        scanf("%s", nombre);

      printf("\t\t Porfavor Ingrese sus calificaciones segun se les pida: \n\n");
	 
  
	  cout<<"1- Asistencia : ";cin>>c1;cout<<endl;  
      cout<<" 2- Practica : ";cin>>c2;cout<<endl;  
      cout<<"3- Examen parcial : ";cin>>c3;cout<<endl;  
      cout<<"4- Examen Final : ";cin>>c4;cout<<endl; 
      
	  calif=(c1+c2+c3+c4);  
      
	  if (calif>=70){  
           cout<<endl;  
           cout<<"FELICIDADES APROBADO! tu calificacion es : "<<calif;  
}  
      else  
      {  
           cout<<endl;  
           cout<<"DEBES ESTUDIAR MAS, REPROBADO! tu calificacion es : "<<calif;  
           
           
           
}  
      return 0;  
 }   

