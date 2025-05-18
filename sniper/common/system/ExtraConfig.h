#ifndef EXTRA_H
#define EXTRA_H
#include "simulator.h"
#include "sim_api.h"
#include "core.h"
#include "config.h"
#include "config.hpp"

class ExtraConfig
{
   public:
   ExtraConfig();
   ~ExtraConfig();
   int shift_amt = 0;
};
#endif