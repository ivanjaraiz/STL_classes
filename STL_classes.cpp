// STL_classes.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//TODO ESTO ESTA DISPONIBLE TB EN JAVA
#include <iostream>
#include<vector>
#include<list>
#include<forward_list>
#include<set>
using namespace std;
int main()
{
    //vector<int> v = { 2,4,6,8,10 }; // uso de array
    //list<int> v = { 2,4,6,8,10 }; // uso de lista enlazada
    //forward_list<int> v = { 2,4,6,8,10 }; // lista simple
    set<int> v = { 2,4,6,8,10,10}; // de valor único. Se puede ver que al añadir un 10, al correr
    //el programa solo tenemos un 10

    //v.push_back(20);  OJO!!  NO ES MIEMBRO DE FORWARD_LIST
    //v.push_back(30); // añadir valores OJO!!  NO ES MIEMBRO DE FORWARD_LIST
    //v.push_front(20);  // MIEMBRO DE FORWARD_LIST
    //v.push_front(30);  // MIEMBRO DE FORWARD_LIST
    v.insert(20);  // MIEMBRO DE SET
    v.insert(30);  // MIEMBRO DE SET
    //v.pop_back(); // se quita el 30 OJO!!  NO ES MIEMBRO DE FORWARD_LIST

    //vector<int>::iterator itr; // uso de array
    //list<int>::iterator itr; // uso de lista enlazada
    //forward_list<int>::iterator itr; //
    set<int>::iterator itr;

    cout << "Using iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl; // tenemos que desreferenciar porque itr es un puntero
        //cout << ++*itr << endl; // incrementa los valores del array. {3,5,7,9,11}
    cout << "Using for each loop" << endl;

    for (int x:v)
        cout << x << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
