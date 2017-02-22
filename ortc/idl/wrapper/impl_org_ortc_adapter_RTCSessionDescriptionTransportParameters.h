// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_adapter_RTCSessionDescriptionTransportParameters.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {
        namespace adapter {

          struct RTCSessionDescriptionTransportParameters : public wrapper::org::ortc::adapter::RTCSessionDescriptionTransportParameters
          {
            RTCSessionDescriptionTransportParametersWeakPtr thisWeak_;

            RTCSessionDescriptionTransportParameters();
            virtual ~RTCSessionDescriptionTransportParameters();

            // methods RTCSessionDescriptionTransportParameters
            virtual void wrapper_init_org_ortc_adapter_RTCSessionDescriptionTransportParameters() override;
            virtual void wrapper_init_org_ortc_adapter_RTCSessionDescriptionTransportParameters(wrapper::org::ortc::adapter::RTCSessionDescriptionTransportParametersPtr source) override;
            virtual void wrapper_init_org_ortc_adapter_RTCSessionDescriptionTransportParameters(wrapper::org::ortc::JsonPtr json) override;
            virtual wrapper::org::ortc::JsonPtr toJson() override;
            virtual String hash() override;
          };

        } // adapter
      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

