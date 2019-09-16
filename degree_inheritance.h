#ifndef DEGREE_H_INCLUDED
#define DEGREE_H_INCLUDED

class Degree {
    protected:
        float degree;
    public:
        void set_degree(float *d) {
            degree = *d;
        }
};

class Celsius: public Degree {
    public:
        Celsius(float *d) {
            Degree::set_degree(d);
        }
        float getCelsiusToKelvin() {
            return degree + 237;
        }

        float getCelsiusToFarenheit() {
            return degree * 1.8 + 32;
        }
};

class Kelvin: public Degree {
    public:
        Kelvin(float *d) {
            Degree::set_degree(d);
        }

        float getKelvinToFarenheit() {
            return (degree - 273.15 ) * 9 / 5 + 32 ;
        }

        float getKelvinToCelsius() {
            return degree - 237;
        }
};

class Farenheit: public Degree {
    public:

        Farenheit(float *d) {
            Degree::set_degree(d);
        }


        float getFarenheitToKelvin() {
            return (degree - 32) * 5 / 9 + 273.15;
        }

        float getFarenheitToCelsius() {
            return (degree - 32) * 5 / 9;
        }
};

#endif // DEGREE_H_INCLUDED
