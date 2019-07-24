
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "art/Framework/Principal/Event.h"

namespace fhicl {
  class ParameterSet;
}

namespace art {
  class Event;

  class EDProducer : public edm::EDProducer {
  public:

    EDProducer(fhicl::ParameterSet const&) {}

    virtual void produce(art::Event& ) = 0;

  private:
    void produce(edm::Event& iEvent, edm::EventSetup const&) override {
      art::Event ev(iEvent);
      produce(ev);
    }
  };
  
}

#define DEFINE_ART_MODULE(_type_) DEFINE_FWK_MODULE(_type_);
