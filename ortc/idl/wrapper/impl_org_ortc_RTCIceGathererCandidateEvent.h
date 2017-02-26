// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCIceGathererCandidateEvent.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCIceGathererCandidateEvent : public wrapper::org::ortc::RTCIceGathererCandidateEvent
        {
          RTCIceGathererCandidateEventWeakPtr thisWeak_;

          RTCIceGathererCandidateEvent();
          virtual ~RTCIceGathererCandidateEvent();

          // properties RTCIceGathererCandidateEvent
          virtual wrapper::org::ortc::RTCIceCandidatePtr get_candidate() override;
          virtual String get_url() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

