#include <iostream>
#include "Calcular.h"

using namespace std;

//Implementacion del metodo para mostrar los numeros positivos
void mostrarPositivos(Calcular* obj)
{
    cout << "DATOS POSITIVOS:" << endl;
    //recorremos con el ciclo for hasta el tamaño del vector que contiene los numeros positivos
    for(int i = 0; i < obj->getTamPos(); i++)
    {
        cout << obj->getPositivos(i) << " ";//mostramos en pantalla los valores positivos del vector
    }
    cout << endl;//saltamos una linea para que no quede todo en una sola linea...
}

//Implementacion del metodo para mostrar los numeros negativos
void mostrarNegativos(Calcular* obj)
{
    cout << "DATOS NEGATIVOS:" << endl;
    //recorremos con el ciclo for hasta el tamaño del vector que contiene los numeros negativos
    for(int i = 0; i < obj->getTamNeg(); i++)
    {
        cout << obj->getNegativos(i) << " ";//mostramos en pantalla los valores negativos del vector
    }
    //Se muestra el valor acumulado en datosVector en un mensaje de dialogo
}

int main(void)
{
    //Se crea un objeto de la clase Calcular (Instanciaciación)
    Calcular* obj = new Calcular();
    int n;//se define una variable de tipo n llamada "n"
    for(int i = 0; i < 12; i++)//con el ciclo for pediremos 12 veces los datos
    {
        //pedimos el numero de la posicion "i"
        cout << "Digite numero de la posicion " << i << endl;
        cin >> n;//guardamos el numero en "n"
        obj->setNum(i, n);//encapsulamos la variable "n"
    }
    obj->contar();//llamamos al metodo contar()
    obj->clasificar();//llamamos al metodo clasificar()

    mostrarPositivos(obj);//llamamos al metodo mostrarPositivos() y le pasamos un objeto de la clase Calcular (obj)
    mostrarNegativos(obj);//llamamos al metodo mostrarNegativos() y le pasamos un objeto de la clase Calcular (obj)
}
