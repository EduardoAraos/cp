
#include <bits/stdc++.h>
 
using namespace std;
 
// pesos, tamaño caja, numero de cajas, indice del objeto en el q voy, tamaño de mi caja actual
int cabenenlascajas (vector<long> &objetos, long size ,long numerocajas, long ind){
 
	// el espacio que le queda a la caja
	long caja = size;
	// las cajas que he usado
	long cajasusadas = 0;
 
 
	for (int i = ind; i < objetos.size(); ++i)
	{
		// si el objeto pesa mas q la capacidad q tiene la caja
		// ya no me sirve esta caja y uso la siguiente
		if (objetos[i] > caja)
		{
			caja = size;
		}
 
		// si la caja tiene todo su tamaño es pq acabo de usar una 
		if (caja == size)
		{
			cajasusadas++;
		}
 		// le resto a la capacidad de la caja el objeto actual
		caja -= objetos[i];
 
		// SI USE MAS CAJAS DE LAS Q TENGO NO PUEDO ENTONCES
		if (cajasusadas > numerocajas)
		{
			return 0;
		}
 
	}
 
	return 1;
 
}
 
 
int main()
{
 
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	// Numero de objetos, numero de cajas, tamaño de cada caja
	long Nobj, Nbox, size;
 
	// peso de cada objeto
	vector<long> pesos;
 
	// peso de un objeto para ir añadiendolo a <pesos>
	long peso;
 
	cin >> Nobj >> Nbox >> size;
 
	for (int i = 0; i < Nobj; ++i)
	{
		cin >> peso;
		pesos.push_back(peso);
	}
 
	// BUSQUEDA BINARIA!!!!!!!!
	long A,B,mid;
 
	A = 0;
	B = Nobj-1;
 
    while (A < B)
    {
      mid = A + (B - A)/2;
      if( cabenenlascajas(pesos, size, Nbox, mid))
        B = mid;
      else
        A = mid + 1;
    }
    if( !cabenenlascajas(pesos, size, Nbox, A))
    {
    	cout << " no deberia pasar "<< '\n';
    }
    else
    {
      cout << pesos.size()-A <<'\n';
    }
 
 
	return 0;
}