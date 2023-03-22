#include <iostream>
using namespace std;

main(){
	int total = 0,*p_notas;
	p_notas = new int[total];
	char res;
	
	
	do{
		cout<<"Ingrese Nota "<<total<<" : ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea Ingresar Otro Valor(s/n):";
		cin>>res;
	}while(res=='s'||res =='S');
	
cout<<" --------Mostrar Notas-----------"<<endl;
for(int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"):"<<*p_notas<<endl;
	p_notas++;
	
}

 	delete[] p_notas;
	system("pause");
}
