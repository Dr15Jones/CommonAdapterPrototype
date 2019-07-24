#include "FWCore/Utilities/interface/EDGetToken.h"

namespace art {

  template<typename T>
    using ProductToken = edm::EDGetTokenT<T>;
}
