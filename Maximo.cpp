#include <iostream>
using namespace std;
int main(){
  float temp,sumatoria,array[6]={13.45,12.4,11.5,16.54,14,10.25} ;
  sumatoria=0;//aqui se sumaran todas las notas para hallar el promedio
  float mayor=array[0];//aqui definimos una nota como mayor para luego compararlas con las demas y obtener la mayor
  float menor=array[0];//lo mismo hacemos para el menor que compararemos con los demas
  for (int i=1;i<6;i++){//usamos for para pasar por cada uno de los elementos del array
    if(mayor<array[i]){//el condicional para obtner el mayor; si se encuentra un numero mayor se reemplaza el valor en la variable "mayor"
      mayor=array[i];
    }
    if(menor>array[i]){
      menor=array[i];
    }
  }
  for(int i=0;i<6;i++){//esta iteración es para sumar todas las notas
    sumatoria=sumatoria+array[i];
  }
  
  for (int i=1;i<6;i++){//este es el algoritmo de ordenamiento por burbuja para ordenar el array y obtener la mediana
    for(int j=0;j<6-1;j++){
      if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<mayor<<"\n"<<menor ;
  cout<<"\n"<<sumatoria/6;//aqui la salida sera el promedio
  cout<<"\n"<<array[3];
}
