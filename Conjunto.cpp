#include "Conjunto.h"
Conjunto::Conjunto(){}
void Conjunto::intercambiar(int x, int y){
    c[x] = c[x] + c[y];
    c[y] = c[x] - c[y];
    c[x] = c[x] - c[y];
}
int Conjunto::esta(int e){
    for(int i = 0: i < c.size(); i++){
        if(c[i] == e)
            return i;
    }
    return -1;
}
Conjunto::friend void operator +(Conjunto const &a, int e){
    for(int i = 0: i < c.size(); i++){
        if(c[i] == e) return;
        if(c[i] > e){
            c.insert(c.begin() + i-1, e);
        }
    }
}
Conjunto::friend  operator +(Conjunto const a, Conjunto const b){
    Conjunto nuevo = a;
    for(int i = 0; i < b.c.size(); i++){
        nuevo = nuevo + b.c[i];
    }
    return nuevo;
}
Conjunto::friend bool operator ==(Conjunto const &a, Conjunto const &b){
    if(a.c.size != b.c.size())
        return 0;
    for(int i = 0; i < b.c.size(); i++)
        if(a.c[i] != b.c[i]) return 0;
    return 1;
}
Conjunto::friend void operator -(Conjunto const &a, Conjunto const &b){

}
Conjunto::friend void operator /(Conjunto const &a, Conjunto const &b){

}
Conjunto::friend void operator %(Conjunto const &a, Conjunto const &b){}
