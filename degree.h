#ifndef DEGREE_H_INCLUDED
#define DEGREE_H_INCLUDED

class Degree {
    private:
        float degree;


    public:
        float getCelsiusToKelvin(float degree) {
            return degree + 237;
        }

        float getKelvinToCelsius(float degree) {
            return degree - 237;
        }

        float getCelsiusToFarenheit(float degree) {
            return degree * 1.8 + 32;
        }

        float getFarenheitToCelsius(float degree) {
            return (degree - 32) * 5 / 9;
        }

        float getFarenheitToKelvin(float degree) {
            return (degree - 32) * 5 / 9 + 273.15;
        }

        float getKelvinToFarenheit(float degree) {
            return (degree - 273.15 ) * 9 / 5 + 32 ;
        }


};
#endif // DEGREE_H_INCLUDED
