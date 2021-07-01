/*
 * main.cpp
 *
 *  Created on: Oct 11, 2020
 *      Author: fabio
 */

#include <iostream>
#include <math.h>

#define PI 3.141592

using namespace std;

void imprimir_superficie(float radio){
	float superficie;
	superficie = 4 * PI * pow(radio,2);
	cout << "Superficie= " << superficie << endl;
}

void imprimir_volumen(float radio){
	float volumen;
	volumen = (float(4)/3) * PI * pow(radio,3);
	cout << "Volumen= " << volumen << endl;
}

int main(){
	float radio;
	cout << "Ingrese el radio: " << endl;
	cin >> radio;
	imprimir_superficie(radio);
	imprimir_volumen(radio);
	return 0;
}

