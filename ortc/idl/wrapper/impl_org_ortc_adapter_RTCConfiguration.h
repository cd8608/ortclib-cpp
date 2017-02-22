// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_adapter_RTCConfiguration.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {
        namespace adapter {

          struct RTCConfiguration : public wrapper::org::ortc::adapter::RTCConfiguration
          {
            RTCConfigurationWeakPtr thisWeak_;

            RTCConfiguration();
            virtual ~RTCConfiguration();

            // methods RTCConfiguration
            virtual void wrapper_init_org_ortc_adapter_RTCConfiguration() override;
            virtual void wrapper_init_org_ortc_adapter_RTCConfiguration(wrapper::org::ortc::adapter::RTCConfigurationPtr source) override;
          };

        } // adapter
      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

