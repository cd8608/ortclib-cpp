// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCDataChannelParameters.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCDataChannelParameters : public wrapper::org::ortc::RTCDataChannelParameters
        {
          RTCDataChannelParametersWeakPtr thisWeak_;

          RTCDataChannelParameters();
          virtual ~RTCDataChannelParameters();

          // methods RTCDataChannelParameters
          virtual void wrapper_init_org_ortc_RTCDataChannelParameters() override;
          virtual void wrapper_init_org_ortc_RTCDataChannelParameters(wrapper::org::ortc::RTCDataChannelParametersPtr source) override;
          virtual void wrapper_init_org_ortc_RTCDataChannelParameters(wrapper::org::ortc::JsonPtr json) override;
          virtual wrapper::org::ortc::JsonPtr toJson() override;
          virtual String hash() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

