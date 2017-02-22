// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_adapter_RTCMediaStreamTrackConfiguration.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {
        namespace adapter {

          struct RTCMediaStreamTrackConfiguration : public wrapper::org::ortc::adapter::RTCMediaStreamTrackConfiguration
          {
            RTCMediaStreamTrackConfigurationWeakPtr thisWeak_;

            RTCMediaStreamTrackConfiguration();
            virtual ~RTCMediaStreamTrackConfiguration();

            // methods RTCMediaStreamTrackConfiguration
            virtual void wrapper_init_org_ortc_adapter_RTCMediaStreamTrackConfiguration() override;
            virtual void wrapper_init_org_ortc_adapter_RTCMediaStreamTrackConfiguration(wrapper::org::ortc::adapter::RTCMediaStreamTrackConfigurationPtr source) override;
          };

        } // adapter
      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

