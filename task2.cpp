/* Вывести равнобедренный треугольник из звездочек. Высоту задает пользователь.*/
/*
   *
  ***
 *****
*******
*/

#include <iostream>
int main(){
  int n;
  std::cout<<"Enter n:";
  std::cin>>n;
  for(int i=0;i<n;i++){
   for(int j=0;j<n-i;j++){
      std::cout<<" ";
     }
   for(int k=0;k<=2*i;k++)
     std::cout<<"*";
  std::cout<<"\n";
  }
return 0;
}
