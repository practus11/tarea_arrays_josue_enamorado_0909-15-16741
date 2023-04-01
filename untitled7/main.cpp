#include <iostream>
using namespace std;
/*
int main(){
	int num [10] = { 5, 3, 7, 9, 2, 4, 2, 3,5,3};

	int sum = 0;
    for (int i=0;i<10;i++)
        sum += num[i];
    cout<<"las suma es: " << sum <<endl;

	return 0;
     }

int main(){
    int nums[6],n,mayor=0;
    cout<<"digite el numero de elementos: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". Digite un numero: "<<endl;
        cin>>nums[i];

        if(nums[i]>mayor){
            mayor=nums[i];
        }
    }
    cout<<"el elemento mayor es:"<<mayor<<endl;
    return 0;
}
int main(){
    int n, i, VA,nums[8];
    cout<<"digite el numero de elementos: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<". Digite un numero: "<<endl;
        cin>>nums[i];
    }
    cout<< "______________ASCENDENTE____________________"<<endl;
    for( i=0;i<n;i++){
        cout<<"elementos "<<i+1<<" : "<<nums[i]<< endl;
    }
    for( i=0;i<n/2;i++){
        VA =  nums[i];
        nums[i]=nums[n-1-i];
        nums[n-1-i]=VA;
    }
    cout<< "______________DESCENDENTE___________________"<<endl;
    for( i=0;i<n;i++){
        cout<<"elementos "<<i+1<<" : "<<nums[i]<< endl;
    }
    return 0;
}
int main(){
    int num [10] = { 6, 8, 7, 4, 1, 4, 4, 7,5,3};

    int i,sum = 0;
    for( i=0;i<10;i++){
        cout<<"numero "<<i+1<<" es: "<<num[i]<< endl;
    }
    for (int i=0;i<10;i++)
        sum += num[i];
    cout<<"las suma es: " << sum <<endl;

    return 0;
}
*/
 int main(){
    string frut;
    int i,contador;
    string fruta[]={"fresa","sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    contador=0;
    for (i=0;i <9;i++){
        cout<<i+1<<" frutas: " <<   fruta[i]<<endl;}//nos imprime todos nuestros datos del arreglo
    cout<<"*********************************************************************"<<endl;
    cout<<"Escriba la fruta que quiere saber cuantas veces se repite: ";
    cin>>frut;
    for (i=0;i <9;i++){
        if (frut == fruta[i])
            contador++;
    }
    cout<<"la fruta: "<<frut <<" se repite: "<<contador<<endl;
    return 0;
}
