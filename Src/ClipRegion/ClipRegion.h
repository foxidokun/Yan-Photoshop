#ifndef SYM_CLIP_REGION
#define SYM_CLIP_REGION

class RegionSet;
#include "../RegionSet/RegionSet.h"
#include "../Vector/Vector.h"
#include "../Color.h"

class ClipRegion
{
    Vector position;
    Vector size;
    Color  color;

public:
    ClipRegion(Vector position, Vector size, Color color = Color(255, 255, 255));

    Vector GetSize();
    Vector GetPosition();

    friend ClipRegion operator&&(ClipRegion a, ClipRegion b);
    friend RegionSet  operator||(ClipRegion a, ClipRegion b);
    friend RegionSet  operator/ (ClipRegion a, ClipRegion b);
};

ClipRegion operator&&(ClipRegion a, ClipRegion b);
RegionSet  operator||(ClipRegion a, ClipRegion b);
RegionSet  operator/ (ClipRegion a, ClipRegion b);

#endif //SYM_CLIP_REGION