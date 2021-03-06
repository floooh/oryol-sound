#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::soundEffectPool
    @ingroup _priv
    @brief resource pool for sound effects
*/
#include "Resource/ResourcePool.h"
#include "Sound/Core/soundEffect.h"

namespace Oryol {
namespace _priv {
class soundEffectPool : public ResourcePool<soundEffect> {};
} // namespace _pric
} // namespace Oryol
