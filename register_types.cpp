/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "GExecutionOrder.h"
#include "GExecutionTag.h"

void initialize_GExecutionOrder_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<GExecutionOrder>();
	ClassDB::register_class<GExecutionTag>();
}

void uninitialize_GExecutionOrder_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here in this example.
}
