// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  //Este es el dato que se manda por el beacon en el minor
  //solo se usará este sprint, más tarde se pondrán medidas de datos reales
  int dato = 0;

  // .....................................................
  // constructor
  // .....................................................
  Medidor() {
  }  // ()

  // .....................................................
  // .....................................................
  void iniciarMedidor() {
    // las cosas que no se puedan hacer en el constructor, if any

  }  // ()

  // .....................................................
  // .....................................................
  /*
  int medirCO2() {
    return 235;
  }  // ()

  // .....................................................
  // .....................................................
  int medirTemperatura() {
    return -12;  // qué frío !
  }              // ()
  */
  //Esta es la función que emula un dato falso para hacer pruebas
  //Empieza en 1, llega a 100 y se resetea a 1
  int medirDato() {

    if (dato > 101) 
    {
      dato = 1;
    } 
    else 
    {
      dato++;
    }
    
    return dato;
  }
};  // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif