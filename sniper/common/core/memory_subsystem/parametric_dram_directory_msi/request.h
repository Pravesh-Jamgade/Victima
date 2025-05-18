#ifndef REQUEST_H
#define REQUEST_H
#include <bits/stdc++.h>
#include "cache_block_info.h"
using namespace std;

class Request: public CacheBlockInfo
{
    public:
    block_type_t block_type;
    int count = 1;
};

#endif