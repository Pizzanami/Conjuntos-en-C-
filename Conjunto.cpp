#include "Conjunto.h"
Conjunto::Conjunto(){}
Conjunto::int esta(int e){
    for(int i = 0: i < c.size(); i++){
        if(c[i] == e)
            return i;
    }
    return -1;
}
Conjunto::friend void operator +(Conjunto const &a, int e){
    if(a.esta(e) == -1){
        a.c.push_back(e);
    }
}
Conjunto::friend void operator +(Conjunto const &a, Conjunto const &b){
    for(int i = 0; i < b.c.size(); i++){
        a = a + b.c[i];
    }
}
Conjunto::friend bool operator ==(Conjunto const &a, Conjunto const &b){
    if(a.c.size != b.c.size())
        return 0;
    for(int i = 0; i < b.c.size(); i++)
        if(a.esta(b[i]) == -1) return 0;
    return 1;
}
Conjunto::friend void operator -(Conjunto const &a, Conjunto const &b){

}
Conjunto::friend void operator /(Conjunto const &a, Conjunto const &b){

}
Conjunto::friend void operator %(Conjunto const &a, Conjunto const &b){}
