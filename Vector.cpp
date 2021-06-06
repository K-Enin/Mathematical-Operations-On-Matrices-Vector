#include <vector>
#include "Vector.h"

class Vector {
    public:
        std::vector<int> vektor;
        //initialize members
        Vector(std::vector<int> vec) : vektor(vec) {} 
        int scalarmultiplication(Vector, Vector);
        int size() {return vektor.size(); }
 };

int Vector::scalarmultiplication(Vector vector1, Vector vector2){
    int sum = 0;
    for (int i = 0; i <= vector1.size() ;i++) {
        sum = sum + vector1.vektor.at(i)*vector2.vektor.at(i);
    }
    return sum;
}

// hier noch Kreuzprodukt

