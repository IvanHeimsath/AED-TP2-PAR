/*
	Name: TP#2-PAR
	Course: K1091
	Author: Ivan Heimsath
	Date: 23/04/15 00:30
	Description: 
*/

#include<iostream>
using namespace std;
int main()
{
  int par;
  cout<< "--------Ingreso de Numeros Pares--------\n\n";
  cout<< "Ingrese valor para verificar si es Par: ";
  cin>> par;
  if (par%2==0){
                 cout<< "\nEl Numero ingresado es Par";}
           else{
                 cout<< "\nEl Numero no es par, vuelva a ejecutar el programa";
                }
}
