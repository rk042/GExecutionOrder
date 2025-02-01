/* GExecutionOrder_h.cpp */

#include "GExecutionOrder.h"

void GExecutionOrder::_bind_methods() {

	ClassDB::bind_method(D_METHOD("WaitForTime", "message"), &GExecutionOrder::WaitForTime);
	ADD_SIGNAL(MethodInfo("my_signal"));

	ClassDB::bind_method(D_METHOD("GetData"), &GExecutionOrder::GetData);
}

GExecutionOrder::GExecutionOrder() {

}

void GExecutionOrder::WaitForTime(String message) {

	Object::connect("my_signal",callable_mp(this,&GExecutionOrder::EmitTimeEnd));
	Object::emit_signal("my_signal");
}

void GExecutionOrder::EmitTimeEnd() {
	data+=100;
}

int GExecutionOrder::GetData() const {
	return data;
}


