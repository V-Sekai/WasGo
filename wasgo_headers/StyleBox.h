/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Resource.h"
#include "Vector2.h"
#include "Rect2.h"
#include "CanvasItem.h"
class StyleBox : public Resource{
public: StyleBox();
void  draw(RID canvas_item, Rect2 rect);
Vector2  get_center_size();
Vector2  get_center_size();
CanvasItem  get_current_item_drawn();
CanvasItem  get_current_item_drawn();
float  get_default_margin(int margin);
float  get_margin(int margin);
Vector2  get_minimum_size();
Vector2  get_minimum_size();
Vector2  get_offset();
Vector2  get_offset();
void  set_default_margin(int margin, float offset);
bool  test_mask(Vector2 point, Rect2 rect);
};