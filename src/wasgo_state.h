/*************************************************************************/
/*  wasgo_state.h                                                        */
/*************************************************************************/ 
/*
This file defines the WasGoState class.
A WasGoState contains everything needed to run a wasm script.
When creating a game with Wasm, the user makes these nodes and puts them in their scene.
These get saved with the scene and when the game is run they're used by the Wasm Runtime Singleton to create working wasm instances.

These nodes also handle things like translating wasm commands to Godot functions.
*/

#ifndef WASGO_STATE_H
#define WASGO_STATE_H

#include "resource_wasm.h"
#include "wasm_export.h"
#include <core/engine.h>
#include <core/variant.h>
#include <scene/main/node.h>

class WasGoState : public Node {
	GDCLASS(WasGoState, Node);

	//Properties
	Ref<WasmResource> wasm_script;
	Dictionary properties = {}; //Properties to be passed to the script when it starts up
	uint32_t stack_size = 8192;
	uint32_t heap_size = 8192;

public:
	typedef uint32_t WasGoID;

	WasGoState();
	~WasGoState();

	void _initialize();

	virtual void _validate_property(PropertyInfo &property) const;
	void _notification(int p_what);
	static void _bind_methods();

	void set_stack_size(int p_stack_size);
	int get_stack_size();

	void set_heap_size(int p_heap_size);
	int get_heap_size();

	void set_wasm_script(Ref<WasmResource> p_wasm_script);
	Ref<WasmResource> get_wasm_script();

	void set_properties(Dictionary p_properties);
	Dictionary get_properties();

	void init(wasm_module_t instance);

	//Starting from here
	int call_wasm_function(String func_name, int argc = 0, uint32_t *argv = nullptr);

	int call_object_function(WasGoID object_id, int argc, uint32_t *argv);
	int call_array_function(WasGoID array_id, int argc, uint32_t *argv);
	int call_dictionary_function(WasGoID dictionary_id, int argc, uint32_t *argv);

	Object *lookup_object(WasGoID id);
	Array lookup_array(WasGoID id);
	Dictionary lookup_dictionary(WasGoID id);

	bool is_active();

	//the regular node callbacks
	// void _enter_tree();
	// void _exit_tree();
	// String _get_configuration_warning();
	// void _input(InputEvent event);
	// void _physics_process(float delta);
	// void _process(float delta);
	// void _ready();
	// void _unhandled_input(InputEvent event);
	// void _unhandled_key_input(InputEventKey event);

private:
	void cleanup();
	Object *lookup_referencedObject(WasGoID id);
	wasm_module_t module = NULL;
	wasm_module_inst_t module_inst = NULL;
	wasm_exec_env_t exec_env = NULL;
	uint32_t wasm_buffer = 0;

	Ref<WasmResource> wasm_resource;

	HashMap<ObjectID, WasGoID> createdObjects;
	HashMap<WasGoID, ObjectID> createdObjectsReverse;
	HashMap<ObjectID, WasGoID> referencedObjects;
	HashMap<WasGoID, ObjectID> referencedObjectsReverse;

	HashMap<Array, WasGoID> referencedArrays;
	HashMap<WasGoID, Array> referencedArraysReverse;

	HashMap<Dictionary, WasGoID> referencedDictionary;
	HashMap<WasGoID, Dictionary> referencedDictionaryReverse;

	// HashMap<WasGoID, int> createdObjectCounts;
	// HashMap<WasGoID, int> referencedObjectCounts;
	// HashMap<WasGoID, int> referencedArraysCounts;
	// HashMap<WasGoID, int> referencedDictionaryCounts;

	int add_object(Object *);
};

#endif