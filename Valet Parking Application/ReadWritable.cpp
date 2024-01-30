/*
-----------------------------------------------------------------------------
 Author      : Dev Soni - dsoni30a@gmail.com
-----------------------------------------------------------------------------
 */

#include "ReadWritable.h"

namespace sdds {
    // default constructor
    ReadWritable::ReadWritable() {
        m_comma = false;
    }
    // default virtual destructor
    ReadWritable::~ReadWritable() { }
    // return the member to determine if we are getting
    // input from a user or a .csv file
    bool ReadWritable::isCsv() const {
        return m_comma;
    }
    // set the flag
    void ReadWritable::setCsv(bool val) {
        m_comma = val;
    }
    // I/O helpers call the unimplemented pure virtual functions
    std::ostream& operator<<(std::ostream& os, ReadWritable& R) {
        R.write(os);
        return os;
    }
    std::istream& operator>>(std::istream& is, ReadWritable& R) {
        R.read(is);
        return is;
    }
}
