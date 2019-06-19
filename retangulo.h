#ifndef _retangulo_h_
#define _retangulo_h_ 1
typedef int data;
class Retang{
private:
    data x,y,x0,y0;
public:
    Retang(data a,data b, data c, data d);
    int largura(){
        return y0-y;
    }
    int altura(){
        return x0-x;
    }
    int area(){
        return largura() * altura();
    }
    int perimetro(){
        int q = 2*largura();
        int c = 2*altura();
    return q + c;
    }
    void show(){
        for(int i= 0; i< largura(); i++){
            std::cout << "|";
            for(int h= 0; h< largura(); h++){
                std::cout << "--";
            }
            std::cout << "|";
            std::cout<<std::endl;
        }
    std::cout<<std::endl;
    }
};
#endif