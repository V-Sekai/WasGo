/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "String.h"
#include "Reference.h"
#include "Variant.h"
#include "Erro.h"
#include "PoolStringArray.h"
class ConfigFile : public Reference{
public: ConfigFile();
void  erase_section(String section);
void  erase_section_key(String section, String key);
PoolStringArray  get_section_keys(String section);
PoolStringArray  get_sections();
PoolStringArray  get_sections();
Variant  get_value(String section, String key, Variant default = null);
bool  has_section(String section);
bool  has_section_key(String section, String key);
enum.Error  load(String path);
enum.Error  load_encrypted(String path, PoolByteArray key);
enum.Error  load_encrypted_pass(String path, String pass);
enum.Error  save(String path);
enum.Error  save_encrypted(String path, PoolByteArray key);
enum.Error  save_encrypted_pass(String path, String pass);
void  set_value(String section, String key, Variant value);
};