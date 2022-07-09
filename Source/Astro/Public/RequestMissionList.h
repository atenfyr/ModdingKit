#pragma once
#include "CoreMinimal.h"
#include "RequestMissionList.generated.h"

USTRUCT(BlueprintType)
struct FRequestMissionList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> RequestingMissions;
    
    ASTRO_API FRequestMissionList();
};
