/* GExecutionOrder_h.cpp */

#include "GExecutionOrder.h"

void GExecutionOrder::_bind_methods() {
	ClassDB::bind_method("CreateSignal", &GExecutionOrder::CreateSignal);
	ClassDB::bind_method("EmitSignal", &GExecutionOrder::EmitSignal);
	ClassDB::bind_method("GetCurrentTag", &GExecutionOrder::GetCurrentTag);
}

GExecutionOrder::GExecutionOrder() {
	current_tag.instantiate();
}

void GExecutionOrder::CreateSignal() {
	current_tag.ptr()->Wait();
}

void GExecutionOrder::EmitSignal() {
	current_tag.ptr()->Emit();
}

Ref<GExecutionTag> GExecutionOrder::GetCurrentTag() {
	return current_tag;
}
