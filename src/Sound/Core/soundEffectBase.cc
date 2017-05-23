//------------------------------------------------------------------------------
//  soundEffectBase.cc
//------------------------------------------------------------------------------
#include "Pre.h"
#include "soundEffectBase.h"

namespace Oryol {
namespace _priv {

//------------------------------------------------------------------------------
void
soundEffectBase::Clear() {
    this->Setup = SoundEffectSetup();
}

} // namespace _priv
} // namespace Oryol
