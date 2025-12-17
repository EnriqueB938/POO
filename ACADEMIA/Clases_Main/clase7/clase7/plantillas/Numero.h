#ifndef NUMERO_H
#define NUMERO_H

template <class T, class G>
class Numero
{
private:
    T valor_;
    G valor2_;

public:
    Numero()
    {
        valor_ = 0;
    }

    Numero(T valor)
    {
        valor_ = valor;
    }

    T get()
    {
        return valor_;
    }

    void set(T valor)
    {
        valor_ = valor;
    }
};

int main()
{
    Numero n<int, double>(4);
    int v = n.get();

    Numero n2<float>(4.9);

    return 0;
}

#endif