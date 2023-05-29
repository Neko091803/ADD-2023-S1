#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documentCollection[id] = Document(name, id, license_limit);
    documentNameToID[name] = id;
}

void DocumentManager::addPatron(int patronID) {
    patronCollection.insert(patronID);
}

int DocumentManager::search(std::string name) {
    auto it = documentNameToID.find(name);
    return it != documentNameToID.end() ? it->second : 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patronCollection.find(patronID) != patronCollection.end() && 
        documentCollection[docid].checkOut()) {
            return true;
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (patronCollection.find(patronID) != patronCollection.end()) {
        documentCollection[docid].checkIn();
    }
}
