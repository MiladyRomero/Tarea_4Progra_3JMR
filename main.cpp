#include "Evaluador.h"
#include <fstream>
#include <math.h>
//INCLUIMOS LA LIBRERIA STRING
#include <string>
using namespace std;

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
void escribirNumeroTexto(string nombre_archivo, int num)
{
    //CREAMOS EL ARCIVO Y LE AÑADIMOS EL .C_STR
    ofstream out(nombre_archivo.c_str());
    //esta paret se sobre explca por si sola, guarda la variabe num en el archivo
    out<<num<<endl;
    //el .flush esto es para que se almacene
    out.flush();
    // y como explico en clase el .close es para evitar la perdida de ram, eso cierra el archivo evitando errores de compilacion
    out.close();
}
int leerNumeroTexto(string nombre_archivo)
{
    //con el if stream como ya se sabe llamamos a el archivo que ya habiamos creado para poder leerlo
    ifstream in (nombre_archivo.c_str());
    int num;
    // con el in leemos le numeo de el arcivo
    in>>num;
    //regresamos el numero de el archivo
    return num;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
    ofstream out(nombre_archivo.c_str());
    //aqui como lo que tenemos que hacer es que lea una cadena
    //escribimos la variable tipo string dada
    out<<str<<endl;
    //hacemos el mismp proceso con el flush sin olvidar agregar e close para qevitarnos problemas al compilar
    out.flush();
    out.close();
}
string leerStringTexto(string nombre_archivo)
{
    //con el if stream como lo hisimos anteriormente leemos el archivo
    ifstream in (nombre_archivo.c_str());
    string str;
    // con el in leemos lo que se guardo en la variable tipo string
    in>>str;
    // y asi mismo la devolvemos
    return str;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
    ofstream out (nombre_archivo.c_str());
    //escribios con el .write usando siempre un char y el numero de bytes es en esta ocacion 4
    out.write((char *)&num,4);
    out.close();// el .close siempre es importante aunque no tengamos el . flush en esta ocacion
}
int leerNumeroBinario(string nombre_archivo)
{
    //el ifstream ya esta mas que claro que es pa leer el archivo
    ifstream in(nombre_archivo.c_str());
    //creamos una vaiable entera
    int ver;
    // para el casteo damos l mismo numero de bytes que antes
    in.read((char*)&ver,4);
    //y devolvemos lo que guaradmos en la variable ver para cumplir lo que se nos pide en el progama
    return ver;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
    //creamos el archivo
    ofstream out (nombre_archivo.c_str());
    //escribimos el string y los parametros
    out.write(str.c_str(),15);
    //el .close que como lo he escrio antes es para evitar errores de compulacion
    out.close();
}
string leerStringBinario(string nombre_archivo)
{
    //con el ifstream leemos el archivo creado
    ifstream in(nombre_archivo.c_str());
    //usamos un char paraleer el string
    char leido[4];
    in.read(leido,4);
    //devolvemos lo leido en el char
    return leido;
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
bool existe(string nombre_archivo, string str)
{
    ifstream in(nombre_archivo.c_str());//leemos el archivo
    //creamos una variabe de tipo string
    string word;
    //y otra tipo conador int
    int cantidad;
    //con un ciclo pienso que minimizamos el proceso por lo cual decidi hacer un ciclo
    //donde la condicion es si x es igual a cero y x es menor que la cantidad aumentar en x
    for(int x=0;x < cantidad;x++)
    {
        //para las condiciones en las que leemos el string
        in>>word;
        //aqi creamos la comparacion donde si se cumple ue word sea iguak a el srt devolvemos verdadero
        if(word == str)
        {
            return true;
        }
    }
    return false;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
