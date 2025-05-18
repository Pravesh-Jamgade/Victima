#include "ExtraConfig.h"

ExtraConfig::ExtraConfig()
{
    shift_amt = Sim()->getCfg()->getIntArray("perf_model/l2_cache/shift_indexing", 0);
    std::cout << "[ExtraConfig] shift_amt, "  << shift_amt << '\n';
};