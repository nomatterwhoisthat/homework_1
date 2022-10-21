/*Вывести ромб из зведочек. Высоту половины ромба задает пользователь.*/
/*
   *
  ***
 *****
*******
 *****
  ***
   *
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
  for(int i=n-1;i>=0;i--){
    for(int j=0;j<n-i+1;j++){
       std::cout<<" ";
    }
    for(int k=0;k<i*2-1;k++)
       std::cout<<"*";
  std::cout<<"\n";
}
return 0;
}
