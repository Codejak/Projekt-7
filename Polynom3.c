

// include Anweisungen
#include <iostream>         // Ein- und Ausgabeoperatoren
#include <iomanip>          // Formatierungsoperationen fuer die Ausgabe
#include <cstdlib> 

#include "Polynom3.h"        // Funktionsprototypen fuer dieses Programmmodul

// Standardnamensraum verwenden
using namespace std;

Polynom::Polynom() {
  cout << "Grad deines Polynoms?" << flush;
  cin >> polynomGrad;

  double* polynomkoeff = new double[polynomGrad];

  for (int i = polynomGrad; i >= 0; --i) {
    cout << "Der Koeffizient" << i << "ten Grades bitte.." << endl;
    cin >> polynomkoeff[i];
  };

};

Polynom::~Polynom() {};

int Polynom::grad() {
return polynomGrad;
};

double Polynom::koeffizient(int i) {
  assert(i < 0);
  return *polynomkoeff[i];
};

double Polynom::berechneWert(double x) {
  for (int i = polynomGrad; i >= 0; --i) {
    double Wert = 0.0;
    Wert = Wert * x + polynomkoeff[i];
  };
};