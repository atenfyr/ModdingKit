#pragma once
#include "CoreMinimal.h"
#include "BitfieldBitValue.generated.h"

USTRUCT(BlueprintType)
struct FBitfieldBitValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BitIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool BitValue;
    
    ASTRO_API FBitfieldBitValue();
};
