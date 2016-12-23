#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();

        //Se definen los metodos publicos:
        //metodo contar(), sera el que cuente el tamaño de los vectores: "positivos" y "negativos"
        void contar();
        //metodo para clasificar los numeros negativos y positivos
        void clasificar();
        //Metodos Setters y Getters de la clase...
        void setNum(int pos, int val);
        int getNum(int pos);
        void setPositivos(int pos, int val);
        int getPositivos(int pos);
        void setNegativos(int pos, int val);
        int getNegativos(int pos);
        void setTamPos(int n);
        int getTamPos();
        void setTamNeg(int n);
        int getTamNeg();

    protected:

    private://se definen 5 atributos y 1 metodo privados:
        //crearVectores() y necesitara de dos parametros: "pos" para el tamaño del vector
        //"positivos" y "neg" para el de "negativos"
        void crearVectores(int pos, int neg);

        int *num;//1 vector de tipo entero llamado "num" con 12 posiciones
        int *positivos;//1 vector de tipo entero llamado "positivos"
        int *negativos;//1 vector de tipo entero llamado "negativos"
        int pos;//una variable de tipo entero llamada "pos"
        int neg;//una variable de tipo entero llamada "neg"
};

#endif // CALCULAR_H
