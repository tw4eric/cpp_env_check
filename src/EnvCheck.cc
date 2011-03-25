#include <iostream>
using namespace std;

#include <boost/foreach.hpp>

#include "EnvCheck.hh"

namespace CCNEnvCheck {

    void EnvCheck::printNumbers() const {

        int numbers[]={0,1,2,3,4,5,6,7,8,9};

        cout << "Printing 10 Numbers: " << endl;

        BOOST_FOREACH(int n, numbers)
        {
            cout << n << endl;
        }

        cout << "If you see all the 10 digits above, "
            "then your environment is good!!" <<endl;

    }

}

