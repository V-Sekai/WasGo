/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "EditorResourcePreviewGenerator.h"
#include "Texture.h"
#include "Resource.h"
#include "Variant.h"
#include "Object.h"
#include "Node.h"
class EditorResourcePreview : public Node{
public: EditorResourcePreview();
void  _preview_ready(String arg0, Texture arg1, Texture arg2, int arg3, String arg4, Variant arg5);
void  add_preview_generator(EditorResourcePreviewGenerator generator);
void  check_for_invalidation(String path);
void  queue_edited_resource_preview(Resource resource, Object receiver, String receiver_func, Variant userdata);
void  queue_resource_preview(String path, Object receiver, String receiver_func, Variant userdata);
void  remove_preview_generator(EditorResourcePreviewGenerator generator);
};