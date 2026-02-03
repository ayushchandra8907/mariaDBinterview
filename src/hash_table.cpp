#include "hash_table.h"









// provided - do not touch!
unsigned int HashTable::hash(std::string &key, int size) {
    // hash stolen from cs225
    unsigned int h = 0;
    for (size_t i = 0; i < key.length(); ++i)
        h = 33 * h + key[i];
    return h % size;
}