#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EItemVariantType.h"
#include "ItemVariantList.h"
#include "ItemCatalogEntry.generated.h"

class UItemType;

USTRUCT(BlueprintType)
struct FItemCatalogEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemType> BaseItemType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<EItemVariantType, FItemVariantList> VariantsByType;
    
    ASTRO_API FItemCatalogEntry();
};
