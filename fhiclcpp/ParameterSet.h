#include "FWCore/ParameterSet/interface/ParameterSet.h"

namespace fhicl {

  class ParameterSet {
  public:
  ParameterSet(edm::ParameterSet const& iPSet) : 
    pset_(iPSet) {}

    template<typename T>
      T get(std::string const& iLabel) const {
      return pset_.getParameter<T>(iLabel);
    }

  private:
    edm::ParameterSet pset_;
  };
}
