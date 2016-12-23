#include "Calcular.h"

//Implementacion del constructor de la clase Calcular
Calcular::Calcular()
{
    //se le asignan por defecto los siguiente valores:
    num = new int [12];//a "num" se le asigna un tamaño de 12 posiciones
    pos = 0;//a pos se le asigna 0
    neg = 0;//a neg se le asigna 0
}

Calcular::~Calcular()
{
    //dtor
}

//Implementacion del metodo para crear los vectores "positivos" y "negativos"
void Calcular::crearVectores(int pos, int neg)
{
    //al vector "positivos" le asignamos el tamaño que haya en la variable "pos"
    positivos = new int [pos];
    //al vector "negativos" le asignamos el tamaño que haya en la variable "neg"
    negativos = new int [neg];
}

//Implementacion del metodo para contar el tamaño de los vectores: "positivos" y "negativos"
void Calcular::contar()
{
    //se recorre el vector "num"
    for(int i = 0; i < 12; i++)
    {
        //si el valor en la posicion "i" del vector "num" es menor que 0, entonces:
        if(num[i] < 0)
        {
            //la variable neg incrementa
            neg++;
        }
        else//sino
        {
            //la variable pos incrementa
            pos++;
        }
    }
    //Se llama al metodo crearVectores() y le asignamos los parametros "pos" y "neg" que seran los
    //tamaños de los vectores "positivos" y "negativos"
    crearVectores(pos, neg);
    //Se llama el metodo setTamPos() y le asignamos pos, sera el tamaño que hay en el vector "positivos"
    setTamPos(pos);
    //Se llama el metodo setTamNeg() y le asignamos pos, sera el tamaño que hay en el vector "negativos"
    setTamNeg(neg);
}

//Implementacion del  metodo para clasificar los numeros negativos y positivos en sus respectivos vectores
void Calcular::clasificar()
{
    //se definen las variable aux1 y aux2
    int aux1, aux2;
    //le asignamos a aux1 y aux2 el valor de 0
    aux1 = 0;
    aux2 = 0;

    //Recorremos el vector "num" con el ciclo for
    for(int i = 0; i < 12; i++)
    {
        //si el valor en la posicion "i" del vector "num" es menor que 0, entonces:
        if(num[i] < 0)
        {
            //en la posicion aux1 del vector "negativos" se le asigna el valor que hay en la
            //posicion "i" del vector "num"
            negativos[aux1] = num[i];
            //se incrementa aux1
            aux1++;
        }
        else//sino
        {
            //en la posicion aux2 del vector "positivos" se le asigna el valor que hay en la
            //posicion "i" del vector "num"
            positivos[aux2] = num[i];
            //se incrementa aux2
            aux2++;
        }
    }
}

//Implementacion de los metodos Setters y Getters de los atributos de la clase
void Calcular::setNum(int pos, int val)
{
    num[pos] = val;
}

int Calcular::getNum(int pos)
{
    return num[pos];
}

void Calcular::setPositivos(int pos, int val)
{
    positivos[pos] = val;
}

int Calcular::getPositivos(int pos)
{
    return positivos[pos];
}

void Calcular::setNegativos(int pos, int val)
{
    negativos[pos] = val;
}

int Calcular::getNegativos(int pos)
{
    return negativos[pos];
}

void Calcular::setTamPos(int n)
{
    pos = n;
}

int Calcular::getTamPos()
{
    return pos;
}

void Calcular::setTamNeg(int n)
{
    neg = n;
}

int Calcular::getTamNeg()
{
    return neg;
}
