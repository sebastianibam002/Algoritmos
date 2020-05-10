//
//  main.cpp
//  Created by Julian Rincon on 2020-05-05.
//

#include <iostream>
#include "slist.hpp"
using namespace std;


int main() {
    std::cout << boolalpha;
    
    List<int> train;
    cout << "Empty train? " << train.empty() << endl;
    cout << "Number of cars = " << train.size() << endl << endl;

    train.push_front(1);
/*
    train.push_front(13);
    train.push_front(5);
    train.push_front(29);
    train.push_front(7);
    train.push_front(64);
*/
    train.display();
    cout << "Empty train? " << train.empty() << endl << endl;

    train.pop_front();
    train.push_front(83);
    train.display();
cout<<"back: "<<train.back()<<endl;
    int min_pax = 8, max_pax = 32;
    unsigned num_cars = train.range_counting(min_pax, max_pax);
    cout << "Cars range("<< min_pax << ", " << max_pax << ") = " << num_cars << endl;
    
    cout << endl;
    cout << "Pax in front car = " << train.front() << endl;
    cout << "Pax in back car = " << train.back() << endl;

    return 0;
}
