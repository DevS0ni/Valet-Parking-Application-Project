/*
-----------------------------------------------------------------------------
 Author      : Dev Soni - dsoni30a@gmail.com
-----------------------------------------------------------------------------
 */

#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <iostream>
#include "Vehicle.h"

namespace sdds {
    // concrete car class
    class Car : public Vehicle {
        bool m_wash = false;
        bool m_valid = false;
    public:
        Car();
        Car(const char* plate, const char* mkModel);
        Car(const Car& C);
        Car& operator=(const Car& C);
        virtual ~Car();
        std::ostream& writeType(std::ostream& os) const;
        std::istream& read(std::istream& is = std::cin);
        std::ostream& write(std::ostream& os = std::cout) const;
    };
}

#endif // !SDDS_CAR_H
