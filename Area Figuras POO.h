#ifndef TRIANGULO_H
#define TRIANGULO_H


class Triangulo
{
private:
    double base, altura;

public:

    Triangulo(double base_, double altura_)
    {
        base = base_;
        altura = altura_;
    }

    getArea()
    {
        return base * altura / 2;
    }

    getPerimeter()
    {
        return base * 3;
    }
};


class Cuadrado
{
private:
    double lado;

public:

    Cuadrado(double lado_)
    {
        lado = lado_;
    }

    getArea()
    {
        return lado * lado;
    }

    getPerimeter()
    {
        return lado * 4;
    }
};

class Rectangulo
{
private:
    double base, altura;

public:

    Rectangulo(double base_, double altura_)
    {
        base = base_;
        altura = altura_;
    }

    getArea()
    {
        return base * altura;
    }

    getPerimeter()
    {
        return 2 * (base + altura);
    }
};

class Poligono
{
private:
    double nlados, apotema, lado;

public:

    Poligono(double nlados_, double lado_, double apotema_)
    {
        nlados = nlados_;
        apotema = apotema_;
        lado = lado_;
    }

    getArea()
    {
        return getPerimeter() * apotema / 2;
    }

    getPerimeter()
    {
        return lado * nlados;
    }
};

class Circunferencia
{
private:
    double radio;

public:

    Circunferencia(double radio_)
    {
        radio = radio_;
    }

    getArea()
    {
        return 3.1416 * (radio * radio);
    }

    getPerimeter()
    {
        return 2 * 3.1416 * radio;
    }
};

#endif // TRIANGULO_H
