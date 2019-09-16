#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure {
    protected:
        float base;
        float height;
        float apothem;
        int sides;
    public:
        void set_base(float *b) {
            base = *b;
        }

        void set_height(float *h) {
            height = *h;
        }

        void set_apothem(float *p) {
            apothem = *p;
        }

        void set_sides(int *s) {
            sides = *s;
        }
};

class Square: public Figure {
    public:

        Square(float *b) {
            Figure::set_base(b);
        }

        float getArea(){
            return base * base;
        }

        float getPerimeter(){
             return base * 4;
        }



};

class Rectangle: public Figure {
    public:

        Rectangle(float *b, float *h) {
            Figure::set_base(b);
            Figure::set_height(h);
        }

        float getArea(){
            return base * height;
        }

        float getPerimeter(){
             return 2 * (base + height);
        }

};

class Triangle: public Figure {
    public:
        Triangle(float *b, float *h) {
            Figure::set_base(b);
            Figure::set_height(h);
        }

        float getArea(){
            return base * height / 2;
        }

        float getPerimeter(){
             return base * 3;
        }

};

class Circle: public Figure {
    public:
        Circle(float *r) {
            Figure::set_base(r);
        }

        float getArea(){
            return 3.1416 * (base * base);
        }

        float getPerimeter(){
             return 2 * 3.1416 * base;
        }

};

class Poligon: public Figure {
    public:
        Poligon(float *b, float *p, int *s) {
            Figure::set_base(b);
            Figure::set_apothem(p);
            Figure::set_sides(s);
        }

        float getArea(){
            return getPerimeter() * apothem / 2;
        }

        float getPerimeter(){
             return base * sides;
        }

};

#endif // FIGURE_H_INCLUDED
