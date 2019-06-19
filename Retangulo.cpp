#include <iostream>
#include "retangulo.h"
Retang::Retang(data a,data b, data c, data d){
    x  = c;
    y  = d;
    x0 = a;
    y0 = b;
}
int main (){
    Retang x(7,8,3,4);
    x.largura();
    x.altura();
    std::cout <<"O perimetro eh: "<<  x.perimetro()<<std::endl;
    std::cout <<"A area eh: "<<  x.area()<<std::endl;
    x.show();
}