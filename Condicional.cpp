/*Esccribe un programa que lea 2 numeros y determine cual es el dato mayo*/
#include<stdio.h>
#include<iostream>

using namespace std;


void Condicional(int val1,int val2)//Es la funcion creada creada para evaluar
{
    if (val1>val2)//Entra en la conciconal donde ve si es mayor uno a otro 
    {
        printf("El valor: %d  es mayor\n",val1);//Imprime el dato recivido
    }

    if (val2>val1)//Entra en la conciconal donde ve si es mayor uno a otro
    {
        printf("El valor %d es mayor\n", val2);//Imprime el dato recivido
    }
    
    if (val1==val2)//Entra en la conciconal donde ve si los numeros son iguales 9
    {
        printf("Pusiste dos numero iguales\n");//Imprime el dato recivido
    }
    
}

int main()
{

    int valor1, valor2;// Inicializamos los 2 valores iniciales con los cuales vamos a trabajar

    cout << "Hola porfavor introduce el primer valor" << endl;//Imprime dilogo
    cin >> valor1;//Esta pidiendo el primer valor 
    cout << "Porfavor introduce segundo valor" << endl;//Imprime dilogo
    cin >> valor2;//Esta pidiendo el segundo valor 

    Condicional(valor1,valor2);//Esta utilizando la funcion creada para evaluar

};


