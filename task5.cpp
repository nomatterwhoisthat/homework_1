/*Вывести в консоль график области заданной неравенством (x^2 + y^2 - 1)^3 - x^2 y^3 <= 0. x меняется от -1.5 до 1.5, y меняется от -1.5 до 1.5. Вывести график в height=21 строк из width=41 символов. Первый символ в первой строке соответствует точке (-1.5, 1.5), а последний (width) символ в последней (height) строке соответвует точке (1.5, -1.5). Если координаты точки удовлетворяют неравенству, то выводить символ *, иначе символ .*/

#include <iostream>
#include <cmath>
int main(){
 const double height=21.,width=41.;
 for(double y=-1.5;y<=1.5;y+=3./height){
    for(double x=-1.5;x<=1.5;x+=3./width){
        double res=pow(pow(x,2)+pow(y,2)-1,3)-pow(x,2)*pow(y,3);
         if(res<=0){
               std::cout<<"*";
         }else{
            std::cout<<" ";
         }
    }
   std::cout<<'\n';
}
return 0;
}
