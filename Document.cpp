#include "Document.h"

Document::Document(std::string name, int id, int license_limit) 
    : name(name), id(id), license_limit(license_limit), current_licenses(0) {}

bool Document::checkOut() {
    if (current_licenses < license_limit) {
        current_licenses++;
        return true;
    }
    return false;
}

void Document::checkIn() {
    if (current_licenses > 0) {
        current_licenses--;
    }
}

std::string Document::getName() const {
    return name;
}

int Document::getId() const {
    return id;
}

int Document::getLicenseLimit() const {
    return license_limit;
}
