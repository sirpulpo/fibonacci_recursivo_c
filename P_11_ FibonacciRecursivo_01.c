  #include<stdio.h>
  
  
  int fibonacci(int x);
  
  int main ()
  {
  	int numeros, x, respuesta;
  	system("color f2");
  	printf("\n\t\t\tPrograma Fibonacci");
  	printf("\n\t\t\t__________________\n");
  	printf("\n\t\tEste programa tiene como objetivo mostrar los\n\t\tN primeros terminos de la serie fibonacci\n\t\t");
  	printf("mediante una funcion recursiva.");
  	printf("\n\n\t\20La sucesion fibonacci comienza con los numeros 1 y 1,\n\ty a partir de estos, ");
	printf("cada termino es la suma de los dos anteriores,\n\tes la relacion de recurrencia que la define.\n\n\n");   

  	system("pause");
  	system("cls");
   	do
   	{
   		printf("\n\250Cuantos primeros terminos desea ver de la serie?: ","\n");
  	    scanf("%d", &numeros);
  	
  	    for(x=1; x<=numeros; x++)
  	    printf("%d\n", fibonacci(x));
  	    
   	    do
        {
         printf("\n\n\n\250Desea repetir el programa?\nSi=1\nNo=2\n\t\tRespuesta:");		  
	     scanf("%d", &respuesta); 
	     if(respuesta != 1 && respuesta !=2)
	     printf("\n\n\n\t\t* Opcion no valida intente de nuevo *");
	   }
		while (respuesta !=1 && respuesta !=2);                
		system("cls");
	}
	while(respuesta==1);	    
   	return 0;
  }
  
  int fibonacci(int x)
  
  {
  	
  	if(x<=2)
  	{
  		return 1;
  	}
  	else
  	{
  		return fibonacci(x-1) + fibonacci(x-2);      		
	}
  }
