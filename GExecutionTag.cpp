#include "GExecutionTag.h"

void GExecutionTag::_bind_methods() {
	ClassDB::bind_method("Wait", &GExecutionTag::Wait);
	ClassDB::bind_method("Emit", &GExecutionTag::Emit);
	ADD_SIGNAL(MethodInfo("WaitForSignal"));
}

GExecutionTag::GExecutionTag() {
	connect("WaitForSignal",callable_mp(this,&GExecutionTag::CatchCallBack));
}

void GExecutionTag::Wait() {

}

void GExecutionTag::Emit() {
	emit_signal("WaitForSignal");
}

void GExecutionTag::CatchCallBack() {

}

