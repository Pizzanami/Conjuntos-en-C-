#include "main.cpp"
class Conjunto{
    private:
        vector <int>c;
    public:
        Conjunto();
        int esta(int e);
        friend void operator +(Conjunto const &a, int e);
        friend void operator +(Conjunto const &a, Conjunto const &b);//Union de conjuntos
        friend void operator ==(Conjunto const &a, Conjunto const &b);//comparaciones
        friend void operator -(Conjunto const &a, Conjunto const &b);//Restar
        friend void operator /(Conjunto const &a, Conjunto const &b);//Interseccion
        friend void operator %(Conjunto const &a, Conjunto const &b);//Union - Interseccion
}
