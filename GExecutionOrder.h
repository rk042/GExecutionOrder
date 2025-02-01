/* GExecutionOrder.h */

#ifndef GExecutionOrder_h
#define GExecutionOrder_h

#include "core/object/ref_counted.h"
#include "core/templates/vector.h"

#include "GExecutionTag.h"

class GExecutionOrder : public RefCounted {
	GDCLASS(GExecutionOrder, RefCounted);

private:
	Vector<GExecutionTag> tags;
	Ref<GExecutionTag> current_tag;

protected:
	static void _bind_methods();

public:
	GExecutionOrder();

	void CreateSignal();
	void EmitSignal();

	Ref<GExecutionTag> GetCurrentTag();
};

#endif // GExecutionOrder_h
