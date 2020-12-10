/* THIS FILE IS GENERATED */
#ifndef PACKEDSCENE_H
#define PACKEDSCENE_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class Node;
#include "SceneState.h"
#include "error_list.h"
class PackedScene : public Resource{
public:
enum GenEditState{
GEN_EDIT_STATE_DISABLED,
GEN_EDIT_STATE_INSTANCE,
GEN_EDIT_STATE_MAIN
};
bool can_instance();
SceneState get_state();
Node instance(PackedScene::GenEditState p_edit_state = (PackedScene::GenEditState) 0);
Error pack(Node p_path);

protected:
public:
explicit PackedScene(WasGoID p_wasgo_id);
explicit PackedScene(Resource other);
PackedScene();
PackedScene new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_PackedScene_wrapper_can_instance(WasGoID wasgo_id);
WasGoID _wasgo_PackedScene_wrapper_get_state(WasGoID wasgo_id);
WasGoID _wasgo_PackedScene_wrapper_instance(WasGoID wasgo_id, WasGoID p_edit_state);
WasGoID _wasgo_PackedScene_wrapper_pack(WasGoID wasgo_id, WasGoID p_path);

    //constructor wrappers
    WasGoID _wasgo_PackedScene_constructor();
            
}
#endif