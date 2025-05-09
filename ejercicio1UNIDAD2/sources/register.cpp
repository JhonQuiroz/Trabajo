#include <headers/register.h>
#include <iostream>

Register::Register(){
    do{
        menu(opt);
        ejecutar(opt);
    }while(opt != 'x');
}

void Register::menu(char &o){
    cout << "Registro de productos" << endl;
    cout << "[r] Registrar" << endl;
    cout << "[l] Listar" << endl;
    cout << "[s] Buscar" << endl;
    cout << "[m] Nivel de stock" << endl;
    cout << "[x] Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> o;
}

void Register::ejecutar(char &o){
    string id,name;
    int stock;
    double price;

    switch(o){
    case 'r':{
        cout << "ID del Producto: ";
        cin >> id;
        cout << "Nombre del Producto: ";
        cin >> name;
        cout << "Unidades del producto: ";
        cin >> stock;
        cout << "Precio del producto: ";
        cin >> price;
        // Llamar al controlador
        l.addId(id,name, stock, price);
        cout << "Registro Exitoso" << endl;
        break;
    }
    case 'l':{
        cout << "Listado de productos ingresados:" << endl;
        // Llamar al controlador
        l.list();
        break;
    }
    case 's':{
        cout << "ID del producto a buscar: ";
        cin >> id;
        // Llamar al controlador para buscar el producto
        l.searchById(id);
        break;
    }
    case 'm': {
        l.nivelStock();
    }
    case 'x':
        cout << "Fin de la aplicacion." << endl;
        break;
    default:
        cout << "Opcion Invalida" << endl;
        break;
    }
}
