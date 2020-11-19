/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Shader.h"
#include "Variant.h"
#include "Material.h"
class ShaderMaterial : public Material{
public: ShaderMaterial();
void  _shader_changed();
void  _shader_changed();
Shader  get_shader();
Shader  get_shader();
Variant  get_shader_param(String param);
bool  property_can_revert(String name);
Variant  property_get_revert(String name);
void  set_shader(Shader shader);
void  set_shader_param(String param, Variant value);
};