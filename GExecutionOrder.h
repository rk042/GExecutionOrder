/* summator.h */

#ifndef GExecutionOrder_h
#define GExecutionOrder_h

#include "core/object/ref_counted.h"

class GExecutionOrder : public RefCounted {
	GDCLASS(GExecutionOrder, RefCounted);
private:
	int data;
protected:
	static void _bind_methods();

public:
	GExecutionOrder();

	void WaitForTime(String message);
	void EmitTimeEnd();
	int GetData() const;
};

#endif // GExecutionOrder_h
