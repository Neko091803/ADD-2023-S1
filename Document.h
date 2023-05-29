#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {
public:
    Document(std::string name = "", int id = 0, int license_limit = 0);
    bool checkOut();
    void checkIn();
    std::string getName() const;
    int getId() const;
    int getLicenseLimit() const;

private:
    std::string name;
    int id;
    int license_limit;
    int current_licenses;
};

#endif  // DOCUMENT_H
