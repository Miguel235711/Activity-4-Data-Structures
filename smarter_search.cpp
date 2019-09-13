#include<iostream>
#include<string>

using namespace std;

class smarter_search{

    private:
        int patronString[100];
        int arregloSize;
        std::string patron;
        std::string texto;
    public:
        void countEveryComparissonOfStringComparisson(string const& text, string const& pat){
            FastString(pat);
            Encontrar(text);
        }
        void FastString(string codigo){
            string patron = codigo;
            string arreglo = patron;
            int salto = 0;
            int contadorPatron = 0;
            int contadorArreglo = 0;
            for (int i = 0; i < arreglo.length(); i++) {
                //std::cout << arreglo[contadorArreglo] << "   " << patron[i] << "\n";
                if (arreglo[contadorArreglo] == patron[i] && contadorArreglo != i) {
                    salto++;
                    contadorArreglo = salto;
                    contadorPatron++;
                }
                else if (arreglo[0] == patron[i] && contadorArreglo != i) {
                    salto = 1;
                    contadorArreglo = salto;
                    contadorPatron++;
                }
                else {
                    salto = 0;
                    contadorPatron++;
                }
                patronString[i] = salto;
            }
            arregloSize = arreglo.length();
            /*
            for (int i(0); i < arreglo.length(); i++) {
                std::cout << patronString[i];

            }
            */

        }

        void Encontrar(std::string codigo){
            std::cout<<"\n";
            string arreglo = texto;
            string patron =	codigo;
            int contadorPatron = 0;
            int coincidencia = 0;
            bool encontrado = false;
            for (int i = 0; i < arreglo.length(); i++) {

                //std::cout<<arreglo[i]<<"["<<i<<"]"<< "  "<<patron[contadorPatron]<<"["<<contadorPatron<<"] coincidencia: "<<coincidencia<<"Deberia empezar: "<<coincidencia-patronString[contadorPatron]<<"\n";
                if (arreglo[i] == patron[contadorPatron]) {
                    //std::cout << arreglo[i] << "   " << patron[contadorPatron] <<"\n";
                    //std::cout<<"huboMatch\n";
                    coincidencia++;
                    contadorPatron++;
                }
                else if(coincidencia == patron.length() && i<arreglo.length()){
                    if(encontrado==false){
                        std::cout<< " Se encontro coincidencia en el caracter: " << i-patron.length() << "\n";
                    }
                    encontrado=true;
                    i++;
                }
                else {
                    i=coincidencia-patronString[contadorPatron]-1;
                    coincidencia = 0;
                    contadorPatron=0;
                }

            }

        }

    /*
        int main()
        {
            patron = "ABCABMO";
            texto =  "ABABCABMOABCM";



            FastString(patron);
            for (int i(0); i < arregloSize; i++) {
                cout << patronString[i];
            }
            Encontrar(patron);


        }
        */
};