#ifndef _retangulo_h_
#define _retangulo_h_ 1
typedef int data;
class Retang{
private:
    data x,y,x0,y0;
public:
    Retang(data a,data b, data c, data d);
    void show();
    int largura(){
        return y0-y;
    }
    int altura(){
        return x0-x;
    }
    int area(){
        int n;
        n = largura() * altura();
        return n;
    }
    int perimetro(){
        int q = 2*(y0 + largura());
        int c = 2*(x0 + altura());
    return q + c;
    }

};
#endif