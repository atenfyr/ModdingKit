#pragma once
#include "CoreMinimal.h"
#include "ClientRecordPlayerEventDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FClientRecordPlayerEventDelegate, bool, success, const FString&, EventName, int32, EventId);
