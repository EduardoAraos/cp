#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	// casos de querys
	long long test;
	// largo del camino, frecuencia de las lamparas, posicion principio tren, posicion final tren
	long long L, v, ti, tf;
 
	cin >> test;
 
	for (int i = 0; i < test; ++i)
	{
		cin >> L >> v >> ti >> tf;
			
		long long res = 0;
 
		res = L/v;
 
		if (ti%v != 0)
		{
			long long loqfaltaprinc = v-(ti%v);
			ti += loqfaltaprinc;
		}
 
		if (tf%v != 0)
		{
			long long loqsobrafina =tf%v;
			tf -= loqsobrafina;
		}
 
		long long tapadas = 1+(tf-ti)/v;
 
		res-= tapadas;
		
		cout << res << '\n';
 
	}
	return 0;
}