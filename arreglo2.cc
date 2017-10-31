#include<iostream>
using namespace std;

int main(){
  size_t talla=16;
 int sum=0;
 int*edad=new int [talla];

 cout<<"numero de alumnos a encuestar "<<endl;
 cin>>talla;
 for (int i=0; i<talla; i++){
   cout<<"¿Que edad tienes?"<<endl;
   cin>>edad[i];
  }
 for(int j=0; j<talla; j++)
   sum+=(edad[j]+3);
 for (int j=0; j<talla-1; j++)
   cout<<edad[j]<<" , ";
 cout << edad[talla-1];
 cout<<endl;
 cout<<"el promedio de edad a la que se graduara esta generacion es"<<sum/talla<<endl;
 return 0;
}
