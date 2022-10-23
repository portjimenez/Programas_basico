#include <iostream>
#include <iomanip>
#include <cmath>
#include<stdio.h>
#include <math.h>
using namespace std;
struct Operaciones{
	float numero;
	float total;
	float numero2;
};
struct Evaluar{
	int numero;
};
struct Medidas{
	float dato, total;
};
struct datosPalindromo{
	int valor;
	string palabra, convertir;
};
struct numeroArabigo{
	int numero, unidades, decenas, centenas, millar;
};
struct numeroLetras{
	int numero, unidades, decenas, centenas, millar;
};
struct numeroLetrasDecimal{
	int numeroEntero, numeroDecimal, unidad, decena, centena, decima, centecima, milesima;
};
struct Tabla{
	int total;
};
struct Grafica{
	int valroA, valorB, totalA, totalB, totalF, unidad, decena;
};

void Suma();
void Par_impar();
void Conversion();
void Palindromo();
void Romanos();
void Letras();
void LetrasDecimal();
void TablaM();
void TablaM2();
void Mmanual();
void Decimal();
void Hexadecimal();
void Figuras();
void Hipotenusa();
//datos principales
main(){
	int opcion = 0;
	cout<<"-------------- Bienvenido al programa -------------- \n";
	cout<<"A continuacion se le muestra las funciones que usted tiene \n";
	cout<<"Seleccione una, solo debe de precionar el numeral de la opcion seguido de un enter \n";
	cout<<"------------------------- Opciones -------------------------\n";
	cout<<"_____________________________________________________________________________________________\n";
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros \n";
	cout<<"2. Determinar si un numero es par o impar \n";
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa \n";
	cout<<"4. Determinar si una palabra o un número es palindromo. \n";
	cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000) \n";
	cout<<"6. Conversion de numeros enteros a letras \n";
	cout<<"7. Conversion de numeros enteros con decimal a letras \n";
	cout<<"8. Una tabla de multiplica \n";
	cout<<"9. Todas las tablas de multiplicar del 1 al 10 \n";
	cout<<"10. Crear de forma grafica la multiplicacion manual (de 2 numeros enteros cuales sea) \n";
	cout<<"11. Conversion de numeros decimales a binario \n";
	cout<<"12. Conversion de numeros decimales a hexadecimales \n";
	cout<<"13. Crear Figuras Geometricas Basicas. \n";
	cout<<"14. Calcular la hipotenusa \n";
	cout<<"_____________________________________________________________________________________________\n";
	cout<<"Seleccione una: ";
	cin>>opcion;
	
	switch (opcion){
		case 1:Suma();break;
		case 2: Par_impar();break;
		case 3: Conversion();break;
		case 4: Palindromo();break;
		case 5: Romanos();break;
		case 6: Letras();break;
		case 7: LetrasDecimal();break;
		case 8: TablaM();break;
		case 9: TablaM2();break;
		case 10: Mmanual(); break;
		case 11: Decimal(); break;
		case 12: Hexadecimal(); break;
		case 13: Figuras(); break;
		case 14: Hipotenusa(); break;
}
	
	system("pause");
}
//operaciones aritmeticas basicas
void Suma(){
	system("cls");
	char res;
	int opc=0;
	Operaciones op;
	cout<<"------------Bienvenido a la parte de SUMA, RESTA, MULTIPLICACION y DIVISION------------\n";
	cout<<"Por favor seleccione una de las siguientes operaciones \n";
	cout<<"1. Suma \n";
    cout<<"2. Resta \n";
    cout<<"3. Multiplicacion \n";
    cout<<"4. Division \n";
    cout<<"5. Regresar al menu principal \n";
    do{

    cout<<"Ingrese el nulmero de la opcion que ha seleccionado: ";
    cin>>opc;
    switch (opc){
    	case 1:
    		system("cls");
    		cout<<"...Esto es una suma...\n";
    		for (int x=1; x<=2; x++){
    			cout<<"Ingrese su dato No. "<<x<<": ";
    			cin>>op.numero;
    			op.total = op.total + op.numero;
			}
			cout<<"Total de la suma: "<<op.total<<endl;
		break;
    	case 2:
    		system("cls");
    		cout<<"...Esto es una resta...\n";
    		
    		cout<<"Ingrese su dato No. 1: ";
    		cin>>op.numero;
    		cout<<"Ingrese su dato No. 2: ";
    		cin>>op.numero2;
    		op.total = op.numero - op.numero2;

			cout<<"Total: "<<op.total<<endl;
		break;
		case 3:
    		system("cls");
    		cout<<"...Esto es una multiplicacion...\n";
			
			cout<<"Ingrese el valor no. 1: ";
			cin>>op.numero;
			cout<<"Ingrese el valor no. 2: ";
			cin>>op.numero2;
			op.total = op.numero * op.numero2;
		
			cout<<"Total: "<<op.total<<endl;
		break;
		case 4:
    		system("cls");
    		cout<<"...Esto es una division...\n";
			
			cout<<"Ingrese el valor no. 1: ";
			cin>>op.numero;
			cout<<"Ingrese el valor no. 2: ";
			cin>>op.numero2;
			op.total = op.numero / op.numero2;
		
			cout<<"Total: "<<op.total<<endl;
		break;
		case 5:
			system("cls");
			main();
			
		break;

	}
	cout<<"Desea hacer otra operacion (s/n): ";
	cin>>res;
	} while(res=='s'||res=='S');
}
//Determinar si un numero es par o impar
void Par_impar(){
	system("cls");
	char res;
	Evaluar par_impar;
	cout<<"----------------------- Par o impar -----------------------\n";
	cout<<"Ingrese el numero a evaluar: ";
	cin>>par_impar.numero;
	if ((par_impar.numero%2)==0){
		cout<<"El numero que usted ingreso es Par\n";
	}else{
		cout<<"El numero que usted ingreso es Impar\n";
	}
	cout<<"Desea evaluar otro numero? (s/n): ";
	cin>>res;
	if(res == 's'||res == 'S'){
		Par_impar();
	}else{
		system("cls");
		main();
	}
}
//Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa
void Conversion(){
	system("cls");
	char res;
	int op;
	Medidas medida;
	cout<<"----------------------------------- Conversiones -----------------------------------\n";
	do{
		system("cls");
		cout<<"Seleccione le tipo de conversion que desea\n";
		cout<<"1. kilometros a millas\n";
		cout<<"2. metros a pulgadas\n";
		cout<<"3. libras a kilos\n";
		cout<<"4. millas a kilometros\n";
		cout<<"5. pulgadas a metros\n";
		cout<<"6. kilos a libras\n";
		cout<<"7. Menu principal\n";
		cout<<"Escoja una de las opciones: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				cout<<"------------- Kilometros a millas -------------\n";
				cout<<"Ingrese el dato en kilometros: ";
				cin>>medida.dato;
				medida.total = medida.dato / 1.609344;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 2:
				system("cls");
				cout<<"------------- Metros a pulgadas -------------\n";
				cout<<"Ingrese el dato en metros: ";
				cin>>medida.dato;
				medida.total = medida.dato * 39.37;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 3:
				system("cls");
				cout<<"------------- Libras a kilos -------------\n";
				cout<<"Ingrese el dato en libras: ";
				cin>>medida.dato;
				medida.total = medida.dato / 2.2046;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 4:
				system("cls");
				cout<<"------------- Millas a kilometros -------------\n";
				cout<<"Ingrese el dato en millas: ";
				cin>>medida.dato;
				medida.total = medida.dato / 2.2046;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 5:
				system("cls");
				cout<<"------------- Pulgadas a metros -------------\n";
				cout<<"Ingrese el dato en pulgadas: ";
				cin>>medida.dato;
				medida.total = medida.dato / 39.37;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 6:
				system("cls");
				cout<<"------------- Kilos a libras -------------\n";
				cout<<"Ingrese el dato en kilos: ";
				cin>>medida.dato;
				medida.total = medida.dato * 2.205;
				cout<<medida.dato<<" es igual a "<<medida.total<<endl;
			break;
			case 7:
				system("cls");
				main();
			break;
		}
		cout<<"Desea hacer otra conversion(s/n): ";
		cin>>res;
	}while(res == 's'||res == 'S');
}
//Determinar si una palabra o un número es palíndromo.
void Palindromo(){
	system("cls");
	datosPalindromo palindromo;
	cout<<"---------------------- Determine si un numero o palabra es palindroma ----------------------\n";

		cout<<"Ingrese la palabra o numero a evaluar: ";
		cin>>palindromo.palabra;
		
		palindromo.valor = palindromo.palabra.length();
		
		for(int x = palindromo.valor; x >= 0; x--){
			palindromo.convertir = palindromo.convertir + palindromo.palabra.substr(x, 1);
		}
		if(palindromo.convertir == palindromo.palabra){
			cout<<"\n";
			cout<<"La palabra o numero es Palindroma\n";
			cout<<"Ver:\n";
			cout<<"Palabra o numero original: "<<palindromo.palabra<<endl;
			cout<<"Palabra o numero escrita al reves: "<<palindromo.convertir<<endl<<endl;
		}else{
			cout<<"\n";
			cout<<"La palabra o numero NO es Palindroma\n";
			cout<<"Ver:\n";
			cout<<"Palabra o numero original: "<<palindromo.palabra<<endl;
			cout<<"Palabra o numero escrita al reves: "<<palindromo.convertir<<endl;
		}


}
//Conversión de números arábigos a romanos (mínimo 1,000)
void Romanos(){
	system("cls");
	numeroArabigo romano;
	
	cout<<"------------------------- De arabigo a romano -------------------------\n";
	cout<<"Por favor ingrese el numero: ";
	cin>>romano.numero;

	romano.unidades = romano.numero%10 ; romano.numero = romano.numero/10;
	romano.decenas = romano.numero%10 ; romano.numero = romano.numero/10;
	romano.centenas = romano.numero%10 ; romano.numero = romano.numero/10;
	romano.millar = romano.numero%10 ; romano.numero = romano.numero/10;
	
	switch (romano.millar){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break; 
		case 3: cout<<"MMM"; break;
	}
	
	switch (romano.centenas){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCC"; break;
		case 9: cout<<"CM"; break;
	}
	switch (romano.decenas){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXX\n"; break;
		case 9: cout<<"XC\n"; break;
	}
	switch (romano.unidades){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
	cout<<"\n";
}
//Conversión de números enteros a letras
void Letras(){
	system("cls");
	numeroLetras letra;
	
	cout<<"------------------------- De entero a letras -------------------------\n";
	cout<<"Por favor ingrese el numero: ";
	cin>>letra.numero;

	letra.unidades = letra.numero%10 ; letra.numero = letra.numero/10;
	letra.decenas = letra.numero%10 ; letra.numero = letra.numero/10;
	letra.centenas = letra.numero%10 ; letra.numero = letra.numero/10;
	letra.millar = letra.numero%10 ; letra.numero = letra.numero/10;
	
	switch (letra.millar){
		case 0: cout<<""; break;
		case 1: cout<<"Mil"; break;
		case 2: cout<<"Dos mil"; break; 
		case 3: cout<<"Tres mil"; break;
	}
	
	switch (letra.centenas){
		case 0: cout<<""; break;
		case 1: if (letra.decenas==0 && letra.unidades==0){
			cout<<"Cien ";
		}else{
			cout<<"Ciento ";
		}
		break;
		case 2: cout<<"Docientos "; break;
		case 3: cout<<"Trecientos "; break;
		case 4: cout<<"Cuatrocientos "; break;
		case 5: cout<<"Quinientos "; break;
		case 6: cout<<"Seiscientos "; break;
		case 7: cout<<"Setecientos "; break;
		case 8: cout<<"Ochocientos "; break;
		case 9: cout<<"Nuevecientos "; break;
	}
	switch (letra.decenas){
		case 1: switch (letra.unidades){
			case 0: cout<<"Diez "; break;
			case 1: cout<<"Once"; break;
			case 2: cout<<"Doce"; break;
			case 3: cout<<"Trece"; break;
			case 4: cout<<"Catorce"; break;
			case 5: cout<<"Quince"; break;
			case 6: cout<<"Dieciseis"; break;
			case 7: cout<<"Diecisiete"; break;
			case 8: cout<<"Dieciocho"; break;
			case 9: cout<<"Diecinueve"; break;
		}
		break;
		case 2: switch (letra.unidades){
			case 0: cout<<"Veinte "; break;
			case 1: cout<<"Veintiuno"; break;
			case 2: cout<<"Veintidos"; break;
			case 3: cout<<"Veintitres"; break;
			case 4: cout<<"venticuatro"; break;
			case 5: cout<<"veinticinco"; break;
			case 6: cout<<"veintiseis"; break;
			case 7: cout<<"veintisiete"; break;
			case 8: cout<<"veintiocho"; break;
			case 9: cout<<"veintinueve"; break;
		}
		break;
		case 3: if(letra.unidades==0){
			cout<<"Treinta";
		}else{
			cout<<"Treinta y ";
		}
		break;
		case 4: if(letra.unidades==0){
			cout<<"Cuarenta";
		}else{
			cout<<"Cuarenta y ";
		}
		break;
		case 5: if(letra.unidades==0){
			cout<<"Cincuenta";
		}else{
			cout<<"Cincuenta y ";
		}
		break;
		case 6: if(letra.unidades==0){
			cout<<"Sesenta";
		}else{
			cout<<"Sesenta y ";
		}
		break;
		case 7: if(letra.unidades==0){
			cout<<"Setenta";
		}else{
			cout<<"Setenta y ";
		}
		break;
		case 8: if(letra.unidades==0){
			cout<<"Ochenta";
		}else{
			cout<<"ochenta y ";
		}
		break;
		case 9: if(letra.unidades==0){
			cout<<"noventa";
		}else{
			cout<<"noventa y ";
		}
		break;
	}
	switch (letra.unidades){
		case 0: cout<<"cero"; break;
		case 1: cout<<"uno"; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres"; break;
		case 4: cout<<"cuatro"; break;
		case 5: cout<<"cinco"; break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
	}	
	cout<<"\n";
}
//Conversión de números enteros con decimal a letras
void LetrasDecimal(){
	system("cls");
	numeroLetrasDecimal letra;
	
	cout<<"------------------------- De numeros decimales a letras -------------------------\n";
	cout<<"Ingrese la parte entera: ";
	cin>>letra.numeroEntero;
	cout<<"Ingrese la parte decimal: ";
	cin>>letra.numeroDecimal;
	
	//Parte entera del numero
	letra.unidad = letra.numeroEntero%10 ; letra.numeroEntero = letra.numeroEntero/10;
	letra.decena = letra.numeroEntero%10 ; letra.numeroEntero = letra.numeroEntero/10;
	letra.centena = letra.numeroEntero%10 ; letra.numeroEntero = letra.numeroEntero/10;
	//parte decimal del numero
	letra.decima = letra.numeroDecimal%10 ; letra.numeroDecimal = letra.numeroDecimal/10;
	letra.centecima = letra.numeroDecimal%10 ; letra.numeroDecimal = letra.numeroDecimal/10;
	letra.milesima = letra.numeroDecimal%10 ; letra.numeroDecimal = letra.numeroDecimal/10;
	
	switch(letra.centena){
		case 1: if(letra.decena==0&&letra.unidad==0){
			cout<<"Cien";
		}else {
			cout<<"Ciento ";
		}break;
		case 2: cout<<"Doscientos "; break;
		case 3: cout<<"Trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ochocientos "; break;
		case 9: cout<<"nuevecientos "; break;
	}
	
	switch (letra.decena){
		case 1: switch (letra.unidad){
			case 0: cout<<"Diez "; break;
			case 1: cout<<"Once"; break;
			case 2: cout<<"Doce"; break;
			case 3: cout<<"Trece"; break;
			case 4: cout<<"Catorce"; break;
			case 5: cout<<"Quince"; break;
			case 6: cout<<"Dieciseis"; break;
			case 7: cout<<"Diecisiete"; break;
			case 8: cout<<"Dieciocho"; break;
			case 9: cout<<"Diecinueve"; break;
		} break;
		
	case 2: switch (letra.unidad){
			case 0: cout<<"Veinte "; break;
			case 1: cout<<"Veintiuno"; break;
			case 2: cout<<"Veintidos"; break;
			case 3: cout<<"Veintitres"; break;
			case 4: cout<<"venticuatro"; break;
			case 5: cout<<"veinticinco"; break;
			case 6: cout<<"veintiseis"; break;
			case 7: cout<<"veintisiete"; break;
			case 8: cout<<"veintiocho"; break;
			case 9: cout<<"veintinueve"; break;
		}
		break;
		case 3: if(letra.unidad==0){
			cout<<"Treinta";
		}else{
			cout<<"Treinta y ";
		}
		break;
		case 4: if(letra.unidad==0){
			cout<<"Cuarenta";
		}else{
			cout<<"Cuarenta y ";
		}
		break;
		case 5: if(letra.unidad==0){
			cout<<"Cincuenta";
		}else{
			cout<<"Cincuenta y ";
		}
		break;
		case 6: if(letra.unidad==0){
			cout<<"Sesenta";
		}else{
			cout<<"Sesenta y ";
		}
		break;
		case 7: if(letra.unidad==0){
			cout<<"Setenta";
		}else{
			cout<<"Setenta y ";
		}
		break;
		case 8: if(letra.unidad==0){
			cout<<"Ochenta";
		}else{
			cout<<"ochenta y ";
		}
		break;
		case 9: if(letra.unidad==0){
			cout<<"noventa";
		}else{
			cout<<"noventa y ";
		}
		break;
		
	}
		switch (letra.unidad){
		case 0: cout<<"cero"; break;
		case 1: cout<<"uno"; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres"; break;
		case 4: cout<<"cuatro"; break;
		case 5: cout<<"cinco"; break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
	}	
	cout<<" punto ";

	switch(letra.milesima){
		case 1: if(letra.centecima==0&&letra.milesima==0){
			cout<<"Cien";
		}else {
			cout<<"Ciento ";
		}break;
		case 2: cout<<"Doscientos "; break;
		case 3: cout<<"Trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"setecientos "; break;
		case 8: cout<<"ochocientos "; break;
		case 9: cout<<"nuevecientos "; break;
	}
	
	switch (letra.centecima){
		case 1: switch (letra.centecima){
			case 0: cout<<"Diez "; break;
			case 1: cout<<"Once"; break;
			case 2: cout<<"Doce"; break;
			case 3: cout<<"Trece"; break;
			case 4: cout<<"Catorce"; break;
			case 5: cout<<"Quince"; break;
			case 6: cout<<"Dieciseis"; break;
			case 7: cout<<"Diecisiete"; break;
			case 8: cout<<"Dieciocho"; break;
			case 9: cout<<"Diecinueve"; break;
		} break;
		
	case 2: switch (letra.centecima){
			case 0: cout<<"Veinte "; break;
			case 1: cout<<"Veintiuno"; break;
			case 2: cout<<"Veintidos"; break;
			case 3: cout<<"Veintitres"; break;
			case 4: cout<<"venticuatro"; break;
			case 5: cout<<"veinticinco"; break;
			case 6: cout<<"veintiseis"; break;
			case 7: cout<<"veintisiete"; break;
			case 8: cout<<"veintiocho"; break;
			case 9: cout<<"veintinueve"; break;
		}
		break;
		case 3: if(letra.centecima==0){
			cout<<"Treinta";
		}else{
			cout<<"Treinta y ";
		}
		break;
		case 4: if(letra.centecima==0){
			cout<<"Cuarenta";
		}else{
			cout<<"Cuarenta y ";
		}
		break;
		case 5: if(letra.centecima==0){
			cout<<"Cincuenta";
		}else{
			cout<<"Cincuenta y ";
		}
		break;
		case 6: if(letra.centecima==0){
			cout<<"Sesenta";
		}else{
			cout<<"Sesenta y ";
		}
		break;
		case 7: if(letra.centecima==0){
			cout<<"Setenta";
		}else{
			cout<<"Setenta y ";
		}
		break;
		case 8: if(letra.centecima==0){
			cout<<"Ochenta";
		}else{
			cout<<"ochenta y ";
		}
		break;
		case 9: if(letra.centecima==0){
			cout<<"noventa";
		}else{
			cout<<"noventa y ";
		}
		break;
		
	}
		switch (letra.decima){
		case 0: cout<<"cero"; break;
		case 1: cout<<"uno"; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres"; break;
		case 4: cout<<"cuatro"; break;
		case 5: cout<<"cinco"; break;
		case 6: cout<<"seis"; break;
		case 7: cout<<"siete"; break;
		case 8: cout<<"ocho"; break;
		case 9: cout<<"nueve"; break;
	}
	cout<<"\n";	
}
void TablaM(){
	system("cls");
	Tabla dato;
	
	cout<<"------------------------------ tablas de multiplicar del 8------------------------------\n";
	
	for(int x=1; x<=10; x++ ){
		cout<<"8 x "<<x<<" = ";
		dato.total = 8 * x;
		cout<<dato.total<<endl;
	}
}
void TablaM2(){
	system("cls");
	Tabla dato;
	cout<<"------------------------------ tablas de multiplicar------------------------------\n";
	for(int x=1; x<=10; x++ ){
		cout<<"Tabla del "<<x<<endl;
		for(int i=1; i<=10; i++){
			cout<<x<<" x "<<" = ";
			dato.total = x * i;
			cout<<dato.total<<endl;
		}
	}
}
void Mmanual(){
	system("cls");
	Grafica multi;
	cout<<"---------------------------------Multiplicacion Manual---------------------------------\n";
	cout<<"Ingrese los datos como si estubiera escribiendo una multiplicacion en un papel ejemplo:\n";
	cout<<"  8\n";
	cout<<"x 1\n";
	cout<<"______\n";
	cout<<"  8\n";
	cout<<"Ingrese sus datos\n";
	cout<<"\t  ";
	cin>>multi.valroA;
	cout<<"\tx ";
	cin>>multi.valorB;
	cout<<"\t_______\n";
	if(multi.valorB>9){
		multi.unidad = multi.valorB%10; multi.decena = multi.valorB/10;
		multi.totalA  = multi.unidad * multi.valroA;
		cout<<"\t  "<<multi.totalA<<endl;
		multi.totalB  = multi.decena * multi.valroA;
		cout<<"\t "<<multi.totalB<<endl;
		cout<<"\t_______\n";
		multi.totalF = multi.valroA * multi.valorB;
		cout<<"\t"<<multi.totalF<<endl;
	}else{
		multi.totalF = multi.valroA * multi.valorB;
		cout<<"\t "<<multi.totalF<<endl;
	}
}
void Decimal(){
	system("cls");
	cout<<"----------------------------------------- Binario a decimal -----------------------------------------\n";
	int numero, exp, digito;
	double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
}
void Hexadecimal(){
	system ("cls");
	cout<<"------------------------------- Decimal a hexadecimal -------------------------------\n";
	int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce el numero decimal a convertir: ";
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--)
    {
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;
}
void Figuras(){
	system("cls");
	string figura;
	cout<<"---------------------------Figuras geometricas basicas---------------------------\n";
	cout<<"Ingrese el nombte de la figura geometrica (triangulo, cuadrado y rectangulo): ";
	cin>> figura;
	if (figura == "Triangulo"|| figura == "triangulo"){
		cout<<"  /\\"<<endl;
		cout<<" /  \\"<<endl;
		cout<<"/    \\"<<endl;
		cout<<"-------"<<endl;
	}
	if (figura == "cuadrado"|| figura == "Cuadrado"){
		cout<<"-----------"<<endl;
		cout<<"|         |"<<endl;
		cout<<"|         |"<<endl;
		cout<<"|         |"<<endl;
		cout<<"|         |"<<endl;
		cout<<"-----------"<<endl;
	}
	if (figura == "rectangulo"|| figura == "Rectangulo"){
		cout<<"-------"<<endl;
		cout<<"|     |"<<endl;
		cout<<"|     |"<<endl;
		cout<<"|     |"<<endl;
		cout<<"|     |"<<endl;
		cout<<"|     |"<<endl;
		cout<<"-------"<<endl;
	}
}
void Hipotenusa(){
	system("cls");
	int lado1, lado2, hipotenusa;
	cout<<"------------------------------- Clacular la Hipotenusa -------------------------------\n";
	cout<<"Ingrese el cateto A: ";
	cin>>lado1;
	cout<<"Ingrese el cateto B: ";
	cin>>lado2;
	
	hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));
	
	cout<<"La Hipotenusa es de: "<<hipotenusa<<endl;
	
}











