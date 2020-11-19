/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Object.h"
#include "Variant.h"
#include "Erro.h"
class _Thread : public Reference{
public: _Thread();
enum Priority{
PRIORITY_LOW: 0,
PRIORITY_NORMAL: 1,
};
String  get_id();
String  get_id();
bool  is_active();
bool  is_active();
enum.Error  start(Object instance, String method, Variant userdata = null, int priority = 1);
Variant  wait_to_finish();
Variant  wait_to_finish();
};