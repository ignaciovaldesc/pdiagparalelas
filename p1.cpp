/*

autor: Ignacio Valdés
ramo: Computacion paralela
Profesor: Sebastian Salazar

*/
#include <iostream>

//Funcion que contara los caracteres y los mostrara
void contarmostrar(std::string s);

//Tomamos los datos desde la terminal
int main(int argc, char** argv)
{
    //Comprobamos si existe argumento
    if(argc>1)
    {

        //Llamamos a la funcion
        contarmostrar(argv[1]);

    }
    //De no haberse ingresado un argumento desde la terminal
    //se ejecuta lo siguiente
    else
    {
        std::cout<<"No ha ingresado valores a comparar"<<std::endl;
        return 0;
    }
}
/*La funcion tiene por objetivo contar 
letras repetidas consecutivamente
y mostrarlas por linea de comando.
Los datos solicitados es una cadena de caracteres
*/

void contarmostrar(std::string s){
    /*Declaracion de variables a utilizar
    "letra" se utilizara para guardar una letra
    y compararla luego*/
    char letra;
    /*"contador" se utilizara para 
    contar las letras repetidas*/
    int contador=1;
    /*Se iniciara con un ciclo for el cual permitira recorer
    el arreglo de caracteres "s";*/
    for(int i=0;i<s.length();i++){
        /*Se guarda el caracter que se encuentre en la 
        posicion i en la variable "letra"*/
        letra=s[i];
        /*Comparamos el contenido de "letra" 
        con el contenido
        ubicado en i+1 del arreglo s.
        De resultar cierto se sumara 1 al contador*/
        if(letra==s[i+1]){
            contador+=1;
        }
        /*Cuando la comparacion deje de ser verdadera 
        se imprimira el valor de letra, 
        contador y se reiniciara
        el contador en 1*/
        else{
            std::cout<<letra<<contador;
            contador=1;
        }
    }
}