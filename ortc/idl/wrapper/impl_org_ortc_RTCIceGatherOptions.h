// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCIceGatherOptions.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCIceGatherOptions : public wrapper::org::ortc::RTCIceGatherOptions
        {
          RTCIceGatherOptionsWeakPtr thisWeak_;

          RTCIceGatherOptions();
          virtual ~RTCIceGatherOptions();

          // methods RTCIceGatherOptions
          virtual void wrapper_init_org_ortc_RTCIceGatherOptions() override;
          virtual void wrapper_init_org_ortc_RTCIceGatherOptions(wrapper::org::ortc::RTCIceGatherOptionsPtr source) override;
          virtual void wrapper_init_org_ortc_RTCIceGatherOptions(wrapper::org::ortc::JsonPtr json) override;
          virtual wrapper::org::ortc::JsonPtr toJson() override;
          virtual String hash() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

