#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
public:
    std::string nom;
    int age;

    Contact(const std::string& nom, int age);
};

#endif // CONTACT_H
