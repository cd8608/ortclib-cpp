// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCIceGathererCandidateCompleteEvent.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCIceGathererCandidateCompleteEvent : public wrapper::org::ortc::RTCIceGathererCandidateCompleteEvent
        {
          RTCIceGathererCandidateCompleteEventWeakPtr thisWeak_;

          RTCIceGathererCandidateCompleteEvent();
          virtual ~RTCIceGathererCandidateCompleteEvent();

          // properties RTCIceGathererCandidateCompleteEvent
          virtual wrapper::org::ortc::RTCIceCandidateCompletePtr get_candidate() override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

