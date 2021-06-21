#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{   
    int opcion;
    cout<<"\t*****************\n"<<endl;
    cout<<"\tMENU DE JUEGOS \n"<<endl;
    cout<<"\t*****************\n"<<endl;
    cout<<"1. StartShip \n"<<endl;
    cout<<"2. Snake \n"<<endl;
    cout<<"Seleccione un juego mediante un numero:\n "<<endl;
    cin>>opcion;

    if (opcion==1){
        starShip ();
    }
    else{
        if(opcion==2){
         snake ();
    }
    }
  // starShip ();
    // serpiente ();
    return 0;
}
