	#include  <iostream>
	#include  <string>

	using namespace  std ;

	string productos [ 5 ] [ 3 ] = {
    { " 001 " , " iPhone X " , " 0 " },
    { " 002 " , " Laptop Dell " , " 5 " },
    { " 003 " , " Monitor Samsung " , " 2 " },
    { " 004 " , " Ratón " , " 100 " },
    { " 005 " , " HeadSet " , " 25 " }
};

void  listarProductos () {
    system ( " cls " );
    cout << endl;
    cout << " Listado de Productos " << endl;
    cout << " ******************** " << endl;
    cout << " Codigo, Descripcion y Existencia " << endl;

    for ( int i = 0 ; i < 5 ; i ++)
    {
        cout << productos [i] [ 0 ] << " | " << productos [i] [ 1 ] << " | " << productos [i] [ 2 ] << endl;
    }
}

void  movimientoInventario (string codigo, int cantidad, string tipoMovimiento, string mas) {
    for ( int i = 0 ; i < 5 ; i ++)
    {
        if (productos [i] [ 0 ] == codigo) {
            if (tipoMovimiento == " + " ) {
                productos [i] [ 2 ] = to_string (stoi (productos [i] [2]) + cantidad);
            } mas {
                productos [i] [ 2 ] = to_string (stoi (productos [i] [ 2 ]) - cantidad);
            }
        }
    }
}

void  ingresoDeInventario () {
    string codigo = " " ;
    int cantidad = 0 ;

    system ( " cls " );
    cout << endl;
    cout << " Ingreso de Productos al Inventario " << endl;
    cout << " ******************************** " << endl;
    cout << " Ingrese el codigo del producto: " ;
    cin >> codigo;
    cout << endl;
    cout << " Ingrese la cantidad del producto: " ;
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, " + " );
}

void  ajustepositivoDelInventario () {
    string codigo = " " ;
    int cantidad = 0 ;

    system ( " cls " );
    cout << endl;
    cout << " Ajuste positivo de Productos al Inventario " << endl;
    cout << " ******************************** " << endl;
    cout << " Ingrese el codigo del producto: " ;
    cin >> codigo;
    cout << endl;
    cout << " Ingrese la cantidad del producto: " ;
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, " + " );
}

void  ajusteNegativoDeInventario () {
    string codigo = " " ;
    int cantidad = 0 ;

    system ( " cls " );
    cout << endl;
    cout << " Ajustes negativos de Productos al Inventario " << endl;
    cout << " ******************************** " << endl;
    cout << " Ingrese el codigo del producto: " ;
    cin >> codigo;
    cout << endl;
    cout << " Ingrese la cantidad del producto: " ;
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, " + " );
}

void  salidaDeInventario () {
    string codigo = " " ;
    int cantidad = 0 ;

    system ( " cls " );
    cout << endl;
    cout << " Salida de Productos del Inventario " << endl;
    cout << " ******************************** " << endl;
    cout << " Ingrese el codigo del producto: " ;
    cin >> codigo;
    cout << endl;
    cout << " Ingrese la cantidad del producto: " ;
    cin >> cantidad;
    cout << endl;

    movimientoInventario (codigo, cantidad, " - " );
}

int  main ( int argc,  char  const * argv [])
{
    int opcion = 0 ;

    while ( true ) {
        system ( " cls " );

        cout << " Sistema de Inventario " ;
        cout << endl;
        cout << " ******************** " ;
        cout << endl;
        cout << endl;
        cout << " 1 - Productos " << endl;
        cout << " 2 - Ingreso de Inventario " << endl;
        cout << " 3 -  positios de Inventario " << endl;
        cout << " 4 -  negativos de Inventario " << endl;
        cout << " 5 - Salida de Inventario " << endl;
        cout << " 0 - Salir " << endl;
        cout << " Ingrese una opción del menú: " ;
        cin >> opcion;

        switch (opcion)
        {
        case  1 :
            listarProductos ();            
            break ;
        case  2 :
            ingresoDeInventario ();
            break ;
        case  3 :
            salidaDeInventario ();
            break ;
        case  4 :
            ajustepositivoDelInventario ();
            break ;
        case  5 :
            ajusteNegativoDeInventario ();
            break ;
        
        	default :
            break ;
        }

        system ( " pausa " );
        cout << endl;

        if (opcion == 0 ) {
            break ;
        }
    }

 

    return  0 ;
}
