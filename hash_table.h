#pragma once

#include <string>

class HashTable {
public:
    //constructor
    HashTable(size_t size);




    //already provided
    unsigned int hash(std::string &key, int size); 

private:
    size_t size;
};