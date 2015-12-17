
#ifndef POLYNOM3__H_
#define POLYNOM3__H_

int liesPolynom();  

double findeNullStelleRekursiv(double, double);
double findeNullStelleIterativ(double, double);

double p(double);  
int gradzahl;

class Polynom {
	private:
		int polynomGrad;
		double* PolynomKoeff;

	public:
		Polynom();
		~Polynom();
		int grad();
		double koeffizient(int i);
		double berechneWert(double x);
};

#endif 

