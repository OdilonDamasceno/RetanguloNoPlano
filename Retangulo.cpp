#include <iostream>
#include "retangulo.h"

Retang::Retang(data a,data b, data c, data d){
    x  = c;
    y  = d;
    x0 = a;
    y0 = b;
}
void show(){
    for(int i= 0; i< largura(); i++){
        std::cout << "--" << std::endl;
        for(int j = 0; i < altura();j++){
            std::cout << "|" << std::endl;
        }
    }
}
int main (){
    Retang x(3,4,2,5);
    x.largura();
    x.altura();
    x.show();
}