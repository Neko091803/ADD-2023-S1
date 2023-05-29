#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <unordered_map>
#include <unordered_set>
#include "Document.h"

class DocumentManager {
public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
  
private:
    std::unordered_map<int, Document> documentCollection; 
    std::unordered_map<std::string, int> documentNameToID; 
    std::unordered_set<int> patronCollection; 
};

#endif  // DOCUMENT_MANAGER_H
