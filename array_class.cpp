// Ejercicio a modo de aprendizaje donde se busca crear una clase llamada Arreglo que tenga las carateristicas basicas y los metodos basicos de un Array
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

class Arreglo{
    
    public:
        string datos[100] = {};
        int longitud = 0;
        int limite = 100;

        void insertar(string nuevo){
            for(int i = 0; i<100; i++){
                if(datos[i] == ""){
                    datos[i] = nuevo;
                    longitud++;
                    break;
                }
                else{
                    continue;
                }
            }
        };

        string i(int iterador){
            if(datos[iterador] != ""){
                return datos[iterador];
            }
            else{
                cout << "Este elemento no tiene valor asignado";
                return "";
            }

        };

        void multiple(string mult[], int mult_limit){
            for(int i = 0; i<mult_limit; i++){
                insertar(mult[i]);
            }
        };

        void imprimir(){
            string imprimir_datos;
            cout << "\nTipo -> Arreglo\n\n";
            for (int i = 0; i < 100; i++){
                if(datos[i] == ""){
                    break;
                }
                string iterador = to_string(i);
                imprimir_datos.append("("+iterador+") "+datos[i]+"\n");
            }
            cout << imprimir_datos << "\n";
        };

        void eliminar(){
            for(int i = 0; i<limite; i++){
                if(datos[i] == "" && i != 0){
                    cout << i;
                    datos[i-1] = "";
                    longitud--;
                    break;
                }
            }
        };
};


int main(){
    Arreglo prueba;
    string pass[] =  {"example", "example2"};
    prueba.insertar("ejemplo");
    prueba.multiple(pass, 2);
    prueba.eliminar();
    prueba.imprimir();
    cout << prueba.i(0) << "\n";
    return 0;
}