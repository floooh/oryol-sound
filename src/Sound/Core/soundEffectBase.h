#pragma once
//------------------------------------------------------------------------------
/**
    @class soundEffectBase
    @ingroup _priv
    @brief base class for sound effect resource
*/
#include "Resource/ResourceBase.h"
#include "Sound/Core/SoundEffectSetup.h"

namespace Oryol {
namespace _priv {

class soundEffectBase : public ResourceBase<SoundEffectSetup> {
public:
    /// clear the object
    void Clear();
};

} // namespace _priv
} // namespace Oryol
