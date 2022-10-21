
/*Вывести несколько ромбов из звездочек. Высоту половины ромба и количество ромбов задает пользователь.*/
/*
   *      *      *      *   
  ***    ***    ***    ***  
 *****  *****  *****  ***** 
****************************
 *****  *****  *****  ***** 
  ***    ***    ***    ***  
   *      *      *      *   
*/

#include <iostream>
int main(){
  int n,m;
  std::cout<<"Enter n and m:";
  std::cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int q=0;q<m;q++){
       for(int j=0;j<n-i;j++)
           std::cout<<" ";
       for(int k=0;k<=2*i;k++)
           std::cout<<"*";
       for(int j=0;j<n-i;j++)
           std::cout<<" ";
      } 
    std::cout<<"\n";
  
}
  for(int i=n-1;i>=0;i--){
    for(int q=0;q<m;q++){
       for(int j=0;j<n-i+1;j++)
         std::cout<<" ";
    for(int k=0;k<2*i-1;k++){
         std::cout<<"*";
      }
     for(int j=0;j<n-i+1;j++)
         std::cout<<" ";
     }
   std::cout<<"\n";
}
return 0;
}
