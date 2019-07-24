#if !defined(art_Event)
#define art_Event

#include "FWCore/Framework/interface/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "canvas/Persistency/Provenance/ProductToken.h"

namespace art {

  class Event {
  public:
  Event(edm::Event& iEvent) : ev_(iEvent) {}

    template<typename T>
      ValidHandle<T> getValidHandle(ProductToken<T> const& iToken) const {
      return edm::makeValid(ev_.getHandle(iToken));
    }

    template<typename T>
      void put(std::unique_ptr<T>&& iPut) {
      ev_.put(std::move(iPut));
    }

  private:
    edm::Event& ev_;
  };
}

#endif
