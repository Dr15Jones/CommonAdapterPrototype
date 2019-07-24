#include "DataFormats/Common/interface/ValidHandle.h"

namespace art {
  template<typename T>
    using ValidHandle = edm::ValidHandle<T>;
;
}
